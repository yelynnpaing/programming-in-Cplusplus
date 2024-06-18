#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int max_temp, min_temp, avg_temp;
	cout << "Enter max_temp and min_temp : ";
	cin >> max_temp;
	cin >> min_temp;
	avg_temp = (max_temp + min_temp) / 2;
	cout << "\nSimple average temprature is " << avg_temp;
	getch();
}