#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int purchase_amount, tax_code;
	float sales_tax, new_amount ;
	cout << "\nEnter purchase amount : ";
	cin >> purchase_amount;
	cout << "\nEnter tax_code : ";
	cin >> tax_code;
	switch(tax_code)
	{
		case 0 : sales_tax = 0;
			break;
		case 1 : sales_tax = purchase_amount * 0.03;
			break;
		case 2 : sales_tax = purchase_amount * 0.05;
			break;
		case 3 : sales_tax = purchase_amount * 0.07;
			break;
	}
	new_amount = purchase_amount + sales_tax;
	cout << "\nSales tax : " << sales_tax << endl;
	cout << "Total amount : " << new_amount;


	getch();
}