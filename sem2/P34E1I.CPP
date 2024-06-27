#include<iostream.h>
#include<conio.h>
void main()
{
	 clrscr();
	 int num[100];
	 cout << "\nAns 1(i)" << endl;
	 for(int i=0; i<100; i++)
	 {
		num[i] = i+1;
		cout << "num[" << i << "]-" << num[i] << "  ";
	 }
	 getch();
}