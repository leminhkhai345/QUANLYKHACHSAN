#include "Function.h"
#include "interface.h"
#include <iostream>
using namespace std;

void clearRectangle(int x1, int y1, int x2, int y2) {
	// Lấy handle của console
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	// Xóa từng dòng trong vùng từ (x1, y1) đến (x2, y2)
	for (int y = y1; y <= y2; ++y) {
		// Thiết lập vị trí con trỏ đến (x1, y)
		COORD coord;
		coord.X = x1;
		coord.Y = y;
		SetConsoleCursorPosition(hConsole, coord);
		// Tính số khoảng trắng cần để xoá trên dòng từ x1 đến x2
		int length = x2 - x1 + 1;
		std::cout << std::string(length, ' ');
		// Đưa con trỏ về đầu đoạn vừa xoá để không nhảy xuống dòng mới
		SetConsoleCursorPosition(hConsole, coord);
	}
}

void gotoxy(int x, int y) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

POINT getMouseClickPosition() {
	POINT point;
	while (true) {
		if (GetAsyncKeyState(VK_LBUTTON) & 0x8000) {
			GetCursorPos(&point);
			while (GetAsyncKeyState(VK_LBUTTON) & 0x8000);
			return point;
		}
	}
}



person* Login(List<person>& pl) {
	string username, password;
	while (true) {
		loginInterface();
		POINT point = getMouseClickPosition();
		if (point.x >= 1335 && point.x <= 1610 && point.y >= 600 && point.y <= 665) {
			return nullptr;
		}
		gotoxy(58, 11);
		getline(cin, username);
		gotoxy(58, 14);
		password = "";
		char ch;
		while (true) {
			ch = _getch();
			if (ch == '\r') {
				break;
			}
			else if (ch == '\b') {
				if (!password.empty()) {
					cout << "\b \b";
					password.pop_back();
				}
			}
			else {
				cout << '*';
				password += ch;
			}
		}
		cout << endl;
		Node<person>* temp = pl.getHead();
		while (temp) {
			if (temp->getValue()->getUserName() == username && temp->getValue()->getPassword() == password) {
				return temp->getValue();
			}
			temp = temp->getNext();
		}
		system("cls");
		gotoxy(55, 16);
		cout << "Username or password is not correct!" << endl;
	}
}


void Register(List<person>& pl, int autoId) {
	system("cls");
	registerInterface();
	string name, phone, username, password = "", passwordAgain = "";
	POINT P1 = getMouseClickPosition();
	if (P1.x >= 1215 && P1.x <= 1430 && P1.y >= 640 && P1.y <= 700) {
		return;
	}
	gotoxy(40, 7);
	getline(cin, name);
	gotoxy(40, 12);
	getline(cin, phone);
	while (1) {
		bool check = true;
		for (int i = 0; i < 10; i++) {
			if (phone[i] > '9' || phone[i] < '0') {
				check = false;
				gotoxy(32, 14);
				cout << "Phone must be number from 0 to 9!! Enter phone number again";
				clearRectangle(40, 12, 83, 12);
				gotoxy(40, 12);
				getline(cin, phone);
				break;
			}
		}
		if (check == true) break;
	}
	gotoxy(40, 17);
	getline(cin, username);
	while (1) {
		Node<person>* temp = pl.getHead();
		while (temp) {
			if (temp->getValue()->getUserName() == username) {
				gotoxy(32, 19);
				cout << "Username already uese! Please enter username again: ";
				clearRectangle(40, 17, 83, 17);
				gotoxy(40, 17);
				getline(cin, username);
				break;
			}
			temp = temp->getNext();
		}
		if (temp == nullptr) break;
	}
	gotoxy(40, 22);
	char ch;
	while (true) {
		ch = _getch();
		if (ch == '\r') {
			break;
		}
		else if (ch == '\b') {
			if (!password.empty()) {
				cout << "\b \b";
				password.pop_back();
			}
		}
		else {
			cout << '*';
			password += ch;
		}
	}
	while (1) {
		Node<person>* temp = pl.getHead();
		while (temp) {
			if (temp->getValue()->getPassword() == password) {
				gotoxy(32, 24);
				cout << "Password already uese! Please enter password again: ";
				password = "";
				break;
			}
			temp = temp->getNext();
		}
		if (password == " ") {
			gotoxy(32, 24);
			cout << "Invalid password!! Please enter password again: ";
			char ch;
			clearRectangle(40, 22, 83, 22);
			gotoxy(40, 22);
			while (true) {
				ch = _getch();
				if (ch == '\r') {
					break;
				}
				else if (ch == '\b') {
					if (!password.empty()) {
						cout << "\b \b";
						password.pop_back();
					}
				}
				else {
					cout << '*';
					password += ch;
				}
			}
			continue;
		}
		if (temp == nullptr) break;
		else {
			char ch;
			gotoxy(40, 22);
			clearRectangle(40, 22, 83, 22);
			while (true) {
				ch = _getch();
				if (ch == '\r') {
					break;
				}
				else if (ch == '\b') {
					if (!password.empty()) {
						cout << "\b \b";
						password.pop_back();
					}
				}
				else {
					cout << '*';
					password += ch;
				}
			}
		}
	}
	while (1) {
		passwordAgain = "";
		gotoxy(40, 27);
		char ch;
		while (true) {
			ch = _getch();
			if (ch == '\r') {
				break;
			}
			else if (ch == '\b') {
				if (!passwordAgain.empty()) {
					cout << "\b \b";
					passwordAgain.pop_back();
				}
			}
			else {
				cout << '*';
				passwordAgain += ch;
			}
		}
		if (password == passwordAgain) break;
		else {
			gotoxy(32, 29); cout << "Password doesn't match. Please enter again!";
			clearRectangle(40, 27, 83, 27);
		}
	}
	customer* p = new customer(autoId, name, phone, 0, username, password);
	pl.push(p);
	gotoxy(50, 32); cout << "Successful!";
	cin.ignore();
}



int Booking(List<room>& rl, List<booking>& bl, person* p) {
	int day[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	time_t now = time(nullptr);
	tm t1 = {};
	tm t2 = {};
	time_t tt1, tt2;
	bool check = true;
	while (1) {
		check = true;
		bookingInterface();

		POINT P1 = getMouseClickPosition();

		if (P1.x >= 1215 && P1.x <= 1410 && P1.y >= 520 && P1.y <= 600) {
			return -1;
		}

		gotoxy(35, 10);
		cin >> t1.tm_mday;
		gotoxy(62, 10);
		cin >> t1.tm_mon;
		gotoxy(87, 10);
		cin >> t1.tm_year;

		gotoxy(35, 15);
		cin >> t2.tm_mday;
		gotoxy(62, 15);
		cin >> t2.tm_mon;
		gotoxy(87, 15);
		cin >> t2.tm_year;
		if (t1.tm_mon > 12 || t1.tm_mon < 1 || t2.tm_mon > 12 || t2.tm_mon < 1) check = false;
		t2.tm_year -= 1900; t2.tm_mon -= 1;
		t1.tm_year -= 1900; t1.tm_mon -= 1;
		tt1 = mktime(&t1);
		tt2 = mktime(&t2);
		if (tt2 <= tt1 || tt1 <= now) {
			check = false;
		}
		if (check == true) {
			break;
		}
		system("cls");
		gotoxy(30, 20);
		cout << "Ivalid day. Try again: ";
	}

	while (1) {
		system("cls");
		int k = 7;
		roomListInterface1(k);
		Node<room>* temp1 = rl.getHead();
		while (temp1) {
			Node<booking>* temp3 = bl.getHead();
			while (temp3) {
				if (temp1->getValue()->getRoomId() == temp3->getValue()->getRoomId()) {
					if (!(temp3->getValue()->getCheckOutDate() < tt1 || temp3->getValue()->getCheckInDate() > tt2)) {
						break;
					}
				}
				temp3 = temp3->getNext();
			}
			if (temp3 == nullptr) {
				gotoxy(20, k++);
				temp1->getValue()->displayDetail();
			}
			temp1 = temp1->getNext();
		}
		roomListInterface2(k);

		int id;
		cin >> id;
		Node<room>* temp2 = rl.getHead();
		while (temp2) {
			if (temp2->getValue()->getRoomId() == id) break;
			temp2 = temp2->getNext();
		}
		if (temp2 != nullptr) {
			system("cls");
			payment pm;
			roomInformationInterface();
			gotoxy(84, 6); cout << temp2->getValue()->getRoomId();
			gotoxy(82, 8); cout << temp2->getValue()->getRoomType();
			gotoxy(82, 10); cout << temp2->getValue()->getPrice() * (tt2 - tt1) / (24 * 3600);
			cin.ignore();
			string s;
			getline(cin, s);
			bool NGAT = false;
			while (1) {
				system("cls");
				paymentMethodInterface();

				POINT point = getMouseClickPosition();
				if (point.x >= 395 && point.x <= 730 && point.y >= 340 && point.y <= 410) {
					pm = payment("Cash");
					break;
				}
				else if (point.x >= 1335 && point.x <= 1530 && point.y >= 530 && point.y <= 600) {
					return -1;
				}
				else if (point.x >= 970 && point.x <= 1215 && point.y >= 340 && point.y <= 410) {
					system("cls");
					string bank, accountNumber;
					while (1) {
						bankChoiceInterface();

						POINT getbank = getMouseClickPosition();
						if (getbank.x >= 435 && getbank.x <= 615 && getbank.y >= 270 && getbank.y <= 345) {
							bank = "BIDV";
							break;
						}
						else if (getbank.x >= 770 && getbank.x <= 950 && getbank.y >= 270 && getbank.y <= 345) {
							bank = "VIETTINBANK";
							break;
						}
						else if (getbank.x >= 1100 && getbank.x <= 1290 && getbank.y >= 270 && getbank.y <= 345) {
							bank = "MB BANK";
							break;
						}
						else if (getbank.x >= 435 && getbank.x <= 615 && getbank.y >= 455 && getbank.y <= 530) {
							bank = "AGRIBANK";
							break;
						}
						else if (getbank.x >= 770 && getbank.x <= 950 && getbank.y >= 455 && getbank.y <= 530) {
							bank = "VIETCOMBANK";
							break;
						}
						else if (getbank.x >= 1100 && getbank.x <= 1290 && getbank.y >= 455 && getbank.y <= 530) {
							bank = "ACB";
							break;
						}
						else if (getbank.x >= 435 && getbank.x <= 615 && getbank.y >= 640 && getbank.y <= 710) {
							bank = "TECHCOMBANK";
							break;
						}
						else if (getbank.x >= 770 && getbank.x <= 950 && getbank.y >= 640 && getbank.y <= 710) {
							bank = "TP BANK";
							break;
						}
						else if (getbank.x >= 1100 && getbank.x <= 1290 && getbank.y >= 640 && getbank.y <= 710) {
							bank = "TP BANK";
							break;
						}
						else if (getbank.x >= 1455 && getbank.x <= 1655 && getbank.y >= 800 && getbank.y <= 870) {
							NGAT = true;
							break;
						}
					}
					if (NGAT == true) continue;
					system("cls");

					while (1) {
						gotoxy(42, 17); cout << "ACCOUNT NUMBER";
						gotoxy(60, 15); cout << "_______________________________";
						gotoxy(60, 16); cout << "|                             |";
						gotoxy(60, 17); cout << "|";
						gotoxy(60, 18); cout << "|_____________________________|";
						gotoxy(90, 17); cout << "|";
						gotoxy(65, 17);
						getline(cin, accountNumber);
						bool check = true;
						for (char x : accountNumber) {
							if (x < '0' || x > '9') {
								check = false;
								break;
							}
						}
						if (check == true) {
							break;
						}
						system("cls");
						cout << "accountNumber invalid! Try again: ";
					}
					pm = payment("Banking", bank, accountNumber);
					break;
				}
				else {
					cout << "Ivalid choice! Enter your choice again: " << endl;
				}
			}
			booking* x = new booking(p->getId(), p->getName(), temp2->getValue()->getRoomId(), temp2->getValue()->getPrice() * (tt2 - tt1) / (24 * 3600), pm, tt1, tt2);
			bl.push(x);
			gotoxy(60, 20);
			cout << "Booking successfully." << endl;
			cin.ignore();
			break;
		}
		gotoxy(30, k++); cout << "Invalid room id! Please enter room id again!";
		cin.ignore();
		cin.ignore();
	}
	return 1;
}


void cancellation(List<booking>& bl, person* c) {
	Node<booking>* temp = bl.getHead();
	time_t now = time(nullptr);
	int temp2 = cancellationInterface(bl, c);
	int temp1 = temp2 - 10;
	POINT point = getMouseClickPosition();
	if (point.x >= 1635 && point.x <= 1800 && point.y >= 90 && point.y <= 160) {
		return;
	}
	gotoxy(58, temp1);
	int roomid;
	cin >> roomid;
	tm timechekin = {};
	gotoxy(38, temp2);
	cin >> timechekin.tm_mday;
	gotoxy(68, temp2);
	cin >> timechekin.tm_mon;
	gotoxy(96, temp2);
	cin >> timechekin.tm_year;
	timechekin.tm_mon--; timechekin.tm_year -= 1900;
	time_t time_tchekin = mktime(&timechekin);
	temp = bl.getHead();
	while (temp) {
		if (temp->getValue()->getRoomId() == roomid && time_tchekin == temp->getValue()->getCheckInDate()) {
			bl.pop(temp);
			gotoxy(62, temp2 + 4);
			cout << "Successful!!";
			cin.ignore();
			break;
		}
		temp = temp->getNext();
	}
	if (temp == nullptr) {
		gotoxy(64, temp2 + 4);
		cout << "Invalid!!!" << endl;
		cin.ignore();
	}
	cin.ignore();
}



void addRoom(List<room>& rl) {
	int id, price;
	string roomtype;
	while (1) {
		addRoomInterface(rl);
		POINT point = getMouseClickPosition();
		if (point.x >= 1215 && point.x <= 1530 && point.y >= 750 && point.y <= 825) {
			return;
		}
		gotoxy(112, 12);
		cin >> id;
		Node<room>* temp = rl.getHead();
		bool check = true;
		while (temp) {
			if (id == temp->getValue()->getRoomId()) {
				check = false;
				break;
			}
			temp = temp->getNext();
		}
		if (check == true) break;
		else {
			system("cls");
			gotoxy(90, 14);
			cout << "The id already exist! Please enter another id." << endl;
		}
	}
	cin.ignore();
	gotoxy(110, 18); getline(cin, roomtype);
	gotoxy(110, 24); cin >> price;
	room* r = new room(id, roomtype, price);
	rl.push(r);
	gotoxy(109, 27);
	cout << "Successful!" << endl;
	cin.ignore();
	cin.ignore();
}

void editRoom(List<room>& rl) {
	while (1) {
		editRoomInterface(rl);
		POINT point = getMouseClickPosition();
		if (point.x >= 1335 && point.x <= 1645 && point.y >= 750 && point.y <= 825) {
			return;
		}
		gotoxy(122, 12);
		int roomId;
		cin >> roomId;
		cin.ignore();
		Node<room>* temp = rl.getHead();
		bool check = false;
		while (temp) {
			if (temp->getValue()->getRoomId() == roomId) {
				gotoxy(120, 18);
				string roomtype;
				getline(cin, roomtype);
				string price;
				gotoxy(120, 24);
				getline(cin, price);
				if (price != "") temp->getValue()->setPrice(stoi(price));
				if (roomtype != "")temp->getValue()->setRoomtype(roomtype);
				check = true;
				break;
			}
			if (check == true) break;
			temp = temp->getNext();
		}
		if (temp == nullptr) {
			gotoxy(104, 14);
			cout << "Invalid room id!!! Please enter room id again." << endl;
			string x;
			getline(cin, x);
			system("cls");
		}
		else {
			gotoxy(119, 27);
			cout << "Successfull!!" << endl;
			cin.ignore();
			break;
		}
	}
}

void deleteRoom(List<room>& rl) {
	while (1) {
		deleteRoomInterface(rl);
		POINT point = getMouseClickPosition();
		if (point.x >= 1335 && point.x <= 1645 && point.y >= 640 && point.y <= 710) {
			return;
		}
		gotoxy(122, 12);
		int roomid;
		cin >> roomid;
		cin.ignore();
		Node<room>* temp = rl.getHead();
		while (temp) {
			if (temp->getValue()->getRoomId() == roomid) {
				rl.pop(temp);
				gotoxy(119, 15);
				cout << "Successful!" << endl;
				cin.ignore();
				return;
			}
			temp = temp->getNext();
		}
		if (temp == nullptr) {
			gotoxy(109, 15);
			cout << "Room with id " << roomid << " does not exist!" << endl;
		}
		string x;
		getline(cin, x);
		system("cls");
	}
}


int numberOfRoomBooked(List<booking>& bl) {
	tm t1 = {};
	tm t2 = {};
	bookedRoomInterface();
	POINT point = getMouseClickPosition();
	if (point.x >= 1335 && point.x <= 1645 && point.y >= 640 && point.y <= 710) {
		return -1;
	}

	gotoxy(35, 10); cin >> t1.tm_mday;
	gotoxy(62, 10); cin >> t1.tm_mon;
	gotoxy(87, 10);  cin >> t1.tm_year;
	t1.tm_mon -= 1; t1.tm_year -= 1900;

	gotoxy(35, 16); cin >> t2.tm_mday;
	gotoxy(62, 16); cin >> t2.tm_mon;
	gotoxy(87, 16); cin >> t2.tm_year;
	t2.tm_mon -= 1; t2.tm_year -= 1900;

	time_t checkInDate = mktime(&t1), checkOutDate = mktime(&t2);
	return bookedRoomDetailInterface(bl, checkInDate, checkOutDate);
}

int numberOfRoom(List<room>& rl) {
	int count = 0;
	Node<room>* temp = rl.getHead();
	while (temp) {
		count++;
		temp = temp->getNext();
	}
	return count;
}

int numberOfRoomAvailable(List<room>& rl, List<booking>& bl) {
	tm t1 = {};
	tm t2 = {};
	enterDayInterface();
	POINT point = getMouseClickPosition();
	if (point.x >= 1335 && point.x <= 1645 && point.y >= 640 && point.y <= 710) {
		return -1;
	}

	gotoxy(35, 10); cin >> t1.tm_mday;
	gotoxy(62, 10); cin >> t1.tm_mon;
	gotoxy(87, 10);  cin >> t1.tm_year;
	t1.tm_mon -= 1; t1.tm_year -= 1900;

	gotoxy(35, 16); cin >> t2.tm_mday;
	gotoxy(62, 16); cin >> t2.tm_mon;
	gotoxy(87, 16); cin >> t2.tm_year;

	t2.tm_mon -= 1; t2.tm_year -= 1900;
	time_t checkInDate = mktime(&t1), checkOutDate = mktime(&t2);
	int count = availableRoomInterface(rl, bl, checkInDate, checkOutDate);
	return count;
}

long long revenueByDay(List<booking>& bl) {
	tm t1 = {};
	tm t2 = {};
	enterDayRevenueInterface();
	POINT point = getMouseClickPosition();
	if (point.x >= 1335 && point.x <= 1645 && point.y >= 640 && point.y <= 710) {
		return -1;
	}

	gotoxy(35, 10); cin >> t1.tm_mday;
	gotoxy(62, 10); cin >> t1.tm_mon;
	gotoxy(87, 10);  cin >> t1.tm_year;
	t1.tm_mon -= 1; t1.tm_year -= 1900;

	gotoxy(35, 16); cin >> t2.tm_mday;
	gotoxy(62, 16); cin >> t2.tm_mon;
	gotoxy(87, 16); cin >> t2.tm_year;

	t2.tm_mon -= 1; t2.tm_year -= 1900;
	time_t checkInDate1 = mktime(&t1), checkInDate2 = mktime(&t2);
	long long sum = revenueInterface(bl, checkInDate1, checkInDate2);
	return sum;
}


string toUpper(const string& str) {
	string result = str;
	for (char& c : result) {
		if (c >= 'a' && c <= 'z') {
			c = c - ('a' - 'A');
		}
	}
	return result;
}


void SearchforCustomerByName(List<person>& pl) {
	system("cls");
	searchNameInterface();
	POINT point = getMouseClickPosition();
	if (point.x >= 735 && point.x <= 1180 && point.y >= 475 && point.y <= 550) {
		return;
	}
	string name;
	gotoxy(60, 12);
	getline(cin, name);
	dataCustomerInterface(pl, name);
	cin.ignore();
}

void SearchForBookedRoom(List<booking>& bl) {
	searchBookedRoomInterface();
	POINT point = getMouseClickPosition();
	if (point.x >= 735 && point.x <= 1180 && point.y >= 475 && point.y <= 550) {
		return;
	}
	string name;
	gotoxy(60, 12);
	getline(cin, name);
	dataOfBookedRoomInterface(bl, name);
	cin.ignore();
}

List<room> openRoom() {
	ifstream ifile("room.txt");
	List<room> RL;
	string line;
	while (getline(ifile, line)) {
		string v[3];
		int j = 0;
		string x = "";
		for (int i = 0; i < line.length(); i++) {
			if (line[i] == '|') {
				v[j++] = x;
				x = "";
			}
			else {
				x += line[i];
			}
		}
		v[j] = x;
		room* r = new room(stoi(v[0]), v[1], stoi(v[2]));
		RL.push(r);
	}
	ifile.close();
	return RL;
}

List<person> openPerson(int& numberOfperson) {
	ifstream ifilee("person.txt", ios::in);
	List<person> PL;
	string line = "";
	while (getline(ifilee, line)) {
		numberOfperson++;
		string v[7];
		int j = 0;
		string x = "";
		for (int i = 0; i < line.length(); i++) {
			if (line[i] == '|') {
				v[j++] = x;
				x = "";
			}
			else {
				x += line[i];
			}
		}
		v[j] = x;
		customer* p;
		if (stoi(v[3]) == 0) {
			p = new customer(stoi(v[0]), v[1], v[2], stoi(v[3]), v[4], v[5]);
		}
		else {
			p = new customer(stoi(v[0]), v[1], v[2], stoi(v[3]), v[4], v[5], stoi(v[6]));
		}
		PL.push(p);
	}
	ifilee.close();
	return PL;
}
List<booking> openBooking() {
	ifstream ifileee("booking.txt");
	List<booking> BL;
	string line = "";
	while (getline(ifileee, line)) {
		string v[9];
		int j = 0;
		string x = "";
		for (int i = 0; i < line.length(); i++) {
			if (line[i] == '|') {
				v[j++] = x;
				x = "";
			}
			else {
				x += line[i];
			}
		}
		v[j] = x;
		payment pm;
		booking* b;
		if (v[4] == "Cash") {
			pm = payment(v[4]);
			time_t t1 = stoi(v[5]);
			time_t t2 = stoi(v[6]);
			b = new booking(stoi(v[0]), v[1], stoi(v[2]), stoi(v[3]), pm, t1, t2);
		}
		else {
			pm = payment(v[4], v[5], v[6]);
			time_t t1 = stoi(v[7]);
			time_t t2 = stoi(v[8]);
			b = new booking(stoi(v[0]), v[1], stoi(v[2]), stoi(v[3]), pm, t1, t2);
		}
		BL.push(b);
	}
	ifileee.close();
	return BL;
}

void closeRoom(List<room>& RL) {
	ofstream ofile("room.txt", ios::out);
	Node<room>* temp = RL.getHead();
	while (temp) {
		ofile << temp->getValue()->getRoomId() << "|" << temp->getValue()->getRoomType() << "|" << temp->getValue()->getPrice() << endl;
		temp = temp->getNext();
	}
	ofile.close();
}

void closePerson(List<person>& PL) {
	ofstream ofilee("person.txt", ios::out);
	Node<person>* tempp = PL.getHead();
	while (tempp) {
		ofilee << tempp->getValue()->getId() << "|" << tempp->getValue()->getName() << "|" << tempp->getValue()->getPhone() << "|"
			<< tempp->getValue()->getRole() << "|" << tempp->getValue()->getUserName() << "|" << tempp->getValue()->getPassword();
		if (tempp->getValue()->getRole() == 1) {
			ofilee << "|" << tempp->getValue()->getSalary();
		}
		ofilee << endl;
		tempp = tempp->getNext();
	}
	ofilee.close();
}


void closeBooking(List<booking>& BL) {
	ofstream ofileee("booking.txt", ios::out);
	Node<booking>* xxx = BL.getHead();
	while (xxx) {
		ofileee << xxx->getValue()->getCustomerId() << "|" << xxx->getValue()->getName() << "|" << xxx->getValue()->getRoomId() << "|"
			<< xxx->getValue()->getAmount() << "|" << xxx->getValue()->getPaymentMethod().getType();
		if (xxx->getValue()->getPaymentMethod().getType() == "Banking") {
			ofileee << "|" << xxx->getValue()->getPaymentMethod().getBank() << "|" << xxx->getValue()->getPaymentMethod().getAccountNumber();
		}
		ofileee << "|" << xxx->getValue()->getCheckInDate() << "|" << xxx->getValue()->getCheckOutDate() << endl;
		xxx = xxx->getNext();
	}
	ofileee.close();
}

void staffOption(List<room>& RL, List<person>& PL, List<booking>& BL) {
	while (1) {
		staffOptionInterface();
		POINT point = getMouseClickPosition();
		system("cls");
		if (point.x >= 375 && point.x <= 770 && point.y >= 250 && point.y <= 300) {
			addRoom(RL);
		}
		else if (point.x >= 975 && point.x <= 1370 && point.y >= 250 && point.y <= 300) {
			editRoom(RL);
		}
		else if (point.x >= 375 && point.x <= 770 && point.y >= 345 && point.y <= 395) {
			deleteRoom(RL);
		}
		else if (point.x >= 975 && point.x <= 1370 && point.y >= 345 && point.y <= 395) {
			int count = numberOfRoomBooked(BL);
			if (count > -1) {
				cout << "\n                     NUMBER OF BOOKED ROOM: " << count << endl;
				cin.ignore();
				cin.ignore();
			}
		}
		else if (point.x >= 375 && point.x <= 770 && point.y >= 435 && point.y <= 485) {
			int count = numberOfRoomAvailable(RL, BL);
			if (count > -1) {
				cout << "\n                                NUMBER OF AVAILABLE ROOM: " << count << endl;
				cin.ignore();
				cin.ignore();
			}
		}
		else if (point.x >= 975 && point.x <= 1370 && point.y >= 435 && point.y <= 485) {
			long long sum = revenueByDay(BL);
			if (sum > -1) {
				cin.ignore();
				cin.ignore();
			}
		}
		else if (point.x >= 375 && point.x <= 770 && point.y >= 520 && point.y <= 570) {
			SearchforCustomerByName(PL);
		}
		else if (point.x >= 975 && point.x <= 1370 && point.y >= 520 && point.y <= 570) {
			SearchForBookedRoom(BL);
		}
		else if (point.x >= 750 && point.x <= 1000 && point.y >= 615 && point.y <= 665) {
			break;
		}
		else continue;
		system("cls");
	}
}

void customerOption(List<room>& RL, List<person>& PL, List<booking>& BL, person* p) {
	while (1) {
		customerOptionInterface();

		POINT point = getMouseClickPosition();
		system("cls");
		if (point.x >= 375 && point.x <= 760 && point.y >= 340 && point.y <= 390) {
			cout << "\n                          ---------------------------   BOOKING ROOM  ---------------------------\n\n\n";
			int k = Booking(RL, BL, p);
			if (k == -1) continue;
		}
		else if (point.x >= 975 && point.x <= 1370 && point.y >= 340 && point.y <= 390) {
			cancellation(BL, p);
		}
		else if (point.x >= 745 && point.x <= 1000 && point.y >= 615 && point.y <= 660) break;
		else continue;
	}
}

person* home(List<person>& PL, int& numberOfperson, bool& BREAK) {
	person* p;
	while (1) {
		homeInterface();
		string choice;
		POINT point = getMouseClickPosition();
		if (point.x >= 215 && point.x <= 725 && point.y >= 175 && point.y <= 215) choice = "1";
		else if (point.x >= 950 && point.x <= 1440 && point.y >= 175 && point.y <= 215) choice = "2";
		system("cls");
		if (choice == "1") {
			p = Login(PL);
			if (p) return p;
		}
		else if (choice == "2") {
			Register(PL, ++numberOfperson);
			system("cls");
		}
		else if (point.x >= 675 && point.x <= 1015 && point.y >= 400 && point.y <= 550) {
			BREAK = true;
			break;
		}
		system("cls");
	}
}