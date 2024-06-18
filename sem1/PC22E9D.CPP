#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	for(int i=0; i<5; i++)
	{

		for(int j=0; j<5-i; j++)
		{
			cout << " " ;
		}
		for(int k=0; k<=i; k++)
		{
			cout << "*" ;
		}
		cout << endl;
	}
	getch();

}