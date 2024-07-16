#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int arr[5][4];
	int s, sub, m=40;

	for(s = 0; s < 5; s++)
	{
		for(sub = 0; sub < 4; sub++)
		{
			arr[s][sub] = m;
			m = m + 10;
		}
		//change new marks
		m = 48 + s;
	}

	cout << endl;
	for(s = 0; s < 5; s++)
	{
		cout << " | student " << s+1;
		for(sub = 0; sub < 4; sub++)
		{
			cout << " | " << arr[s][sub] ;
		}
		cout << " | \n";
	}

	getch();
}