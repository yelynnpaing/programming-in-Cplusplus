#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int block_length, block_width, house_length, house_width,
	block_area, house_area, required_time;
	cout << "\nEnter block length : ";
	cin >> block_length;
	cout << "Enter block width : ";
	cin >> block_width;
	cout << "Enter house length : ";
	cin >> house_length;
	cout << "Enter house width : ";
	cin >> house_width;
	block_area = block_length * block_width;
	house_area = house_length * house_width;
	required_time = ( block_area - house_area ) / 2;
	cout << "\nRequired time : " << required_time;
	getch();
}