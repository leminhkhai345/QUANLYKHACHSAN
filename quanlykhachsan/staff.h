#ifndef STAFF_H
#define STAFF_H
#include "person.h"
#include <iostream>
#include <string>
using namespace std;

class staff : public person {

public:

	staff();

	~staff();

	void information();

};


#endif // !staff_H
