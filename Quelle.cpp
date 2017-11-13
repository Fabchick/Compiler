#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>

using namespace std;


int main()
{
	char eingabe;
	char zustand;
	string ausgabe[100];
	int x = 0;

	//Start
	zustand = '0';


	while (zustand != '2')
	{
		if (zustand == '0')
		{
			do
			{
				eingabe = _getche();

				if (eingabe != 'a' && eingabe != 'b' && eingabe != 13)
					cout << "\a";

			} while (eingabe != 'a' && eingabe != 'b' && eingabe != 13);
			ausgabe[x] = eingabe;
			x++;

			if (eingabe == 'a')
				zustand = '1';
			if (eingabe == 'b')
				zustand = '2';
			if (eingabe == 13)
				zustand = '2';
		}


		if (zustand == '1')
		{
			do
			{
				eingabe = _getche();

				if (eingabe != 'a' && eingabe != 'b' && eingabe != 13)
					cout << "\a";

			} while (eingabe != 'a' && eingabe != 'b' && eingabe != 13);
			ausgabe[x] = eingabe;
			x++;

			if (eingabe == 'a')
				zustand = '1';
			if (eingabe == 'b')
				zustand = '2';
			if (eingabe == 13)
				zustand = '2';
		}
	}
	
	cout << endl << "Ausgabe akzeptiert: ";

	for (int i = 0; i < x; i++)
	{
		cout << ausgabe[i];
	}
	
	return 0;

}

/*

int main()
{
	char eingabe;
	char zustand;
	string ausgabe[100];
	int x = 0;

	//Start
	zustand = '0';


	while (zustand != '3')
	{
		if (zustand == '0')
		{
			do
			{
				eingabe = _getche();

				if (eingabe != '0')
					cout << "\a";

			} while (eingabe != '0');
			ausgabe[x] = eingabe;
			x++;

			if (eingabe == '0')
				zustand = '1';
		}


		if (zustand == '1')
		{
			do
			{
				eingabe = _getche();

				if (eingabe != '1')
					cout << "\a";

			} while (eingabe != '1');
			ausgabe[x] = eingabe;
			x++;

			if (eingabe == '1')
				zustand = '2';
		}


		if (zustand == '2')
		{
			do
			{
				eingabe = _getche();

				if (eingabe != '0' && eingabe != '1')
					cout << "\a";

			} while (eingabe != '0' && eingabe != '1');
			ausgabe[x] = eingabe;
			x++;

			if (eingabe == '0')
				zustand = '3';
			if (eingabe == '1')
				zustand = '3';
		}

	}

	cout << endl << "Ausgabe akzeptiert: ";

	for (int i = 0; i < x; i++)
	{
		cout << ausgabe[i];
	}

	return 0;

}




int main()
{
	char eingabe;
	char zustand;
	string ausgabe[100];
	int x = 0;

	//Start
	zustand = '0';


	while (zustand != '3')
	{
		if (zustand == '0')
		{
			do
			{
				eingabe = _getche();

				if (eingabe != '0' && eingabe != '1')
					cout << "\a";

			} while (eingabe != '0' && eingabe != '1');
			ausgabe[x] = eingabe;
			x++;

			if (eingabe == '0')
				zustand = '2';
			if (eingabe == '1')
				zustand = '1';
		}


		if (zustand == '1')
		{
			do
			{
				eingabe = _getche();

				if (eingabe != '0' && eingabe != '1')
					cout << "\a";

			} while (eingabe != '0' && eingabe != '1');
			ausgabe[x] = eingabe;
			x++;

			if (eingabe == '1')
				zustand = '1';
			if (eingabe == '0')
				zustand = '3';
		}


		if (zustand == '2')
		{
			do
			{
				eingabe = _getche();

				if (eingabe != '0' && eingabe != '1')
					cout << "\a";

			} while (eingabe != '0' && eingabe != '1');
			ausgabe[x] = eingabe;
			x++;

			if (eingabe == '0')
				zustand = '2';
			if (eingabe == '1')
				zustand = '1';
		}

	}

	cout << endl << "Ausgabe akzeptiert: ";

	for (int i = 0; i < x; i++)
	{
		cout << ausgabe[i];
	}

	return 0;

}



int main()
{
	char eingabe;
	char zustand;
	string ausgabe[100];
	int x = 0;

	//Start
	zustand = '1';


	while (zustand != '3' && zustand != '2')
	{
		if (zustand == '1')
		{
			do
			{
				eingabe = _getche();

				if (eingabe != '0' && eingabe != '1')
					cout << "\a";

			} while (eingabe != '0' && eingabe != '1');
			ausgabe[x] = eingabe;
			x++;

			if (eingabe == '0')
				zustand = '3';
			if (eingabe == '1')
				zustand = '0';
		}


		if (zustand == '0')
		{
			do
			{
				eingabe = _getche();

				if (eingabe != '0' && eingabe != '1')
					cout << "\a";

			} while (eingabe != '0' && eingabe != '1');
			ausgabe[x] = eingabe;
			x++;

			if (eingabe == '1')
				zustand = '0';
			if (eingabe == '0')
				zustand = '2';
		}

	}

	cout << endl << "Ausgabe akzeptiert: ";

	for (int i = 0; i < x; i++)
	{
		cout << ausgabe[i];
	}

	return 0;

}

*/