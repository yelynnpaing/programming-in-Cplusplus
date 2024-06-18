#include<iostream.h>
#include<conio.h>
void main()
{

	clrscr();
	int number;
	cout << "\nEnter a number : ";
	cin >> number;
	if(number % 2 == 0)
		cout << "\nNumber " << number << " is even.";
	else
		cout << "\nNumber " << number << " is odd.";
	getch();
}