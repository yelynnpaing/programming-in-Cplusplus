#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n, first=1, second=1, nextNumber;
	cout << "\nEnter n terms of Fibonanci sequence : ";
	cin >> n;
	for(int i=1; i<=n; i++)
	{
		if(i == 1)
		{
			cout << "First : " << first << endl;
			continue;
		}
		if(i == 2)
		{
			cout << "Second : " << second << endl;
			continue;
		}
		nextNumber = first + second;
		first = second;
		second = nextNumber;
		cout << "nextNumber : " << nextNumber << endl;
	};
	getch();
}