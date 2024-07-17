#include <iostream.h>
#include<conio.h>

int linearSearch(int arr[], int num, int key)
{
    for(int j=0; j<num; j++)
    {
	if(arr[j] == key)
	    return j;
    }

    return -1;
}

void main()
{
	clrscr();
    int num, numArr[1];
    cout << "\nEnter a number : ";
    cin >> num;
    numArr[num];
    cout << "\nEnter " << num << " numbers : ";
    for(int i=0; i<num; i++)
    {
	cin >> numArr[i];
    }

    int key;
    cout << "\nEnter a number to search : ";
    cin >> key;

    cout << "\nIndex number of " << key << " is ";
    cout << linearSearch(numArr, num, key) << endl;
    getch();
}
