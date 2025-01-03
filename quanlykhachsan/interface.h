#include "List.h"
#include "person.h"
#include "booking.h"
#include "room.h"
#include <ctime>

void loginInterface();

void registerInterface();

void bookingInterface();

void bankChoiceInterface();

void paymentMethodInterface();

void roomInformationInterface();

void roomListInterface1(int&);

void roomListInterface2(int&);

int cancellationInterface(List<booking>&, person*);

void addRoomInterface(List<room>&);

void editRoomInterface(List<room>&);

void deleteRoomInterface(List<room>&);

void bookedRoomInterface();

int bookedRoomDetailInterface(List<booking>&, time_t, time_t);

void enterDayInterface();

int availableRoomInterface(List<room>&, List<booking>&, time_t, time_t);

void enterDayRevenueInterface();

long long revenueInterface(List<booking>&, time_t, time_t);

void searchNameInterface();

void dataCustomerInterface(List<person>&, string);

void searchBookedRoomInterface();

void dataOfBookedRoomInterface(List<booking>&, string);

void staffOptionInterface();

void customerOptionInterface();

void homeInterface();