#ifndef PAYMENT_H
#define PAYMENT_H

#include <iostream>
#include <string>
using namespace std;

class payment {
	string type;
	string bank;
	string accountNumber;
public:
	payment(string, string = "", string = "");

	payment();

	~payment();

	string getType();

	void setType(string);

	string getBank();

	void setBank(string);

	string getAccountNumber();

	void setAccountNumber(string);

	void display();
};
#endif 