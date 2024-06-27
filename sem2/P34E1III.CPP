#include<iostream.h>
#include<conio.h>
void main()
{
	 clrscr();
	 int num[100];
	 cout << "\nAns 1(iii)" << "\n\n";
	 int i=0;
	 for(int k=100; k>=1; k--)
	 {
		num[k] = k;
		cout << "num[" << i << "]-" << num[k] << "  ";
		i++;
	 }
	 getch();
}