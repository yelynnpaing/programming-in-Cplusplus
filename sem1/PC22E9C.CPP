#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	for(int i=5; i>=1; i--)
	{
		for(int j=0; j<5-i; j++)
		{
			cout << " ";
		}
		for(int k=i; k>=1; k--)
		{
			cout << "*";
		}
		cout << endl;
	}
	getch();
}