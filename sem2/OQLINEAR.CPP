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
    return 0;
}

void main()
{
    clrscr();
    char charArr[] = "HOW ARE YOU?";
    char key='Y', result;
    int size;
    size = sizeof(charArr) / sizeof(charArr[0]);
    cout << "\nindex number of " << key << " is ";
    if(linearSearch(charArr, size, key))
	cout << result << endl;
    getch();
}