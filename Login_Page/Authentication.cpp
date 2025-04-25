#include "Authentication.h"
#include "Global.h"
#include <vector>
int Authentication::SignIn(string email, string pass)
{
	for (auto& u : Global::users) {
		if (u.getEmail() == email) {
			if (u.getPassword() == pass) {
				Global::currUser = u;
				Global::currId = u.getId();
				return 0;
			}
			return 1;
		}
	}
	return 2;
}

int Authentication::SignUp(string name, string email, string pass , string phone)
{

	if (pass.length() < 8) {
		return 1;
	}
	bool ok = true;
	int id = 0;
	for (auto u : Global::users) {
		id = max(id, u.getId());
		if (u.getEmail() == email){
			ok = false;
		}
	}
	if (!ok) return 2;

	Global::users.push_back(user(id + 1, 0, 0, name, email, pass, phone, 0));
	return 0;
}
