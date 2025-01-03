#ifndef person_H
#define person_H

#include <string>
#include <iostream>
using namespace std;

class  person {
protected:
	int id, salary;
	string name;
	string phone;
	int role;
	string username, password;

public:

	person(int, string, string, int, string, string, int = 0);

	person();

	person(const person&);

	virtual ~person();

	int getId();

	void setId(int);

	int getSalary();

	void setSalary(int);

	string getName();

	string getPhone();

	int getRole();

	void setRole(int);

	string getUserName();

	void setUsername(string);

	string getPassword();

	void setPassword(string);

	virtual void information() = 0;
};

#endif