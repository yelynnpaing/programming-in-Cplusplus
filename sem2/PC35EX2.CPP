#include<iostream.h>
#include<conio.h>


int checkPalindromes(int numArr[], int arrSize)
{
	int bol=1;
	for(int j=0; j<arrSize/2; j++)
	{
		if(numArr[j] != numArr[arrSize - 1 - j])
		{
			bol=0;
			return bol;
		}
	}
	return bol;
}

void main()
{
	clrscr();
	int numArr[100];
	int arrSize;
	cout << "\nEnter number array size (integer) : ";
	cin >> arrSize;
	numArr[arrSize];
	cout << "\nEnter " << arrSize << " integers : ";
	for(int i=0; i<arrSize; i++)
	{
		cin >>numArr[i];
	}

	if(checkPalindromes(numArr, arrSize))
		cout << "\nThis number array is a palindromes";
	else
		cout << "\nThis number array is not a palindromes";

	getch();
}