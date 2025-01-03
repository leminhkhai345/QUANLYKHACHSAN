#include <iostream>
#include "List.h"
#include "Node.h"
#include "room.h"
#include "person.h"
#include "booking.h"
#include "payment.h"
#include "customer.h"
#include <fstream>
#include <string>
#include <ctime>
#include <Windows.h>
#include <conio.h>  
using namespace std;

void clearRectangle(int, int, int, int);

void gotoxy(int, int);

POINT getMouseClickPosition();

person* Login(List<person>&);

void Register(List<person>&, int);

int Booking(List<room>&, List<booking>&, person*);

void cancellation(List<booking>&, person*);

void addRoom(List<room>&);

void editRoom(List<room>&);

void deleteRoom(List<room>&);

int numberOfRoomBooked(List<booking>&);

int numberOfRoom(List<room>&);

int numberOfRoomAvailable(List<room>&, List<booking>&);

long long revenueByDay(List<booking>&);

string toUpper(const string&);

void SearchforCustomerByName(List<person>&);

void SearchForBookedRoom(List<booking>&);

List<room> openRoom();

List<person> openPerson(int&);

List<booking> openBooking();

void closeRoom(List<room>&);

void closePerson(List<person>&);

void closeBooking(List<booking>&);

void staffOption(List<room>&, List<person>&, List<booking>&);

void customerOption(List<room>&, List<person>&, List<booking>&, person*);

person* home(List<person>&, int&, bool&);