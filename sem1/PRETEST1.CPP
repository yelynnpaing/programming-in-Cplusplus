#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();

	/*
	Display
	--------
	a
	a b
	a b c
	a b c d
	a b c d e

	for(char i='a'; i<='e'; i++)
	{
		for(char j='a'; j<=i; j++)
		{
			cout << j << " ";
		}
		cout << endl;
	}

	*/

	/*
		Display
		--------
	a
	b c
	d e f
	g h i j
	k l m n o
	-----------

	char serie = 'a';
	for(int i=1; i<=5; i++)
	{
		for(int j=1; j<=i; j++){
			cout << serie << " ";
			serie++;
		}
		cout << endl;
	}

	*/

	/*
	Display
	1
	1 2
	1 2 3
	1 2 3 4
	1 2 3 4 5
	*/

	for(int i=1; i<=5; i++)
	{
		for(int j=1; j<=i; j++)
		{
			cout << j << " ";
		}
		cout << endl;
	}
	getch();

}