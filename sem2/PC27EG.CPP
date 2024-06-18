#include<iostream.h>
#include<conio.h>
struct part
{
	int modelNumber;
	int partNumber;
	float cost;
};

void main()
{
	clrscr();
	part part1 = {1234, 100, 120.123};
	part part2;
	cout << "\nModel : " << part1.modelNumber;
	cout << ", Part : " << part1.partNumber;
	cout << ", Cost : $" << part1.cost << endl;

	part2 = part1;
	cout << "\nModel : " << part2.modelNumber;
	cout << ", Part : " << part2.partNumber;
	cout << ", Cost : $" << part2.cost << endl;
	getch();
}