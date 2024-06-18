#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	float meter_unit;
	int total_charges;
	cout << "\nEnter meter unit for a resident : ";
	cin >> meter_unit;
	if(meter_unit <= 500)
		total_charges = ( meter_unit * 2 ) + 5;
	else if(meter_unit <= 1000)
		total_charges = (( 500 * 4 ) + (( meter_unit - 500 ) * 2 )) + 5;
	else if(meter_unit > 1000)
		total_charges = (( 1000 * 6 ) + (( meter_unit - 1000 ) * 3 )) + 5;

	cout << "\nTotal charges is " << total_charges << " kyats.";
	getch();
}