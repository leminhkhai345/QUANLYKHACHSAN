#include "customer.h"


customer::customer(int id, string name, string phone, int role, string username, string password, int salary) {
	this->id = id;
	this->salary = salary;
	this->name = name;
	this->phone = phone;
	this->role = role;
	this->username = username;
	this->password = password;

}

void customer::information() {
	cout << "id: " << this->id << endl;
	cout << "Name: " << this->name << endl;
	cout << "Phone: " << this->phone << endl;
}

customer::~customer() {

}