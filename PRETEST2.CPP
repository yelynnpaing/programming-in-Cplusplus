#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int int1, int2, maxi, mini;
	cout << "\nEnter first integer : ";
	cin >> int1;
	cout << "Enter second integer : ";
	cin >> int2;
	if(int1 > int2)
	{
		maxi = int1;
		mini = int2;
	}
	else if(int1 < int2)
	{
		maxi = int2;
		mini = int1;
	}
	else
		cout << "\nint1 is equal int2.";
	if(int1 != int2)
	{
		cout << "\nMaximum number : " << maxi << endl;
		cout << "\nMinimum number : " << mini;
	}
	getch();
}