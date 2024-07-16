#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[4][5];
	int row, col;
	for(row=0; row<4; row++)
	{
		for(col=0; col<5; col++)
		{
			a[row][col] = 0;
		}
	}

	for(row=0; row<4; row++)
	{
		for(col=0; col<5; col++)
		{
			cout << a[row][col] << " ";
		}
		cout << endl;
	}
	getch();
}