#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i, next_term , t1=1 , t2=1;
	cout << "\nFibonanci sequence of number : ";
	for(i=1; i<=5; i++){
		if(i == 1){
			cout << t1 << "\t";
			continue;
		}
		if(i == 2){
			cout << t2 << "\t";
			continue;
		}
		next_term = t1 + t2;
		t1 = t2;
		t2 = next_term;

		cout << next_term << "\t";
	}
	getch();
}