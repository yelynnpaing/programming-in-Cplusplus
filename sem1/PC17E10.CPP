#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	double begining_bal, total_withdrawls, total_deposit, all_transition,
	end_bal, new_bal, federal_tax;
	cout << "\nEnter begining Account balance : " ;
	cin >> begining_bal;
	cout << "Enter total withdraws : ";
	cin >> total_withdrawls;
	cout << "Enter total deposit : ";
	cin >> total_deposit;
	new_bal = ( begining_bal - total_withdrawls ) + total_deposit;
	federal_tax = ( total_withdrawls + total_deposit) * 0.01;
	end_bal = new_bal - federal_tax;
	cout << "\nFederal Tax : " << federal_tax << endl;
	cout << "end balance : " << end_bal ;

	getch();
}