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
            << p.getHighlight() << "\n";
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
        std::string type, location;
        double price, area;
        bool isHighlighted;

        getline(ss, temp, ','); //Reads the first field from the line into temp 
        id = stoi(temp); //Converts that string to an int using stoi() and assigns it to id.
        getline(ss, type, ','); // second value: property type (string)
        getline(ss, location, ','); // third value: property location (string)
        getline(ss, temp, ','); price = stod(temp); // fourth value: property price (double)
        getline(ss, temp, ','); ownerId = stoi(temp); // fifth value: property owner id (int)
        getline(ss, temp, ','); availability = stoi(temp); // sixth value: property availability (int)
        getline(ss, temp, ','); numBedrooms = stoi(temp); // seventh value: property number of bedrooms (int)
        getline(ss, temp, ','); area = stod(temp); // eighth value: property area (double)
        getline(ss, temp); isHighlighted = stoi(temp); // ninth value: property highlight (bool)

        Global::properties.emplace_back(id, type, location, price, ownerId, availability, numBedrooms, area, isHighlighted);
        // Adds a new Property object to the properties vector using emplace_back().
    }

    userFile.close();
    propertyFile.close();
}
