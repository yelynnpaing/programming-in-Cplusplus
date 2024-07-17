#include <iostream.h>
#include <conio.h>

int linearSearch(int arr[], int num, int key)
{
    int s=0, e=num;
    while(s <= e)
    {
        int mid = ( s + e ) / 2;

        if(arr[mid] == key)
            return mid;
        else if(arr[mid] > key)
            e = mid - 1;
        else if(arr[mid] < key)
            s = mid + 1;
    }
    return -1;
}

void main()
{
    clrscr();
    int num, numArr[10];
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
