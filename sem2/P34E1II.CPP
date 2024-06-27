#include<iostream.h>
#include<conio.h>
void main()
{
	 clrscr();
	 int num[100];
	 cout << "\nAns 1(ii)" << "\n\n";
	 for(int j=1; j<=50; j++)
	 {
		num[j] = j*2;
		cout << "num[" << j-1 << "]-" << num[j] << " ";
	 }
	 getch();
}