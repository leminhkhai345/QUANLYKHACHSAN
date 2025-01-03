#include "staff.h"


staff::staff() {
	this->role = 1;
}

void staff::information() {
	cout << "id: " << this->id << endl;
	cout << "Name: " << this->name << endl;
	cout << "Phone: " << this->phone << endl;
}

staff::~staff() {

}