#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n = 0;
	for(int i=0; i<5; i++)
	{

		for(int j=0; j<=i; j++)
		{
			n++;
			cout << n << "\t";
		}
		cout << endl;
	}
	getch();
}