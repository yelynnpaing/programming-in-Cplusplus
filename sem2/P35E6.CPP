//Changing decimal to hexadecimal

#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void main()
{
	clrscr();
	int hexaArr[16];
	int deciNum, c=0, size=0;
	cout << "\nEnter a denary number : ";
	cin >> deciNum;
	while(deciNum > 0)
	{
		hexaArr[c] = deciNum % 16;
		deciNum /= 16;
		size++;
		c++;
	}

	//update array size
	hexaArr[size];
	cout << "\nChanging denary number to hexadecimal format : ";
	for(int i=0; i<size; i++)
	{
		int num = hexaArr[size - 1 - i];
		if(num < 10)
		{
			cout << num << " ";
		}
		else
		{
			switch(num)
			{
				case 10:
					cout << "A" << " ";
					break;
				case 11:
					cout << "B" << " ";
					break;
				case 12:
					cout << "C" << " ";
					break;
				case 13:
					cout << "D" << " ";
					break;
				case 14:
					cout << "E" << " ";
					break;
				case 15:
					cout << "F" << " ";
					break;
			}
		}
	}
	getch();
}