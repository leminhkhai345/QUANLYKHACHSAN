#include "interface.h"
#include "Function.h"


void loginInterface() {
	gotoxy(72, 5);
	cout << "LOGIN";
	gotoxy(45, 10);
	cout << "          _________________________________________";
	gotoxy(45, 12);
	cout << "          |_______________________________________|";
	gotoxy(45, 11);
	cout << "username ";
	gotoxy(95, 11);
	cout << "|";
	gotoxy(55, 11);
	cout << "|    ";


	gotoxy(45, 13);
	cout << "          _________________________________________";
	gotoxy(45, 15);
	cout << "          |_______________________________________|";
	gotoxy(45, 14);
	cout << "password ";
	gotoxy(95, 14);
	cout << "|";
	gotoxy(55, 14);
	cout << "|    ";

	gotoxy(67, 18);
	cout << "_________________";
	gotoxy(67, 19); cout << "|     LOGIN     |";
	gotoxy(67, 20); cout << "|_______________|";

	gotoxy(110, 23); cout << "________________________";
	gotoxy(110, 24); cout << "|                      |";
	gotoxy(110, 25); cout << "|         EXIT         |";
	gotoxy(110, 26); cout << "|______________________|";
}


void registerInterface() {
	gotoxy(50, 2); cout << "-------------------  REGISTER  -------------------";

	gotoxy(100, 25); cout << "___________________";
	gotoxy(100, 26); cout << "|                 |";
	gotoxy(100, 27); cout << "|       EXIT      |";
	gotoxy(100, 28); cout << "|_________________|";

	gotoxy(35, 5); cout << "__________________________________________________";
	gotoxy(35, 6); cout << "|";
	gotoxy(35, 7); cout << "|";
	gotoxy(35, 8); cout << "|________________________________________________|";
	gotoxy(84, 6); cout << "|";
	gotoxy(84, 7); cout << "|";
	gotoxy(20, 7); cout << "NAME";

	gotoxy(35, 10); cout << "__________________________________________________";
	gotoxy(35, 11); cout << "|";
	gotoxy(35, 12); cout << "|";
	gotoxy(35, 13); cout << "|________________________________________________|";
	gotoxy(84, 11); cout << "|";
	gotoxy(84, 12); cout << "|";
	gotoxy(20, 12); cout << "PHONE";

	gotoxy(35, 15); cout << "__________________________________________________";
	gotoxy(35, 16); cout << "|";
	gotoxy(35, 17); cout << "|";
	gotoxy(35, 18); cout << "|________________________________________________|";
	gotoxy(84, 16); cout << "|";
	gotoxy(84, 17); cout << "|";
	gotoxy(20, 17); cout << "USERNAME";

	gotoxy(35, 20); cout << "__________________________________________________";
	gotoxy(35, 21); cout << "|";
	gotoxy(35, 22); cout << "|";
	gotoxy(35, 23); cout << "|________________________________________________|";
	gotoxy(84, 21); cout << "|";
	gotoxy(84, 22); cout << "|";
	gotoxy(20, 22); cout << "PASSWORD";

	gotoxy(35, 25); cout << "__________________________________________________";
	gotoxy(35, 26); cout << "|";
	gotoxy(35, 27); cout << "|";
	gotoxy(35, 28); cout << "|________________________________________________|";
	gotoxy(84, 26); cout << "|";
	gotoxy(84, 27); cout << "|";
	gotoxy(16, 27); cout << "CONFIRM PASSWORD";
}

void bookingInterface() {
	gotoxy(5, 10); cout << "CHECK-IN DATE";
	gotoxy(5, 15); cout << "CHECK-OUT DATE";
	gotoxy(30, 9); cout << "-----------";
	gotoxy(25, 10); cout << "DAY  |";
	gotoxy(30, 11); cout << "-----------";
	gotoxy(40, 10); cout << "|";

	gotoxy(57, 9); cout << "-----------";
	gotoxy(50, 10); cout << "MONTH  |";
	gotoxy(57, 11); cout << "-----------";
	gotoxy(67, 10); cout << "|";


	gotoxy(83, 9); cout << "-----------";
	gotoxy(77, 10); cout << "YEAR  |";
	gotoxy(83, 11); cout << "-----------";
	gotoxy(93, 10); cout << "|";

	gotoxy(30, 14); cout << "-----------";
	gotoxy(25, 15); cout << "DAY  |";
	gotoxy(30, 16); cout << "-----------";
	gotoxy(40, 15); cout << "|";

	gotoxy(57, 14); cout << "-----------";
	gotoxy(50, 15); cout << "MONTH  |";
	gotoxy(57, 16); cout << "-----------";
	gotoxy(67, 15); cout << "|";

	gotoxy(83, 14); cout << "-----------";
	gotoxy(77, 15); cout << "YEAR  |";
	gotoxy(83, 16); cout << "-----------";
	gotoxy(93, 15); cout << "|";

	gotoxy(100, 20); cout << "_________________";
	gotoxy(100, 21); cout << "|               |";
	gotoxy(100, 22); cout << "|      EXIT     |";
	gotoxy(100, 23); cout << "|_______________|";
}


void bankChoiceInterface() {
	gotoxy(55, 5); cout << "---------CHOOSE THE BANK----------";
	gotoxy(35, 9); cout << "________________";
	gotoxy(35, 10); cout << "|              |";
	gotoxy(35, 11); cout << "|     BIDV     |";
	gotoxy(35, 12); cout << "|______________|";

	gotoxy(63, 9); cout << "________________";
	gotoxy(63, 10); cout << "|              |";
	gotoxy(63, 11); cout << "|  VIETTINBANK |";
	gotoxy(63, 12); cout << "|______________|";

	gotoxy(91, 9); cout << "________________";
	gotoxy(91, 10); cout << "|              |";
	gotoxy(91, 11); cout << "|    MB BANK   |";
	gotoxy(91, 12); cout << "|______________|";

	gotoxy(35, 17); cout << "________________";
	gotoxy(35, 18); cout << "|              |";
	gotoxy(35, 19); cout << "|   AGRIBANK   |";
	gotoxy(35, 20); cout << "|______________|";

	gotoxy(63, 17); cout << "________________";
	gotoxy(63, 18); cout << "|              |";
	gotoxy(63, 19); cout << "|  VIETCOMBANK |";
	gotoxy(63, 20); cout << "|______________|";

	gotoxy(91, 17); cout << "________________";
	gotoxy(91, 18); cout << "|              |";
	gotoxy(91, 19); cout << "|      ACB     |";
	gotoxy(91, 20); cout << "|______________|";

	gotoxy(35, 25); cout << "________________";
	gotoxy(35, 26); cout << "|              |";
	gotoxy(35, 27); cout << "|  TECHCOMBANK |";
	gotoxy(35, 28); cout << "|______________|";

	gotoxy(63, 25); cout << "________________";
	gotoxy(63, 26); cout << "|              |";
	gotoxy(63, 27); cout << "|    TP BANK   |";
	gotoxy(63, 28); cout << "|______________|";

	gotoxy(91, 25); cout << "________________";
	gotoxy(91, 26); cout << "|              |";
	gotoxy(91, 27); cout << "|   OCEANBANK  |";
	gotoxy(91, 28); cout << "|______________|";

	gotoxy(120, 32); cout << "__________________";
	gotoxy(120, 33); cout << "|                |";
	gotoxy(120, 34); cout << "|      EXIT      |";
	gotoxy(120, 35); cout << "|________________|";
}

void paymentMethodInterface() {
	gotoxy(50, 5); cout << "-------------------------------------------";
	gotoxy(50, 6); cout << "|              PAYMENT METHOD             |";
	gotoxy(50, 7); cout << "-------------------------------------------";

	gotoxy(40, 12); cout << "_____________________";
	gotoxy(40, 13); cout << "|                   |";
	gotoxy(40, 14); cout << "|        CASH       |";
	gotoxy(40, 15); cout << "|___________________|";

	gotoxy(80, 12); cout << "_____________________";
	gotoxy(80, 13); cout << "|                   |";
	gotoxy(80, 14); cout << "|      BANKING      |";
	gotoxy(80, 15); cout << "|___________________|";

	gotoxy(110, 20); cout << "_________________";
	gotoxy(110, 21); cout << "|               |";
	gotoxy(110, 22); cout << "|      EXIT     |";
	gotoxy(110, 23); cout << "|_______________|";
}

void roomInformationInterface() {
	gotoxy(50, 5); cout << "-------------------------------------------------";
	gotoxy(50, 6); cout << "|      Room id      |";
	gotoxy(50, 7); cout << "-------------------------------------------------";
	gotoxy(50, 8); cout << "|     Room type     |";
	gotoxy(50, 9); cout << "-------------------------------------------------";
	gotoxy(50, 10); cout << "|      Amount       |";
	gotoxy(50, 11); cout << "-------------------------------------------------";
	gotoxy(98, 6); cout << "|";
	gotoxy(98, 8); cout << "|";
	gotoxy(98, 10); cout << "|";
}

void roomListInterface1(int& k) {
	gotoxy(50, 2); cout << "-----------------  BOOKING ROOM  ----------------";
	gotoxy(20, k++);
	cout << "-----------------------------------------------------------------------------------" << endl;
	gotoxy(20, k++);
	cout << "|    ROOM ID    |          ROOM TYPE          |          PRICE FOR 1 DAY          |" << endl;
	gotoxy(20, k++);
	cout << "-----------------------------------------------------------------------------------" << endl;
}

void roomListInterface2(int& k) {
	gotoxy(20, k++);
	cout << "-----------------------------------------------------------------------------------" << endl;
	k += 3;

	gotoxy(36, k++); cout << "_________________________________";
	gotoxy(36, k++); cout << "|                               |";
	gotoxy(36, k); cout << "|";
	int tmp1 = k;
	gotoxy(68, k++); cout << "|";
	gotoxy(36, k++); cout << "|_______________________________|";
	gotoxy(26, tmp1); cout << "ROOM ID";
	gotoxy(50, tmp1);
}

int cancellationInterface(List<booking>& bl, person* c) {
	Node<booking>* temp = bl.getHead();
	time_t now = time(nullptr);
	cout << "\n                                            ----------------------------  CANCELLATION  ----------------------------";
	gotoxy(20, 4); cout << "All room you can cacel :" << endl;
	int k = 7;
	gotoxy(20, k++);
	cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
	gotoxy(20, k++);
	cout << "|    room id    |           Name          |        Amount      |      check-in date      |     check-out date   |" << endl;
	gotoxy(20, k++);
	cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
	while (temp) {
		if (temp->getValue()->getCustomerId() == c->getId() && temp->getValue()->getCheckInDate() > now) {
			gotoxy(20, k++);
			temp->getValue()->display();
		}
		temp = temp->getNext();
	}
	gotoxy(20, k++);
	cout << "-----------------------------------------------------------------------------------------------------------------\n" << endl;

	k += 3;
	int temp1;
	gotoxy(40, k++); cout << "_____________________________________";
	gotoxy(40, k++); cout << "|                                   |";
	temp1 = k;
	gotoxy(40, k++); cout << "|";
	gotoxy(76, temp1); cout << "|";
	gotoxy(40, k++); cout << "|___________________________________|";
	gotoxy(20, temp1); cout << "ROOM ID";

	k += 3;
	int temp2;
	gotoxy(20, k++); cout << "CHECK-IN DATE";
	k += 2;
	gotoxy(30, k); cout << "_________________";
	gotoxy(60, k); cout << "_________________";
	gotoxy(90, k); cout << "_________________";
	k++;
	gotoxy(30, k); cout << "|";
	gotoxy(46, k); cout << "|";
	gotoxy(60, k); cout << "|";
	gotoxy(76, k); cout << "|";
	gotoxy(90, k); cout << "|";
	gotoxy(106, k); cout << "|";
	k++;
	temp2 = k;
	gotoxy(25, k); cout << "DAY";
	gotoxy(30, k); cout << "|";
	gotoxy(46, k); cout << "|";
	gotoxy(53, k); cout << "MONTH";
	gotoxy(60, k); cout << "|";
	gotoxy(76, k); cout << "|";
	gotoxy(84, k); cout << "YEAR";
	gotoxy(90, k); cout << "|";
	gotoxy(106, k); cout << "|";
	k++;
	gotoxy(30, k); cout << "|_______________|";
	gotoxy(60, k); cout << "|_______________|";
	gotoxy(90, k); cout << "|_______________|";
	gotoxy(135, 1); cout << "_______________";
	gotoxy(135, 2); cout << "|             |";
	gotoxy(135, 3); cout << "|     EXIT    |";
	gotoxy(135, 4); cout << "|_____________|";
	return temp2;
}

void addRoomInterface(List<room>& rl) {
	gotoxy(50, 2); cout << "-------------------- ADD ROOM --------------------";
	gotoxy(0, 7);
	cout << "-----------------------------------------------------------------------------------" << endl;
	cout << "|    ROOM ID    |          ROOM TYPE          |          PRICE FOR 1 DAY          |" << endl;
	cout << "-----------------------------------------------------------------------------------" << endl;
	Node<room>* r = rl.getHead();
	while (r) {
		r->getValue()->displayDetail();
		r = r->getNext();
	}
	cout << "-----------------------------------------------------------------------------------";

	gotoxy(90, 12); cout << "ROOM ID";
	gotoxy(100, 10); cout << "___________________________";
	gotoxy(100, 11); cout << "|                         |";
	gotoxy(100, 12); cout << "|";
	gotoxy(126, 12); cout << "|";
	gotoxy(100, 13); cout << "|_________________________|";

	gotoxy(90, 18); cout << "ROOM TYPE";
	gotoxy(100, 16); cout << "___________________________";
	gotoxy(100, 17); cout << "|                         |";
	gotoxy(100, 18); cout << "|";
	gotoxy(126, 18); cout << "|";
	gotoxy(100, 19); cout << "|_________________________|";

	gotoxy(90, 24); cout << "PRICE";
	gotoxy(100, 22); cout << "___________________________";
	gotoxy(100, 23); cout << "|                         |";
	gotoxy(100, 24); cout << "|";
	gotoxy(126, 24); cout << "|";
	gotoxy(100, 25); cout << "|_________________________|";

	gotoxy(100, 30); cout << "___________________________";
	gotoxy(100, 31); cout << "|                         |";
	gotoxy(100, 32); cout << "|          EXIT           |";
	gotoxy(100, 33); cout << "|_________________________|";
}

void editRoomInterface(List<room>& rl) {
	gotoxy(50, 2); cout << "-------------------- EDIT ROOM --------------------";
	gotoxy(0, 7);
	cout << "-----------------------------------------------------------------------------------" << endl;
	cout << "|    ROOM ID    |          ROOM TYPE          |          PRICE FOR 1 DAY          |" << endl;
	cout << "-----------------------------------------------------------------------------------" << endl;
	Node<room>* r = rl.getHead();
	while (r) {
		r->getValue()->displayDetail();
		r = r->getNext();
	}
	cout << "-----------------------------------------------------------------------------------";

	gotoxy(90, 12); cout << "ROOM ID";
	gotoxy(110, 10); cout << "___________________________";
	gotoxy(110, 11); cout << "|                         |";
	gotoxy(110, 12); cout << "|";
	gotoxy(136, 12); cout << "|";
	gotoxy(110, 13); cout << "|_________________________|";

	gotoxy(90, 18); cout << "NEW ROOM TYPE";
	gotoxy(110, 16); cout << "___________________________";
	gotoxy(110, 17); cout << "|                         |";
	gotoxy(110, 18); cout << "|";
	gotoxy(136, 18); cout << "|";
	gotoxy(110, 19); cout << "|_________________________|";

	gotoxy(90, 24); cout << "NEW PRICE";
	gotoxy(110, 22); cout << "___________________________";
	gotoxy(110, 23); cout << "|                         |";
	gotoxy(110, 24); cout << "|";
	gotoxy(136, 24); cout << "|";
	gotoxy(110, 25); cout << "|_________________________|";

	gotoxy(110, 30); cout << "___________________________";
	gotoxy(110, 31); cout << "|                         |";
	gotoxy(110, 32); cout << "|          EXIT           |";
	gotoxy(110, 33); cout << "|_________________________|";
}

void deleteRoomInterface(List<room>& rl) {
	gotoxy(50, 2); cout << "-------------------- DELETE ROOM --------------------";
	gotoxy(0, 7);
	cout << "-----------------------------------------------------------------------------------" << endl;
	cout << "|    ROOM ID    |          ROOM TYPE          |          PRICE FOR 1 DAY          |" << endl;
	cout << "-----------------------------------------------------------------------------------" << endl;
	Node<room>* r = rl.getHead();
	while (r) {
		r->getValue()->displayDetail();
		r = r->getNext();
	}
	cout << "----------------------------------------------------------------------------------" << endl;

	gotoxy(90, 12); cout << "ROOM ID";
	gotoxy(110, 10); cout << "___________________________";
	gotoxy(110, 11); cout << "|                         |";
	gotoxy(110, 12); cout << "|";
	gotoxy(136, 12); cout << "|";
	gotoxy(110, 13); cout << "|_________________________|";

	gotoxy(110, 25); cout << "___________________________";
	gotoxy(110, 26); cout << "|                         |";
	gotoxy(110, 27); cout << "|           EXIT          |";
	gotoxy(110, 28); cout << "|_________________________|";
}

void bookedRoomInterface() {
	cout << "\n                                         -----------------  BOOKED ROOM STATISTICS  -----------------\n";
	gotoxy(15, 5); cout << "ENTER THE CHECK-IN DATE:";

	gotoxy(15, 10); cout << "FROM";
	gotoxy(15, 16); cout << "TO";
	gotoxy(30, 8); cout << "____________";
	gotoxy(30, 9); cout << "|          |";
	gotoxy(25, 10); cout << "DAY  |";
	gotoxy(30, 11); cout << "|__________|";
	gotoxy(41, 10); cout << "|";

	gotoxy(57, 8); cout << "____________";
	gotoxy(57, 9); cout << "|          |";
	gotoxy(50, 10); cout << "MONTH  |";
	gotoxy(57, 11); cout << "|__________|";
	gotoxy(68, 10); cout << "|";


	gotoxy(83, 8); cout << "____________";
	gotoxy(83, 9); cout << "|          |";
	gotoxy(77, 10); cout << "YEAR  |";
	gotoxy(83, 11); cout << "|__________|";
	gotoxy(94, 10); cout << "|";



	gotoxy(30, 14); cout << "____________";
	gotoxy(30, 15); cout << "|          |";
	gotoxy(25, 16); cout << "DAY  |";
	gotoxy(30, 17); cout << "|__________|";
	gotoxy(41, 16); cout << "|";

	gotoxy(57, 14); cout << "____________";
	gotoxy(57, 15); cout << "|          |";
	gotoxy(50, 16); cout << "MONTH  |";
	gotoxy(57, 17); cout << "|__________|";
	gotoxy(68, 16); cout << "|";


	gotoxy(83, 14); cout << "____________";
	gotoxy(83, 15); cout << "|          |";
	gotoxy(77, 16); cout << "YEAR  |";
	gotoxy(83, 17); cout << "|__________|";
	gotoxy(94, 16); cout << "|";


	gotoxy(110, 25); cout << "___________________________";
	gotoxy(110, 26); cout << "|                         |";
	gotoxy(110, 27); cout << "|           EXIT          |";
	gotoxy(110, 28); cout << "|_________________________|";

}

int bookedRoomDetailInterface(List<booking>& bl, time_t checkInDate, time_t checkOutDate) {
	system("cls");
	gotoxy(50, 2); cout << "-------------------- BOOKED ROOM --------------------";
	int count = 0;
	Node<booking>* temp = bl.getHead();
	int k = 7;
	gotoxy(20, k++);
	cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
	gotoxy(20, k++);
	cout << "|    room id    |      Name of booker     |       Amount       |      check-in date      |    check-out date    |" << endl;
	gotoxy(20, k++);
	cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
	while (temp) {
		if (temp->getValue()->getCheckInDate() >= checkInDate && temp->getValue()->getCheckInDate() <= checkOutDate)
		{
			gotoxy(20, k++);
			temp->getValue()->display();
			count++;
		}
		temp = temp->getNext();
	}
	gotoxy(20, k++);
	cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
	return count;
}

void enterDayInterface() {

	cout << "\n                                              ---------------  AVAILABLE ROOM STATISTICS  ---------------\n";

	gotoxy(15, 5); cout << "ENTER THE CHECK-IN DATE:";

	gotoxy(15, 10); cout << "FROM";
	gotoxy(15, 16); cout << "TO";
	gotoxy(30, 8); cout << "____________";
	gotoxy(30, 9); cout << "|          |";
	gotoxy(25, 10); cout << "DAY  |";
	gotoxy(30, 11); cout << "|__________|";
	gotoxy(41, 10); cout << "|";

	gotoxy(57, 8); cout << "____________";
	gotoxy(57, 9); cout << "|          |";
	gotoxy(50, 10); cout << "MONTH  |";
	gotoxy(57, 11); cout << "|__________|";
	gotoxy(68, 10); cout << "|";

	gotoxy(83, 8); cout << "____________";
	gotoxy(83, 9); cout << "|          |";
	gotoxy(77, 10); cout << "YEAR  |";
	gotoxy(83, 11); cout << "|__________|";
	gotoxy(94, 10); cout << "|";

	gotoxy(30, 14); cout << "____________";
	gotoxy(30, 15); cout << "|          |";
	gotoxy(25, 16); cout << "DAY  |";
	gotoxy(30, 17); cout << "|__________|";
	gotoxy(41, 16); cout << "|";

	gotoxy(57, 14); cout << "____________";
	gotoxy(57, 15); cout << "|          |";
	gotoxy(50, 16); cout << "MONTH  |";
	gotoxy(57, 17); cout << "|__________|";
	gotoxy(68, 16); cout << "|";


	gotoxy(83, 14); cout << "____________";
	gotoxy(83, 15); cout << "|          |";
	gotoxy(77, 16); cout << "YEAR  |";
	gotoxy(83, 17); cout << "|__________|";
	gotoxy(94, 16); cout << "|";

	gotoxy(110, 25); cout << "___________________________";
	gotoxy(110, 26); cout << "|                         |";
	gotoxy(110, 27); cout << "|           EXIT          |";
	gotoxy(110, 28); cout << "|_________________________|";

}

int availableRoomInterface(List<room>& rl, List<booking>& bl, time_t checkInDate, time_t checkOutDate) {
	system("cls");
	int count = 0;
	gotoxy(50, 2); cout << "-------------------- VAILABLE ROOM --------------------";
	int k = 7;
	gotoxy(32, k++);
	cout << "-----------------------------------------------------------------------------------" << endl;
	gotoxy(32, k++);
	cout << "|    ROOM ID    |          ROOM TYPE          |          PRICE FOR 1 DAY          |" << endl;
	gotoxy(32, k++);
	cout << "-----------------------------------------------------------------------------------" << endl;
	int arr[1000] = { 0 };
	Node<booking>* temp = bl.getHead();
	while (temp) {
		if ((temp->getValue()->getCheckInDate() <= checkInDate && temp->getValue()->getCheckOutDate() >= checkInDate)
			|| (temp->getValue()->getCheckInDate() <= checkOutDate && temp->getValue()->getCheckOutDate() >= checkOutDate))
		{
			arr[temp->getValue()->getRoomId()] = 1;
		}
		temp = temp->getNext();
	}
	Node<room>* tmp = rl.getHead();
	while (tmp) {
		if (arr[tmp->getValue()->getRoomId()] == 0) {
			gotoxy(32, k++);
			tmp->getValue()->displayDetail();
			count++;
		}
		tmp = tmp->getNext();
	}
	gotoxy(32, k++);
	cout << "-----------------------------------------------------------------------------------" << endl;
	return count;
}

void enterDayRevenueInterface() {
	gotoxy(15, 5); cout << "ENTER STATISTICAL DATE:";

	gotoxy(15, 10); cout << "FROM";
	gotoxy(15, 16); cout << "TO";
	gotoxy(30, 8); cout << "____________";
	gotoxy(30, 9); cout << "|          |";
	gotoxy(25, 10); cout << "DAY  |";
	gotoxy(30, 11); cout << "|__________|";
	gotoxy(41, 10); cout << "|";

	gotoxy(57, 8); cout << "____________";
	gotoxy(57, 9); cout << "|          |";
	gotoxy(50, 10); cout << "MONTH  |";
	gotoxy(57, 11); cout << "|__________|";
	gotoxy(68, 10); cout << "|";

	gotoxy(83, 8); cout << "____________";
	gotoxy(83, 9); cout << "|          |";
	gotoxy(77, 10); cout << "YEAR  |";
	gotoxy(83, 11); cout << "|__________|";
	gotoxy(94, 10); cout << "|";



	gotoxy(30, 14); cout << "____________";
	gotoxy(30, 15); cout << "|          |";
	gotoxy(25, 16); cout << "DAY  |";
	gotoxy(30, 17); cout << "|__________|";
	gotoxy(41, 16); cout << "|";

	gotoxy(57, 14); cout << "____________";
	gotoxy(57, 15); cout << "|          |";
	gotoxy(50, 16); cout << "MONTH  |";
	gotoxy(57, 17); cout << "|__________|";
	gotoxy(68, 16); cout << "|";


	gotoxy(83, 14); cout << "____________";
	gotoxy(83, 15); cout << "|          |";
	gotoxy(77, 16); cout << "YEAR  |";
	gotoxy(83, 17); cout << "|__________|";
	gotoxy(94, 16); cout << "|";

	gotoxy(110, 25); cout << "___________________________";
	gotoxy(110, 26); cout << "|                         |";
	gotoxy(110, 27); cout << "|           EXIT          |";
	gotoxy(110, 28); cout << "|_________________________|";
}

long long revenueInterface(List<booking>& bl, time_t checkInDate1, time_t checkInDate2) {
	system("cls");
	gotoxy(45, 2); cout << "---------------------  REVENUE  STATISTICS  ---------------------";
	long long sum = 0;
	Node<booking>* temp = bl.getHead();
	int k = 7;
	gotoxy(20, k++);
	cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
	gotoxy(20, k++);
	cout << "|    room id    |           Name          |        Amount      |      check-in date      |     check-out date   |" << endl;
	gotoxy(20, k++);
	cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
	while (temp) {
		if (temp->getValue()->getCheckInDate() >= checkInDate1 && temp->getValue()->getCheckInDate() <= checkInDate2) {
			gotoxy(20, k++);
			temp->getValue()->display();
			sum += temp->getValue()->getAmount();
		}
		temp = temp->getNext();
	}
	gotoxy(20, k++);
	cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
	gotoxy(20, k + 2); cout << "REVENUE : " << sum << " VND";
	return sum;
}

void searchNameInterface() {
	gotoxy(50, 2); cout << "-------------------- SEARCH FOR CUSTOMERS --------------------";
	gotoxy(40, 12); cout << "NAME";
	gotoxy(50, 10); cout << "____________________________________________________";
	gotoxy(50, 11); cout << "|                                                  |";
	gotoxy(50, 12); cout << "|";
	gotoxy(101, 12); cout << "|";
	gotoxy(50, 13); cout << "|__________________________________________________|";

	gotoxy(60, 18); cout << "______________________________________";
	gotoxy(60, 19); cout << "|                                    |";
	gotoxy(60, 20); cout << "|                EXIT                |";
	gotoxy(60, 21); cout << "|____________________________________|";
}

void dataCustomerInterface(List<person>& pl, string name) {
	system("cls");
	gotoxy(50, 2); cout << "-------------------- SEARCH FOR CUSTOMER --------------------";
	int k = 10;
	Node<person>* temp = pl.getHead();
	gotoxy(35, k++);
	cout << "--------------------------------------------------------------------------------" << endl;
	gotoxy(35, k++);
	cout << "|    customer id    |             Name            |        phone number        |" << endl;
	gotoxy(35, k++);
	cout << "--------------------------------------------------------------------------------" << endl;
	while (temp) {
		if (temp->getValue()->getRole() == 0 && toUpper(temp->getValue()->getName()) == toUpper(name)) {
			gotoxy(35, k++); cout << "|         " << temp->getValue()->getId();
			if (temp->getValue()->getId() < 10) cout << "         |         ";
			else if (temp->getValue()->getId() < 100) cout << "        |         ";
			string x = "";
			for (int i = 0; i < 20 - name.size(); i++) x += " ";
			cout << temp->getValue()->getName() << x << "|         " << temp->getValue()->getPhone() << "         |";
			gotoxy(35, k++); cout << "--------------------------------------------------------------------------------";
		}
		temp = temp->getNext();
	}
}

void searchBookedRoomInterface() {
	system("cls");
	gotoxy(50, 2); cout << "-------------------- SEARCH FOR CUSTOMERS --------------------";
	gotoxy(40, 12); cout << "NAME";
	gotoxy(50, 10); cout << "____________________________________________________";
	gotoxy(50, 11); cout << "|                                                  |";
	gotoxy(50, 12); cout << "|";
	gotoxy(101, 12); cout << "|";
	gotoxy(50, 13); cout << "|__________________________________________________|";

	gotoxy(60, 18); cout << "______________________________________";
	gotoxy(60, 19); cout << "|                                    |";
	gotoxy(60, 20); cout << "|                EXIT                |";
	gotoxy(60, 21); cout << "|____________________________________|";
}

void dataOfBookedRoomInterface(List<booking>& bl, string name) {
	system("cls");
	gotoxy(50, 2); cout << "-------------------- SEARCH FOR CUSTOMER --------------------";

	int k = 10;
	gotoxy(20, k++);
	cout << "---------------------------------------------------------------------------------------------------------------------";
	gotoxy(20, k++);
	cout << "|   customer id    |           Name          |        room id      |      check-in date      |     check-out date   |";
	gotoxy(20, k++);
	cout << "---------------------------------------------------------------------------------------------------------------------";
	Node<booking>* temp = bl.getHead();
	while (temp) {
		if (toUpper(temp->getValue()->getName()) == toUpper(name)) {
			gotoxy(20, k++); cout << "|        ";
			if (temp->getValue()->getCustomerId() < 10) cout << temp->getValue()->getCustomerId() << "         |       ";
			else if (temp->getValue()->getCustomerId() < 100) cout << temp->getValue()->getCustomerId() << "        |       ";
			string x = "";
			for (int i = 0; i < 18 - name.size(); i++) x += " ";
			cout << temp->getValue()->getName() << x << "|         ";
			cout << temp->getValue()->getRoomId();
			if (temp->getValue()->getRoomId() < 10) cout << "           |        ";
			else if (temp->getValue()->getRoomId() < 100) cout << "          |        ";
			tm tt1, tt2;
			time_t t1 = temp->getValue()->getCheckInDate();
			time_t t2 = temp->getValue()->getCheckOutDate();
			localtime_s(&tt1, &t1);
			localtime_s(&tt2, &t2);
			tt1.tm_year += 1900; tt1.tm_mon += 1;
			tt2.tm_year += 1900; tt2.tm_mon += 1;
			cout << tt1.tm_mday << "/" << tt1.tm_mon << "/" << tt1.tm_year << "       |        " << tt2.tm_mday << "/" << tt2.tm_mon << "/" << tt2.tm_year << "    |";
			gotoxy(20, k++); cout << "---------------------------------------------------------------------------------------------------------------------";
		}
		temp = temp->getNext();
	}
}

void staffOptionInterface() {
	gotoxy(55, 2); cout << "_________________________________";
	gotoxy(55, 4); cout << "|_______________________________|";
	gotoxy(55, 3); cout << "|            OPTIONS            |";

	gotoxy(30, 8); cout << "__________________________________";
	gotoxy(30, 10); cout << "|________________________________|";
	gotoxy(30, 9); cout << "|            ADD ROOM            |";



	gotoxy(80, 8); cout << "__________________________________";
	gotoxy(80, 10); cout << "|________________________________|";
	gotoxy(80, 9);  cout << "|            EDIT ROOM           |";


	gotoxy(30, 12); cout << "__________________________________";
	gotoxy(30, 14); cout << "|________________________________|";
	gotoxy(30, 13); cout << "|          DELETE ROOM           |";


	gotoxy(80, 12); cout << "__________________________________";
	gotoxy(80, 14); cout << "|________________________________|";
	gotoxy(80, 13); cout << "|     NUMBER OF ROOMS BOOKED     |";

	gotoxy(30, 16); cout << "__________________________________";
	gotoxy(30, 18); cout << "|________________________________|";
	gotoxy(30, 17); cout << "|    NUMBER OF ROOMS AVAILABLE   |";

	gotoxy(80, 16); cout << "__________________________________";
	gotoxy(80, 18); cout << "|________________________________|";
	gotoxy(80, 17); cout << "|             REVENUE            |";


	gotoxy(30, 20); cout << "__________________________________";
	gotoxy(30, 22); cout << "|________________________________|";
	gotoxy(30, 21); cout << "|      SEARCH FOR CUSTOMERS      |";

	gotoxy(80, 20); cout << "__________________________________";
	gotoxy(80, 22); cout << "|________________________________|";
	gotoxy(80, 21); cout << "|   SEARCH BOOKED ROOM BY NAME   |";


	gotoxy(61, 24); cout << "______________________";
	gotoxy(61, 26); cout << "|____________________|";
	gotoxy(61, 25); cout << "|        EXIT        |";
}

void customerOptionInterface() {
	system("cls");
	gotoxy(55, 2); cout << "_________________________________";
	gotoxy(55, 4); cout << "|_______________________________|";
	gotoxy(55, 3); cout << "|            OPTIONS            |";

	gotoxy(30, 12); cout << "_________________________________";
	gotoxy(30, 14); cout << "|_______________________________|";
	gotoxy(30, 13); cout << "|            BOOKING            |";

	gotoxy(80, 12); cout << "__________________________________";
	gotoxy(80, 14); cout << "|________________________________|";
	gotoxy(80, 13); cout << "|          CANCEL BOOKING        |";


	gotoxy(61, 18); cout << "______________________";
	gotoxy(61, 20); cout << "|____________________|";
	gotoxy(61, 19); cout << "|        EXIT        |";
}

void homeInterface() {
	cout << "\n                                                  ------------     HOTEL     ------------                                  " << endl;
	cout << "\n\n\n";
	cout << "                 -------------------------------------------                  ------------------------------------------" << endl;
	cout << "                 |                  LOGIN                  |                  |                 REGISTER               |" << endl;
	cout << "                 -------------------------------------------                  ------------------------------------------" << endl;
	gotoxy(55, 15); cout << "-----------------------------";
	gotoxy(55, 16); cout << "|            EXIT           |";
	gotoxy(55, 17); cout << "-----------------------------";
}