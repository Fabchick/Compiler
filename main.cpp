#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <string>

using namespace std;


int main()
{
	//1*0*0
	cout << "Eingabe(1*0*0)[q to quit Eingabe]:";

	char eingabe;
	string kompletteEingabe;

	//scanner

	bool einsen = 1;
	bool mindNull = 0;

	while (einsen == 1)
	{

		eingabe = _getche();
		if (eingabe == 'q')
			break;
		kompletteEingabe += eingabe;

		if (eingabe == '0')
			einsen = 0;
	} 

	if(einsen==0)
	do				//mind eine 0
	{

		eingabe = _getche();
		if (eingabe == 'q')
			break;

		if (eingabe == '0')
		{
			kompletteEingabe += eingabe;
			mindNull = 1;
			break;
		}
		else
			cout << "\a";
		
		
	} while (eingabe == '0');

	if(mindNull==1)
	do			
	{

		eingabe = _getche();
		if (eingabe == 'q')
			break;

		if (eingabe == '0')
			kompletteEingabe += eingabe;
		else
			cout << "\a";

		
		


	} while (eingabe == '0');



	system("cls");

	cout << kompletteEingabe;

	return 0;

}