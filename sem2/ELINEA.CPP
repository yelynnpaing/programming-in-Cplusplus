#include <iostream.h>
#include <conio.h>

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
    int numArr[6] = {1, 2, 3, 5, 12, 13};
    int key, result;
    cout << "\nEnter a number to search : ";
    cin >> key;
    
    result = linearSearch(numArr, 6, key);
    if (result == -1)
	    cout << "\nElement is not present in array" << endl;
    else 
	    cout << "\nindex number of " << key << " is " << result << endl;
    getch();
}