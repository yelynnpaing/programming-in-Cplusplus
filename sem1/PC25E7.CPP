#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	cout << "\nFor Loop";
	cout << endl;
	int i;
	for(i=3; i<=15; i+=3)
	{
		cout << i << "\t";
	}

	cout << endl;
	cout << "\nWhile Loop";
	cout << endl;
	i = 3;
	while(i<=15)
	{
		cout << i << "\t";
		i += 3;
	}

	cout << endl;
	cout <<"\nDo while loop";
	cout << endl;
	i = 3;
	do{
		cout << i << "\t";
		i += 3;
	}while(i <= 15);
	getch();
}