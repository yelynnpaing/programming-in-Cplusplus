#include<iostream.h>
#include<conio.h>
void main()
{

	clrscr();
	cout << "\nFirst tweenty numbers with their square and cubes : "<< endl;
	int i;
	for(i=1; i<=20; i++){
		cout << i << "\t" << i*i << "\t" << i*i*i << endl;
	}
	getch();
}