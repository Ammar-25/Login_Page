#pragma once
#include<string>
using namespace std;
class Property
{
private:
    int id;
    string type;
    string location;
    double price;
    int ownerId;
    int availability; // 0-> bending, 1 -> approved , 2 -> sold , 3 declined
    int numBedrooms;
    double area;
    bool isHighLighted; // 0 -> unHighLighted , 1-> highLighted 
public:
    // Constructor
    Property();
    Property(int id,  string type, string location, double price,
        int ownerId, int availability, int numBedrooms, double area , bool isHighLighted = 0);

    // Getters
    int getId();
    string getType();
    string getLocation();
    double getPrice();
    int getOwnerId();
    int getAvailability();
    int getNumBedrooms();
    double getArea();
    bool getHighlight();

    // Setters
    void setType(string& newType);
    void setLocation(string& newLocation);
    void setPrice(double newPrice);
    void setAvailability(int newAvailability);
    void setNumBedrooms(int newNumBedrooms);
    void setArea(double newArea);
    void setHighlight(bool h);

    string to_string();
};