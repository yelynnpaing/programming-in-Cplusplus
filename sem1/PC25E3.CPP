#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	long int total_sec, second, minute, hour, am_hour, pm_hour;
	cout << "\nEnter total seconds : ";
	cin >> total_sec;
	hour = total_sec / 3600;
	minute = (total_sec % 3600) / 60;
	second = total_sec % 60;
	if(hour > 12)
	{
		pm_hour = hour - 12;
		cout << pm_hour << " : " << minute << " : " << second << " pm";
	}
	else{
		am_hour = hour;
		cout << am_hour << " : " << minute << " : " << second << " am";
	}
	getch();
}