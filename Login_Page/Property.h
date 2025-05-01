#pragma once
#include<string>
class Property
{
private:
    int id;
    std::string type;
    std::string location;
    int price;
    int ownerId;
    int availability; // 0-> pending, 1 -> approved, 2 -> sold, 3 -> declined
    int numBedrooms;
    double area;
    bool isHighLighted; // 0 -> unHighLighted , 1-> highLighted 

public:
    // Constructor
    Property();
    Property(int id, std::string type, std::string location, int price,
        int ownerId, int availability, int numBedrooms, double area, bool isHighLighted = 0);

    // Getters
    int getId();
    std::string getType();
    std::string getLocation();
    int getPrice();
    int getOwnerId();
    int getAvailability();
    int getNumBedrooms();
    double getArea();
    bool getHighlight();

    // Setters
    void setType(std::string& newType);
    void setLocation(std::string& newLocation);
    void setPrice(int newPrice);
    void setAvailability(int newAvailability);
    void setNumBedrooms(int newNumBedrooms);
    void setArea(double newArea);
    void setHighlight(bool h);

    std::string to_string();
};