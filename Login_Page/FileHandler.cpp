#include "FileHandler.h"
#include <sstream> 
void FileHandler::Save()
{
    std::ofstream userFile("Users.txt");
    std::ofstream propertyFile("Properties.txt");

    if (!userFile || !propertyFile)
    {
        std::cout << "Error opening file(s) for saving.\n";
        return;
    }

    // to Save Users
    for (auto& u : Global::users)
    {
        userFile << u.second.getId() << ","
            << u.second.getAdmin() << ","
            << u.second.getBalance() << ","
            << u.second.getName() << ","
            << u.second.getEmail() << ","
            << u.second.getPassword() << ","
            << u.second.getPhoneNumber() << ","
            << u.second.getFrozen() << "\n";
    }

    // to Save Properties
    for (auto& p : Global::properties)
    {
        propertyFile << p.getId() << ","
            << p.getType() << ","
            << p.getLocation() << ","
            << p.getPrice() << ","
            << p.getOwnerId() << ","
            << p.getAvailability() << ","
            << p.getNumBedrooms() << ","
            << p.getArea() << ","
            << p.getHighlight() << ","
            << p.getDescription() << "\n";
    }

    userFile.close();
    propertyFile.close();
}

void FileHandler::Load()
{
    std::ifstream userFile("Users.txt");
    std::ifstream propertyFile("Properties.txt");

    if (!userFile || !propertyFile)
    {
        std::cout << "Error opening file(s) for loading.\n";
        return;
    }

    // to Load Users
    Global::users.clear();
    std::string line;
    while (getline(userFile, line)) // read each line into line variable
    {
        std::stringstream ss(line);
        std::string temp;

        int id, isAdmin;
        double balance;
        std::string name, email, password, phoneNumber;
        bool frozen;

        getline(ss, temp, ','); id = stoi(temp); // first value: user id (int)
        getline(ss, temp, ','); isAdmin = stoi(temp); // second value: user or admin status (int)
        getline(ss, temp, ','); balance = stod(temp); // third value: user balance (double)
        getline(ss, name, ','); // fourth value: user name (string)
        getline(ss, email, ','); // fifth value: user email (string)
        getline(ss, password, ','); // sixth value: user password (string)
        getline(ss, phoneNumber, ','); // seventh value: user phone number (string)
        getline(ss, temp); frozen = stoi(temp); // eighth value: user frozen status (bool)

        Global::users[id] = user(id, isAdmin, balance, name, email, password, phoneNumber, frozen);
        // Adds a new user object to the users vector using emplace_back().
    }

    // to Load Properties
    Global::properties.clear();
    while (getline(propertyFile, line))
    {
        std::stringstream ss(line);
        std::string temp;

        int id, ownerId, availability, numBedrooms;
        std::string type, location , description;
        double price, area;
        bool isHighlighted;

        std::getline(ss, temp, ','); id = std::stoi(temp);
        std::getline(ss, type, ',');
        std::getline(ss, location, ',');
        std::getline(ss, temp, ','); price = std::stod(temp);
        std::getline(ss, temp, ','); ownerId = std::stoi(temp);
        std::getline(ss, temp, ','); availability = std::stoi(temp);
        std::getline(ss, temp, ','); numBedrooms = std::stoi(temp);
        std::getline(ss, temp, ','); area = std::stod(temp);
        std::getline(ss, temp, ','); isHighlighted = std::stoi(temp);
        std::getline(ss, description);

        Global::properties.emplace_back(id, type, location, price, ownerId, availability, numBedrooms, area, isHighlighted , description);
        // Adds a new Property object to the properties vector using emplace_back().
    }

    userFile.close();
    propertyFile.close();
}
