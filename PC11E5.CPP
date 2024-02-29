#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	double area;
	int radius;
	cout << "\nEnter raduis number : ";
	cin >> radius ;
	area = 3.142 * radius * radius;
	cout << "Area of circle is : "<< area;
	getch();
}