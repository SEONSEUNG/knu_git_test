/*#include <iostream>
#include <Windows.h>
using namespace std;

class Clients {
	int id;
	string name;
	string address;
	string tel;
	string gender;
public:
	Clients();
	void insertClient(int newId, string newName, string newTel, string newAddress, string newGender);
	void displayClient();
};

Clients::Clients() {}

void Clients::insertClient(int newId, string newName, string newTel, string newAddress, string newGender) {
	this->id = newId;
	this->name = newName;
	this->tel = newTel;
	this->address = newAddress;
	this->gender = newGender;
}

void Clients::displayClient() {
	cout << "client id; " << id << ", name: " << name << ", gender: " << gender;
	cout << " tel; " << tel << ", address; " << address << endl;
}

class Menus {

public:
	Menus();
	int display();
	int display_insert();

};

Menus::Menus() {}

int Menus::display() {

	int selection;

	system("cls");

	cout << "Menu >>" << endl;
	cout << "--------------------------------" << endl;
	cout << "1. insert clients" << endl;
	cout << "2. delete clients" << endl;
	cout << "3. display clients" << endl;
	cout << "4. list clients" << endl;
	cout << "5. quit" << endl;
	cout << "--------------------------------" << endl;
	cout << "please input selections (1~5); ";

	cin >> selection;

	return selection;
}

int Menus::display_insert() {

	int selection;

	system("cls");

	cout << "Insert Clients >>" << endl;
	cout << "--------------------------------" << endl;
	cout << "1. 단일 client 객체 이용" << endl;
	cout << "2. client 객체 배열 이용" << endl;
	cout << "--------------------------------" << endl;
	cout << "please input selections (1~2); ";

	cin >> selection;

	return selection;
}

class Input {
public:
	Input();
	int single();
	int array();
};

Input::Input() {}

int Input::single() {

	system("cls");

	Clients client_single;
	int id;
	string name, address, tel, gender;

	cout << "plz input id; ";
	cin >> id;
	cout << "plz input name; ";
	cin >> name;
	cout << "plz input address; ";
	cin >> address;
	cout << "plz input tel; ";
	cin >> tel;
	cout << "plz input gender; ";
	cin >> gender;

	client_single.insertClient(id, name, tel, address, gender);

	system("cls");
	cout << "clients_single inserted: " << endl;
	client_single.displayClient();

	cout << "\ninput any key to continue >> ";
	cin >> id;

	return 0;
}

int Input::array() {

	system("cls");

	int id, amount = 0;
	string name, tel, address, gender;
	cout << "plz input Client amount; ";
	cin >> amount;

	Clients* client = new Clients[amount];


	for (int i = 0; i < amount; i++) {
		cout << '\n' << "client " << i + 1 << ">>" << endl;
		cout << "plz input id; ";
		cin >> id;
		cout << "plz input name; ";
		cin >> name;
		cout << "plz input tel; ";
		cin >> tel;
		cout << "plz input address; ";
		cin >> address;
		cout << "plz input gender; ";
		cin >> gender;

		client[i].insertClient(id, name, tel, address, gender);
	}

	system("cls");

	cout << "\n ------ clients_array inserted ------ \n";

	for (int i = 0; i < amount; i++) {
		client[i].displayClient();
	}

	cout << "\ninput any key to continue >> ";
	cin >> id;

	return 0;
}

int main() {
	while (1) {
		system("cls");

		Menus menu;
		Input input;
		if (menu.display() == 1) {
			if (menu.display_insert() == 1) {
				input.single();
			}
			else if (menu.display_insert() == 2) {
				input.array();
			}
		}
		else if (menu.display() == 5) break;
	}
	return 0;
}
*/