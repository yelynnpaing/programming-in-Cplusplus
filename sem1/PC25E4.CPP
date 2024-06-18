#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int int1, int2;
	cout << "\nEnter first interger : ";
	cin >> int1;
	cout << "Enter second integer : ";
	cin >> int2;
	if(int2 % int1 == 0)
		cout << endl << int1 << " is multiple of " << int2;
	else
		cout << endl << int1 << " is not multiple of " << int2;
	getch();
}