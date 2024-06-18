#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	char char1, char2, char3, temp;
	cout << "\nEnter three character not serialize ... ";
	cin >> char1 >> char2 >> char3;
	if(char1 > char2)
	{
		temp = char1;
		char1 = char2;
		char2 = temp;
	}
	if(char2 > char3)
	{
		temp = char2;
		char2 = char3;
		char3 = temp;
	}
	if(char1 > char3)
	{
		temp = char1;
		char1 = char3;
		char3 = temp;
	}
	cout << "\Sorting ascending characters ... ";
	cout << char1 << " " << char2 << " " << char3;
	getch();
}