#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int num[4][5];
	int row, col, x=0;

	for(row = 0; row < 4; row++)
	{
		for(col = 0; col < 5; col++)
		{
			num[row][col] = x;
			x++;
		}

		x = row + 1;
	}

	cout << "\n - - - - - - - - - - - \n";
	for(row = 0; row < 4; row++)
	{
		for(col = 0; col < 5; col++)
		{
			cout << " | " << num[row][col] ;
		}
		cout << " | ";
		cout << "\n - - - - - - - - - - - ";
		cout << endl;
	}

	getch();
}