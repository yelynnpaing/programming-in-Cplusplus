#include<iostream.h>
#include<stdlib.h>
#include<iomanip.h>
#include<conio.h>
void main()
{
	clrscr();
	int i, a[10];
	randomize();
	for(i=0; i<10; i++)
	{
		a[i] = random(100);
	}
	cout << "\nrandom number comming up ...\n\n";
	for(i=0; i<10; i++)
	{
		cout << setw(5) << a[i];
	}

	getch();
}