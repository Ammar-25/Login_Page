#pragma once
#include <string>
#include "Property.h"
using namespace std;


class user
{
private:
    int id;
    bool isAdmin; // 0 -> user , 1 -> admin
    double balance;
    string name;
    string email;
    string password;
    string phoneNumber;
    bool frozen; // 1 -> frozen , 0 -> unfrozen
public:
    user();
    user(int id, bool isAdmin, double balance , string name, string email, string password, string phonenumber , bool frozen);

    int getId();
    bool getAdmin();
    string getName();
    string getEmail();
    string getPassword();
    string getPhoneNumber();
    string to_string();


    // setters

    void setFrozen(bool freeze);

    // Property functions
    void addProperty(Property pro);
    bool removeProperty(int propertyID);
    void editProperty(int proId, Property pro);
    void addBalance(int balance);
    void buyProperty(int proId);
    void setAvailability(int proId, int Availability); // for Admin
    void Moderate(int id, bool freezeFlag); // for Admin
    void highLight_property(int proId , bool h); // for Admin
};