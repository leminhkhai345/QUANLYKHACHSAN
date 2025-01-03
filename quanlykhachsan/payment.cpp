#include "payment.h"
#include <iostream>
using namespace std;

payment::payment(string type, string bank, string accountNumber) {
	this->type = type;
	this->bank = bank;
	this->accountNumber = accountNumber;
}

payment::payment() {}

payment::~payment() {}

string payment::getType() {
	return this->type;
}

void payment::setType(string type) {
	this->type = type;
}

string payment::getBank() {
	return this->bank;
}

void payment::setBank(string b) {
	this->bank = b;
}

string payment::getAccountNumber() {
	return this->accountNumber;
}

void payment::setAccountNumber(string accountNumber) {
	this->accountNumber = accountNumber;
}

void payment::display() {
	if (this->type == "Cash") {
		cout << "payment method: " << this->type;
	}
	else if (this->type == "Banking") {
		cout << "payment method: " << this->type << " " << this->bank << " " << this->accountNumber;
	}
}