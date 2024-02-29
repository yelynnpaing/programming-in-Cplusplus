#include<iostream.h>
#include<conio.h>

int fibonanci(int n)
{
	if(n <= 1)
		return n;
	else
		return fibonanci(n-1) + fibonanci(n-2);
}

int fibonanciSum(int n)
{
	int sum = 0;
	for(int i=0; i<n; i++)
	{
		sum += fibonanci(i);
	}
	return sum;
}

void main()
{
	clrscr();
	int sum , n;
	cout << "\Enter first n term of fibonance sequence : ";
	cin >> n ;
	sum = fibonanciSum(int n);
	cout << "\nsum of the first n term of fibonance sequence : " << sum;
	getch();
}