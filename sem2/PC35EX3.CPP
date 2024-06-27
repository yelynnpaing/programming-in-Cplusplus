#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int numArr[1];
	int arrSize ;
	cout << "\n\nEnter number array size : ";
	cin >> arrSize;
	if( arrSize != 0 )
	{
		numArr[arrSize];
		int count = 0;
		int n;
		do{
			cout << "\nEnter integer : ";
			cin >> n;
			numArr[count] = n;
			count++;
		}while(count < arrSize);

		if( n != 0 )
		{
			for(int i=0; i<arrSize; i++)
			{
				cout << "\n"  << numArr[i] << " - ";
				for(int j=0; j<numArr[i]; j++)
				{
					cout << " * ";
				}
				cout << endl;
			}
		}
		else
		{
			for(int i=0; i<arrSize; i++)
			{
				cout << "\n" << numArr[i] << " - Zero " << endl;
			}
		}
	}
	else
	{
		cout << "\nArray size can not be zero";
	}
	getch();
}