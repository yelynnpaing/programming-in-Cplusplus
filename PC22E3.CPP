#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i, sum = 0;
	for(i=2; i<=100; i+=2){
		sum += i;
		cout << i << "\t" ;
	}
	cout << "\nSum of even integer 1 to 100 = " << sum;
	getch();
}