#include<iostream.h>
#include<conio.h>
#include<iomanip.h>

void main()
{
	clrscr();
	int intArr[10];
	int intNum, average, total=0;
	cout << "\nEnter 10 integer numbers : ";
	for(int i=0; i<10; i++)
	{
		cin >> intArr[i];
		total += intArr[i];
	}

	average = total / 10;
	cout << "\nAverage value of integer array : " << average;
	cout << "\nIntegers greater than the avarage : ";
	for (int j=0; j<10; j++)
	{
		if(intArr[j] > average)
			cout << intArr[j] << "  ";
	}
	getch();
}