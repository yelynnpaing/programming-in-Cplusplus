#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	float weekly_pay;
	int regular_worked_hour, overtimes_hour, wage_rate,
	regular_pay, overtimes_pay;
	cout << "\nEnter regular work hour : ";
	cin >> regular_worked_hour;
	cout << "\nEnter wage rate : ";
	cin >> wage_rate;
	cout << "\nEnter overtimes hour : ";
	cin >> overtimes_hour;
	regular_pay = regular_worked_hour * wage_rate;
	overtimes_pay = overtimes_hour * (wage_rate * 1.5);
	weekly_pay  = regular_pay + overtimes_pay;
	cout << "\nWeekly pay is " << weekly_pay;
	getch();
}