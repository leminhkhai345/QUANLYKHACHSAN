#include "room.h"


room::room() {}

room::room(int roomId, string roomType, int price) {
	this->roomId = roomId;
	this->price = price;
	this->roomType = roomType;
}

room::room(const room& r) {
	this->roomId = r.roomId;
	this->price = r.price;
	this->roomType = r.roomType;

}

room::~room() {

}
void room::setRoomId(int x) {
	this->roomId = x;
}

string room::getRoomType() {
	return this->roomType;
}

void room::setRoomtype(string s) {
	this->roomType = s;
}

int room::getRoomId() {
	return this->roomId;
}


int room::getPrice() {
	return this->price;
}

void room::setPrice(int price) {
	this->price = price;
}

void room::displayDetail() {
	if (this->roomId < 10) {
		cout << "|     " << this->roomId << "         |            " << this->roomType << "           |              "
			<< this->price << "               |" << endl;
	}
	else if (this->roomId < 100) {
		cout << "|     " << this->roomId << "        |            " << this->roomType << "           |              "
			<< this->price << "               |" << endl;
	}
}