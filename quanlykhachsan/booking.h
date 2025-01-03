#pragma once
#ifndef BOOKING_H
#define BOOKING_H


#include <string>
#include <iostream>
#include "payment.h"
#include <ctime>

using namespace std;

class booking {
	int customerId;
	string name;
	int roomId;
	int amount;
	payment paymentMethod;
	time_t checkInDate, checkOutDate;


public:

	booking(int, string, int, int, payment, time_t, time_t);

	booking(const booking&);

	~booking();

	int getCustomerId();

	void setCustomerId(int);

	string getName();

	void setName(string);

	int getRoomId();

	void setRoomId(int);

	int getAmount();

	void setAmount(int);

	payment getPaymentMethod();

	void setPaymentMethod(payment);

	time_t getCheckInDate();

	time_t getCheckOutDate();

	void setCheckInDate(time_t);

	void setCheckOutDate(time_t);

	void display();
};

#endif 