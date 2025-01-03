#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "person.h"
#include <iostream>
#include <string>

using namespace std;

class customer : public person {

public:

	customer(int, string, string, int, string, string, int = 0);

	~customer();

	void information();

};

#endif 
