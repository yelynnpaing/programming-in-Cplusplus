#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	long int odd_int=1;
	cout << endl;
	for(int i=15; i>=1; i-=2)
	{
	     odd_int *= i;
	     cout << i << "\t";
	}
	cout << "\nproduct of odd integer is " << odd_int;
	getch();
}