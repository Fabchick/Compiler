#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <string>

using namespace std;


int main()
{
	//alle Dezimalzahlen mit neg. Vorzeichen ohne führende null

	cout << "Eingabe[q to quit Eingabe]:";

	char eingabe;
	string kompletteEingabe;

	//scanner

	bool syntax = 1;
	bool quit = 0;

	do {

		eingabe = _getche();
		if (eingabe == '-')
			syntax = 0;
		if (eingabe == 'q')
			quit = 1;
		if (eingabe != '0')
			break;
		if (eingabe == '0')
			cout << "\a";
	
	} while (eingabe == '0');

	kompletteEingabe += eingabe;



	while (quit == 0) {

		eingabe = _getche();
		if(syntax == 0 && eingabe == '-')
			cout << "\a";
		else {
			if (eingabe == 'q')
				break;
			kompletteEingabe += eingabe;
		}

		if (eingabe == '-') {
			eingabe = _getche();
			if (eingabe == 'q')
				break;
			if (eingabe == '-')
			{
				do {
					cout << "\a";
					eingabe = _getche();

				} while (eingabe == '-');
			}
			kompletteEingabe += eingabe;
		}
	}
	

	system("cls");

	cout << kompletteEingabe;

	return 0;

}