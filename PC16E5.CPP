#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	double weight, deli_charge;
	cout << "\nEnter parcel weight : ";
	cin >> weight;
	if(weight < 2.5)
		deli_charge = weight * 3.5;
	else if(weight <= 5)
		deli_charge = weight * 2.85;
	else if(weight > 5)
		deli_charge = weight * 2.45;
	cout << weight ;
	cout << "kg Parcel weight of ";
	cout << "delivery charge is $" << deli_charge;
	getch();
}