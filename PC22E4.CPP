#include<iostream.h>
#include<conio.h>
void main()
{

	clrscr();
	int i, sum = 0;
	for(i=1; i<= 199; i++){
		if(i % 2 != 0){
			sum += i;
			cout << i << "\t" ;
		}
	}
	cout << "\nSum of odd number 1 to 199 = " << sum;
	getch();
}