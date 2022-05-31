#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>
#include "library.h"

using namespace std;

int main()
{
    HomeLib a[10];
    int x = 0;

    cout << "Enter the size of the library: ";
    cin >> x;
    cout << "Enter your books:\n";
    a[x].Read(a, x);

    system("pause");
    return 0;
}