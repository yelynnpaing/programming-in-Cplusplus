#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int num1, num2, num3, sum = 0;
	cout << "\nEnter three numbers : ";
	cin >> num1 >> num2 >> num3;
	sum = num1 + num2 + num3;
	cout << "\nTotal : " << sum;
	getch();
}