#include<iostream.h>
#include<conio.h>
struct point
{
	int x;
	int y;
};

void main()
{
	clrscr();
	point p1, p2, p3;
	cout << "\nEnter coordinates for p1 (x  y) : ";
	cin >> p1.x >> p1.y;
	cout << "\nEnter coordinates for p2 (x  y) : ";
	cin >> p2.x >> p2.y;

	p3.x = p1.x + p2.x;
	p3.y = p1.y + p2.y;
	cout << "\nCoordinates of P1 + P2 are : ";
	cout << p3.x << "  " << p3.y;
	getch();
}