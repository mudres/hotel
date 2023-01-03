#include <iostream>

#include<stdio.h>
#include<stdlib.h>
#include <string>
#include <conio.h>
using namespace std;
void Information();
void Booking();
void func();

int main() {
	cout << "\n\n\t**************************\n";
	cout << "\t*Welcome to Hotel Booking*\n";
	cout << "\t**************************\n";
	int a;
	while (1) {
		cout << "\t\tMain Menu:\n";
		cout << "\t[1]About Uzbekistan\n";
		cout << "\t[2]Hotel Booking\n";
		cout << "\t[3]Finding hotel\n";
		cout << "\t[4]Sign up/Sign in\n";
		cout << "\t[0]Exit\n";
		cout << "\n\tEnter your choice : ";
		cin >> a;
		switch (a) {
		case 1:
			Information();
			_getch();
			break;
		case 2:
			Booking();
			_getch();
			break;
		default:
			cout << "\tYou entered wrong number: " << endl;
			cout << "\tPress any key to try again: ";
			_getch();
			break;

		}

	}
	system("pause");
	return 0;
}
void Information() {
	cout << "\n\t\tThe information about Uzbekistan" << endl;
	cout << "\n\tUzbekistan is a doubly landlocked country in Central Asia. It is \nsurrounded by five countries: Kazakhstan to the north; Kyrgyzstan to the \nnortheast; Tajikistan to the southeast; Afghanistan to the south, Turkmenistan \nto the south-west. Its capital and largest city is Tashkent. Uzbekistan is part of the Turkic speaking world, as well as a member of the Turkic Council.\nWhile the Uzbek language is the majority spoken language in Uzbekistan, Russian has widespread use as an inter-ethnic tongue and in governance. Islam is \nthe majority religion in Uzbekistan, with the majority of Uzbeks being non-\ndenominational Muslims." << endl;
	cout << "Uzbekistan has a wide mix of ethnic groups and cultures, with the Uzbek being \nthe majority group. In 1995 about 71% of Uzbekistan's population was Uzbek. The chief minority groups were Russians, Tajiks, Kazakhs , Tatars and Karakalpaks. \nIt is said, however, that non-Uzbeks decline as Russians and other minority \ngroups slowly leave and Uzbeks return from other parts of the former Soviet \nUnion.Embroidery from Uzbekistan When Uzbekistan gained independence in 1991,\nthere was concern that Muslim fundamentalism would spread across the region.The expectation was that a country long denied freedom of religious practice would \nundergo a very rapid increase in the expression of its dominant faith.According to a 2009 Pew Research Center report, Uzbekistan's population is Muslim, around identifies as non-denominational Muslim, Sunni and Shia. And around 11% say they belong to a Sufi order." << endl;
	cout << "\n\t\t\t\t\t\t\t\t(From Wikipedia)" << "\n";
}

void Booking()
{
	int b, c, d, x, y, z;
	string hotels[3][5] = {
		{"Tilyakori Hotel.","Samarqand","4 stars", "Gallaobod street Maxmudjanova 22","****"},
		{"The Royal Mezbon Hotel & SPA.", "Tashkent", "5 stars", "Kichik Xalqa Yuli street, 41B","*****"},
		{"Mirzo Boutique Hotel.", "Tashkent", "4 stars","4, Zarqaynar street, Tashkent","****"}

	};
	
	string  region;
	string rate;
	cout << "\n\tSearching by region.\n";
	cout << "\n\t[0] Continue this step: \n";
	cout << "\t[1] Skip this step: \n";
	cout << "\tType here: ";
	cin >> x;
	if (x) {
		cout << "\n\tSearching by name.\n";
		cout << "\n\t[0] Continue this step:\n";
		cout << "\t[1] Skip this step: \n";
		cout << "\tType here: ";
		cin >> y;
		if (y) {
			cout << "\n\tSearching by stars.\n";
			cout << "\tInput the stars of hotel in star character(*) : ";
			cin >> rate;
			for (int j = 0; j <= 2; j++) {
				if (rate == hotels[j][4]) {
					cout << "\t[" << j << "] " << hotels[j][0] << endl;
				}
			}
			cout << "\tEnter your choice: ";
			cin >> d;
			switch (d) {
			case 0:
				cout << "\n\t\t" << hotels[0][0] << endl;
				cout << "\t" << hotels[0][1] << endl;
				cout << "\t" << hotels[0][2] << endl;
				cout << "\t" << hotels[0][3] << endl;
				break;
			case 1:
				cout << "\n\t\t" << hotels[1][0] << endl;
				cout << "\t" << hotels[1][1] << endl;
				cout << "\t" << hotels[1][2] << endl;
				cout << "\t" << hotels[1][3] << endl;
				break;
			case 2:
				cout << "\n\t\t" << hotels[2][0] << endl;
				cout << "\t" << hotels[2][1] << endl;
				cout << "\t" << hotels[2][2] << endl;
				cout << "\t" << hotels[2][3] << endl;
				break;
			default:
				cout << "\tYou have entered wrong number:  " << endl;
				cout << "\Press any key to try again";
				break;
			}
			
		}
		if (y == 0) {
			func();
		}
	}

	if (x == 0)
	{
		cout << "\n\tInput the region of hotel: ";
		cin >> region;
		for (int i = 0; i <= 2; i++) {
			if (region == hotels[i][1]) {
				cout << "\t[" << i << "]" << hotels[i][0] << endl;
			}

		}
		cout << "\tEnter your choice: ";
		cin >> b;
		switch (b) {
		case 0:
			cout << "\n\t\t" << hotels[0][0] << endl;
			cout << "\t" << hotels[0][1] << endl;
			cout << "\t" << hotels[0][2] << endl;
			cout << "\t" << hotels[0][3] << endl;
			break;
		case 1:
			cout << "\n\t\t" << hotels[1][0] << endl;
			cout << "\t" << hotels[1][1] << endl;
			cout << "\t" << hotels[1][2] << endl;
			cout << "\t" << hotels[1][3] << endl;
			break;
		case 2:
			cout << "\n\t\t" << hotels[2][0] << endl;
			cout << "\t" << hotels[2][1] << endl;
			cout << "\t" << hotels[2][2] << endl;
			cout << "\t" << hotels[2][3] << endl;
			break;
		default:
			cout << "\tYou have entered wrong number:  " << endl;
			cout << "\Press any key to try again";
			break;
		}

	}
}
void func() {
	string name,Name;
	
	string hotels[3][5] = {
		{"Tilyakori Hotel.","Samarqand","4 stars", "Gallaobod street Maxmudjanova 22","****"},
		{"The Royal Mezbon Hotel & SPA.", "Tashkent", "5 stars", "Kichik Xalqa Yuli street, 41B","*****"},
		{"Mirzo Boutique Hotel.", "Tashkent", "4 stars","4, Zarqaynar street, Tashkent","****"}

	};
	cout << "\tInput the name of hotel(please enter the dot after hotel): ";
	getline(cin, name, '.');
	Name =name+ '.';
	
	for (int k = 0; k <= 2; k++)
	{
		cout << "\n\t\t" << hotels[k][0] << endl;
		if (Name+'.' == hotels[k][0]) {
		cout << "\n\t\t" << hotels[k][0] << endl;
		cout << "\t" << hotels[k][1] << endl;
		cout << "\t" << hotels[k][2] << endl;
		cout << "\t" << hotels[k][3] << endl;
		}
	}
	
}
