#include "person.h"


person::person(int id, string name, string phone, int role, string username, string password, int salary) {
	this->id = id;
	this->salary = salary;
	this->name = name;
	this->phone = phone;
	this->role = role;
	this->username = username;
	this->password = password;
}
person::person() : id(0), salary(0), role(0) {

}
person::person(const person& p) {
	this->id = p.id;
	this->salary = p.salary;
	this->name = p.name;
	this->phone = p.phone;
	this->role = p.role;
	this->username = p.username;
	this->password = p.password;
}

person::~person() {}

int person::getId() {
	return this->id;
}

void person::setId(int id) {
	this->id = id;
}

int person::getSalary() {
	return this->salary;
}

void person::setSalary(int salary) {
	this->salary = salary;
}

string person::getName() {
	return this->name;
}

string person::getPhone() {
	return this->phone;
}

int person::getRole() {
	return this->role;
}

void person::setRole(int x) {
	this->role = x;
}
string person::getUserName() {
	return this->username;
}

void person::setUsername(string newUserName) {
	this->username = newUserName;
}

string person::getPassword() {
	return this->password;
}

void person::setPassword(string newPassword) {
	this->password = newPassword;
}
