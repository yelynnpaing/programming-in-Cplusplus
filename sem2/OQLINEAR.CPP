#include <iostream.h>
#include <conio.h>

int linearSearch(char arr[], int size, char key)
{
    for(int j=0; j<size; j++)
    {
	if(arr[j] == key)
	{
		cout << j;
	}
    }
    return j;
}

void main()
{
    clrscr();
    char charArr[] = "HOW ARE YOU?";
    char key='Y';
    int size;
    size = sizeof(charArr) / sizeof(charArr[0]);
    if(linearSearch(charArr, size, key))
	cout << " is index number of " << key;
    getch();
}