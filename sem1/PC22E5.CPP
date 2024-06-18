#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int first = 1, second = 1;
	int next_num;
	cout << "\nFibonanci sequence of numbers are : " << endl;
	cout << "First : " << first << "\t" << "Second : " << second << endl;
	int i = 3;
	do{
		next_num = first + second;
		first = second;
		second = next_num;
		cout << "next_num : " << next_num << "\t";
		i++;
	}while(i <= 5);
	getch();
}