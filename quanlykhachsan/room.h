#ifndef ROOM_H
#define ROOM_H

#include <iostream>
#include <string>
using namespace std;

class room {
	int roomId;
	int price;
	string roomType;

public:

	room();

	room(int, string, int);

	room(const room&);

	~room();

	void setRoomId(int);

	string getRoomType();

	void setRoomtype(string);

	int getRoomId();

	int getPrice();

	void setPrice(int);

	void displayDetail();

};

#endif 