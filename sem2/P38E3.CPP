#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int arr[5][4];
	int s, sub, m=40;
	char result;

	for(s = 0; s < 5; s++)
	{
		for(sub = 0; sub < 4; sub++)
		{
			arr[s][sub] = m;
			m = m + 10;
		}
		//change new marks
		m = 48 + s + 1;
	}

	cout << endl;
	for(s = 0; s < 5; s++)
	{
		int passed = 1;
		cout << " | student " << s+1;
		for(sub = 0; sub < 4; sub++)
		{
			cout << " | " << arr[s][sub];

			if(arr[s][sub] < 50)
			{
				passed = 0;
			}
		}
		cout << " | " << (passed ? " - Pass" : " - Fail");
		cout << " \n";

	}

	getch();
}