#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int number, facto = 1;
	cout << "\nEnter a number to find factorial : ";
	cin >> number;
	cout << number << "! = ";
	for(int i=number; i>=1; i--)
	{
		facto *= i;
		cout << i << " x ";
	}
	cout << " = " << facto;
	getch();
}