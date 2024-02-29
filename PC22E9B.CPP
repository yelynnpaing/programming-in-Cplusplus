#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	for(int i=5; i>=1; i--)
	{
		for(int j=i; j>=1; j--)
		{
			cout << " * " ;
		}
		cout << endl;
	}
	getch();
}