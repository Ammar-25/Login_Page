#pragma once
#include <string>
#include "Property.h"


class user
{
private:
    int id;
    bool isAdmin; // 0 -> user , 1 -> admin
    double balance;
    std::string name;
    std::string email;
    std::string password;
    std::string phoneNumber;
    bool frozen; // 1 -> frozen , 0 -> unfrozen
public:
    user();
    user(int id, bool isAdmin, double balance, std::string name, std::string email, std::string password, std::string phonenumber, bool frozen);
    
    
    // getters 
    int getId();
    bool getAdmin();
    bool getFrozen();
    double getBalance();
    std::string getName();
    std::string getEmail();
    std::string getPassword();
    std::string getPhoneNumber();
    std::string to_string();

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
    void highLight_property(int proId, bool h); // for Admin


    int add_admin(std::string name, std::string email, std::string pass, std::string phone); // 0->added succesfully, 1 -> pass < 8 , 2 -> email exists , 3-> not admin

};