#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	double tax_rate,i1_price, i2_price, i3_price, t_price_before_tax,
	t_price_after_tax, tax_payable;
	cout << "\nEnter i1_price : ";
	cin >> i1_price;
	cout << "Enter i2_price : ";
	cin >> i2_price;
	cout << "Enter i3_price : ";
	cin >> i3_price;
	cout << "Enter tax_rate : ";
	cin >> tax_rate;
	tax_rate = tax_rate / 100;
	t_price_before_tax = i1_price + i2_price + i3_price;
	tax_payable = t_price_before_tax * tax_rate;
	cout << "\nTotal Price is " << t_price_before_tax << endl;
	cout << "Tax payable is " << tax_payable;
	getch();
}