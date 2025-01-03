#include "booking.h"


booking::booking(int customerId, string name, int roomId, int amount, payment paymentMethod, time_t checkInDate, time_t checkOutDate) {
	this->customerId = customerId;
	this->name = name;
	this->roomId = roomId;
	this->amount = amount;
	this->paymentMethod = paymentMethod;
	this->checkInDate = checkInDate;
	this->checkOutDate = checkOutDate;

}

booking::booking(const booking& b) {
	this->customerId = b.customerId;
	this->name = b.name;
	this->roomId = b.roomId;
	this->amount = b.amount;
	this->paymentMethod = b.paymentMethod;
	this->checkInDate = b.checkOutDate;
	this->checkOutDate = b.checkOutDate;
}

booking::~booking() {}

int booking::getCustomerId() {
	return this->customerId;
}

void booking::setCustomerId(int x) {
	this->customerId = x;
}


string booking::getName() {
	return this->name;
}

void booking::setName(string name) {
	this->name = name;
}

int booking::getRoomId() {
	return this->roomId;
}

void booking::setRoomId(int x) {
	this->roomId = x;
}

int booking::getAmount() {
	return this->amount;
}
void booking::setAmount(int x) {
	this->amount = x;
}

payment booking::getPaymentMethod() {
	return this->paymentMethod;
}

void booking::setPaymentMethod(payment x) {
	this->paymentMethod = x;
}



time_t booking::getCheckInDate() {
	return this->checkInDate;
}

time_t booking::getCheckOutDate() {
	return this->checkOutDate;
}

void booking::setCheckInDate(time_t t) {
	this->checkInDate = t;
}

void booking::setCheckOutDate(time_t t) {
	this->checkOutDate = t;
}

void booking::display() {
	time_t t1 = checkInDate;
	time_t t2 = checkOutDate;
	tm tt1, tt2;
	localtime_s(&tt1, &t1);
	localtime_s(&tt2, &t2);
	if (this->roomId < 10) {
		cout << "|       " << this->roomId << "       |       " << this->name;
		string temp = "";
		for (int i = 0; i < 18 - this->name.size(); i++) {
			temp += " ";
		}
		cout << temp << "|     ";
		if (this->amount >= 1000000) 	cout << this->amount << "        |        ";
		else if (this->amount < 1000000) cout << this->amount << "         |        ";
		if (tt1.tm_mday < 10) cout << "0";
		cout << tt1.tm_mday << "/";
		if (tt1.tm_mon + 1 < 10) cout << "0";
		cout << tt1.tm_mon + 1 << "/" << tt1.tm_year + 1900 << "       |       ";
		if (tt2.tm_mday < 10) cout << "0";
		cout << tt2.tm_mday << "/";
		if (tt2.tm_mon + 1 < 10) cout << "0";
		cout << tt2.tm_mon + 1 << "/" << tt2.tm_year + 1900 << "     |" << endl;
	}
	else if (this->roomId < 100) {
		cout << "|       " << this->roomId << "      |       " << this->name;
		string temp = "";
		for (int i = 0; i < 18 - this->name.size(); i++) {
			temp += " ";
		}
		cout << temp << "|     ";
		if (this->amount >= 1000000) 	cout << this->amount << "        |        ";
		else if (this->amount < 1000000) cout << this->amount << "         |        ";
		if (tt1.tm_mday < 10) cout << "0";
		cout << tt1.tm_mday << "/";
		if (tt1.tm_mon + 1 < 10) cout << "0";
		cout << tt1.tm_mon + 1 << "/" << tt1.tm_year + 1900 << "       |       ";
		if (tt2.tm_mday < 10) cout << "0";
		cout << tt2.tm_mday << "/";
		if (tt2.tm_mon + 1 < 10) cout << "0";
		cout << tt2.tm_mon + 1 << "/" << tt2.tm_year + 1900 << "     |" << endl;
	}
}