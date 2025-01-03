#include "SYSTEM.h"
void loadSystem() {
	int numberOfperson = 0;
	List<room> RL = openRoom();
	List<person> PL = openPerson(numberOfperson);
	List<booking> BL = openBooking();
	person* p = nullptr;
	bool BREAK = false;

	/*while (1) {
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

	gotoxy(30, 19); cout << "_________________________________";
	gotoxy(30, 21); cout << "|_______________________________|";
	gotoxy(30, 20); cout << "|            BOOKING            |";

	gotoxy(80, 19); cout << "__________________________________";
	gotoxy(80, 21); cout << "|________________________________|";
	gotoxy(80, 20); cout << "|          CANCEL BOOKING        |";

	gotoxy(61, 18); cout << "______________________";
	gotoxy(61, 20); cout << "|____________________|";
	gotoxy(61, 19); cout << "|        EXIT        |";

		POINT p = getMouseClickPosition();
		cout << p.x << " " << p.y;
		cin.ignore();
	}*/

	while (1) {
		p = home(PL, numberOfperson, BREAK);
		system("cls");
		if (BREAK == true) break;
		if (p) {
			if (p->getRole() == 0) {
				customerOption(RL, PL, BL, p);
			}
			else if (p->getRole() == 1) {
				staffOption(RL, PL, BL);
			}
		}
	}
	closeRoom(RL);
	closePerson(PL);
	closeBooking(BL);
}