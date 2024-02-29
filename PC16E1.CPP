#include<iostream.h>
#include<conio.h>
void main()
{

	clrscr();
	int num1, num2, num3, temp;
	cout << "\nEnter three numbers ... ";
	cin >> num1 >> num2 >> num3;
	if(num1 > num2  && num1 > num3)
		cout << "\nNum1 value is" << num1 << ". and it is larger number.";
	else if(num2 > num1 && num2 > num3)
		cout << "\nNum2 value is " << num2 << ". and it is larger number.";
	else
		cout << "\nNum3 value is " << num3 << ". and it is larger number.";
	getch();
}