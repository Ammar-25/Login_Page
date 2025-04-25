#include "user.h"
#include "Property.h"
#include "Global.h"


user::user()
{

}

user::user(int id, bool isAdmin, double balance, string name, string email, string password, string phonenumber, bool frozen)
{
	this->id = id;
	this->name = name;
	this->email = email;
	this->password = password;
	this->phoneNumber = phonenumber;
	this->isAdmin = isAdmin;
	this->frozen = frozen;
	this->balance = balance;
}

bool user::getAdmin() {
	return this->isAdmin;
}

int user::getId()
{
	return id;
}

string user::getName()
{
	return name;
}

string user::getEmail() {
	return email;
}

string user::getPassword()
{
	return password;
}

string user::getPhoneNumber() {
	return phoneNumber;
}

string user::to_string() {
	return "User ID: " + std::to_string(id) + "\n" +
		"Name: " + name + "\n" +
		"Email: " + email + "\n" +
		"Password: " + password + "\n" +
		"Phone Number: " + phoneNumber + '\n' +
		"Is Frozen: " + std::to_string(frozen) + '\n' +
		"Is Admin: " + std::to_string(isAdmin);
}



void user::setFrozen(bool freeze)
{
	this->frozen = freeze;
}

void user::addProperty(Property pro)
{
	if (!this->frozen) {
		Global::properties.push_back(pro);
	}
}

bool user::removeProperty(int propertyID)
{

	if (!this->frozen) {
		for (auto it = Global::properties.begin(); it != Global::properties.end(); ++it) {
			if ((it)->getId() == propertyID && ((it)->getOwnerId() == Global::currId || this->isAdmin)) {
				Global::properties.erase(it);
				return true;
			}
		}
	}
	return false;
}

void user::editProperty(int proId, Property pro)
{
	if (!this->frozen) {
		for (auto& p : Global::properties) {
			if (p.getId() == proId) {
				p = pro;
				break;
			}
		}
	}
}

void user::addBalance(int balance)
{
	this->balance += balance;
}

void user::buyProperty(int proId)
{
	if (!this->frozen) {
		for (auto& p : Global::properties) {
			if (p.getId() == proId) {
				if (this->balance >= p.getPrice() && p.getAvailability() == 1)  {
					p.setAvailability(2);
				}
			}
		}
	}
}

void user::setAvailability(int proId, int Availability)
{
	if (this->isAdmin) {
		for (auto& p : Global::properties) {
			if (p.getId() == proId) {
				p.setAvailability(Availability);
			}
		}
	}
}

void user::Moderate(int id, bool freezeFlag)
{
	if (this->isAdmin) {
		for (auto& User : Global::users) {
			if (User.getId() == id) {
				User.setFrozen(freezeFlag);
				break;
			}
		}
	}
}

void user::highLight_property(int proId, bool h)
{
	if (this->isAdmin) {
		for (auto& pro : Global::properties) {
			if (pro.getId() == proId) {
				pro.setHighlight(h);
			}
		}
	}
}
