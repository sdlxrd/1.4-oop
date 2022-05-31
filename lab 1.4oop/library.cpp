#include "library.h"
#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>

using namespace std;

void HomeLib::Read(HomeLib a[], int& x)
{
	for (int i = 0; i < x; i++)
	{
		cout << "Name: "; cin >> a[i].book.name;
		cout << "Autor: "; cin >> a[i].book.autor;
		cout << "Date: "; cin >> a[i].book.date;
	}

	a[x].Menu(a, x);

}

void HomeLib::Menu(HomeLib a[], int& x)
{
	int menuNum;
	int i;

	do {
		cout << endl;
		cout << "Enter your choice:\n";
		cout << "1 - Search book\n";
		cout << "2 - Delete book\n";
		cout << "3 - Add book\n";
		cout << "4 - Display book\n";
		cout << "5 - Exit\n";
		cout << "Your choice: ";
		cin >> menuNum;
		cout << endl;

		switch (i = menuNum)
		{
		case 1:
			a[x].Search(a, x);
			break;
		case 2:
			a[x].Delete(a, x);
			break;
		case 3:
			a[x].Add(a, x);
			break;
		case 4:
			a[x].Display(a, x);
			break;
		case 5:
			break;
		default:
			cout << "Incorrect value!\n\n";
		}
	} while (menuNum != 5);
}

void HomeLib::Search(HomeLib a[], int& x)
{
	int seaNum, sw, date;
	char name[50], autor[50];

	int lose1 = 0;
	int lose2 = 0;
	int lose3 = 0;

	do {
		cout << "Enter search parameters:\n";
		cout << "1 - Search by name\n";
		cout << "2 - Search by autor\n";
		cout << "3 - Search by date\n";
		cout << "4 - Exit\n";
		cin >> seaNum;

		switch (sw = seaNum)
		{
		case 1:
			cout << "Enter name: ";
			cin >> name;

			for (int i = 0; i < x; i++)
			{
				if (strcmp(name, a[i].book.name) == 0)
				{
					cout << a[i].book.name << "\t" << a[i].book.autor
						<< "\t" << a[i].book.date << endl;
					lose1++;
				}
			}
			if (lose1 == 0)
			{
				cout << "The book does not exist in the library!\n\n";
			}
			break;
		case 2:
			cout << "Enter autor: ";
			cin >> autor;

			for (int i = 0; i < x; i++)
			{
				if (strcmp(autor, a[i].book.autor) == 0)
				{
					cout << a[i].book.name << "\t" << a[i].book.autor
						<< "\t" << a[i].book.date << endl;
					lose2++;
				}
			}
			if (lose2 == 0)
			{
				cout << "The book does not exist in the library!\n\n";
			}
			break;
		case 3:
			cout << "Enter date: ";
			cin >> date;

			for (int i = 0; i < x; i++)
			{
				if (date == a[i].book.date)
				{
					cout << a[i].book.name << "\t" << a[i].book.autor
						<< "\t" << a[i].book.date << endl;
					lose3++;
				}
			}
			if (lose3 == 0)
			{
				cout << "The book does not exist in the library!\n\n";
			}
			break;
		case 4:
			break;
		default:
			cout << "Incorrect value!\n\n";
		}
	} while (seaNum != 4);
}

void HomeLib::Delete(HomeLib a[], int& x)
{
	int del;

	cout << "Enter the address to delete(1 to " << x << ")" << endl;
	cin >> del;

	if (x == 1)
	{
		cout << "Impossible to delete!\n\n";
	}
	else
	{
		strcpy_s(a[del - 1].book.name, a[x - 1].book.name);
		strcpy_s(a[del - 1].book.autor, a[x - 1].book.autor);
		a[del - 1].book.date = a[x - 1].book.date;
		x--;
		cout << "Deleted successfully" << endl;
	}
}

void HomeLib::Add(HomeLib a[], int& x)
{
	cout << "Name: ";
	cin >> a[x + 1].book.name;
	cout << "Autor: ";
	cin >> a[x + 1].book.autor;
	cout << "Date: ";
	cin >> a[x + 1].book.date;
	x++;
}

bool HomeLib::Display(HomeLib a[], int& x)
{
	for (int i = 0; i < x; i++)
	{
		cout << a[i].book.name << "\t" << a[i].book.autor
			<< "\t" << a[i].book.date << endl;
	}
	return true;
}