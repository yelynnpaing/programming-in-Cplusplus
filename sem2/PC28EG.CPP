#include<iostream.h>
#include<conio.h>
struct distance
{
	int feet;
	float inches;
};

void main()
{
	clrscr();
	distance d1, d3;
	distance d2 = {11, 6.25};

	cout << "\nEnter Feet : ";
	cin >> d1.feet;
	cout << "\nEnter Inches : ";
	cin >> d1.inches;
	cout << endl;

	d3.inches = d1.inches + d2.inches;
	d3.feet = 0;
	if(d3.inches >= 12.0)
	{
		d3.inches -= 12.0;
		d3.feet++;
	}

	d3.feet = d3.feet + d1.feet+ d2.feet;
	cout << d1.feet <<"\' - " << d1.inches << "\" + ";
	cout << d2.feet << "\' - " << d2.inches << "\" = ";
	cout << d3.feet << "\' - " << d3.inches << "\"";
	getch();
}