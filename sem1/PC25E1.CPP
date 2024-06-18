#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	float radius, diameter, circumference, area, pi=3.1419;
	cout << "\nEnter radius of circle : ";
	cin >> radius;
	diameter = 2 * radius;
	circumference = 2 * pi * radius;
	area = pi * radius * radius;
	cout << "\ndiameter : " << diameter << endl;
	cout << "circumference : " << circumference << endl;
	cout << "area : " << area;
	getch();
}