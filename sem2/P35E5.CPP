//Decimal to binary changing

#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void main()
{
	clrscr();
	int biArr[1], deciNum, c=0, size=0;
	cout << "\nEnter a denary number : ";
	cin >> deciNum;

	while(deciNum > 0)
	{
		biArr[c] = deciNum % 2;
		deciNum /= 2;
		size++;
		c++;
	}

	//update array size;
	biArr[size];
	cout << "\nchanging denary number to binary digit format - ";
	for(int i=0; i<size; i++)
	{

		cout << biArr[size - 1 - i] << " ";
	}
	getch();
}