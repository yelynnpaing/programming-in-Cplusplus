#include<iostream.h>
#include<conio.h>
struct phone
{
	int areaCode;
	int exCode;
	int num;
};
void main()
{
	clrscr();
	phone other = {414, 525, 1212};
	phone myPh;
	cout << "\nEnter area code : ";
	cin >> myPh.areaCode;
	cout << "\nEnter exchage code : ";
	cin >> myPh.exCode;
	cout << "\nEnter number : ";
	cin >> myPh.num;

	cout << "\nMy number is " << "\t\t";
	cout << "(" << myPh.areaCode << ") " << myPh.exCode << " - " << myPh.num << endl;
	cout << "Other number is " << "\t\t";
	cout << "(" << other.areaCode << ") " << other.exCode << " - " << other.num;
	getch();
}