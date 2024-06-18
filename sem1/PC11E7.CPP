#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	double centigrade, fahrenheit;
	cout << "\nEnter fahrenheit : ";
	cin >> fahrenheit;
	centigrade = 0.5 / 0.9 * ( fahrenheit - 32 );
	cout << "Centigrade : " << centigrade;
	getch();
}