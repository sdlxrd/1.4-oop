#pragma once

#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>

class HomeLib
{
private:
	struct Data
	{
		char name[50];
		char autor[50];
		int date;
	};
	Data book;

public:
	void Menu(HomeLib a[], int& x);
	void Read(HomeLib a[], int& x);
	bool Display(HomeLib a[], int& x);
	void Search(HomeLib a[], int& x);
	void Add(HomeLib a[], int& x);
	void Delete(HomeLib a[], int& x);
};