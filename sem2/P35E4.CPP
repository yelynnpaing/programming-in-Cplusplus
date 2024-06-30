

#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void main()
{
	clrscr();
	long int salaryArr[] = {9000, 10000, 12000, 15000, 20000, 35000, 50000};
	long int employeeArr[] = { 3000, 2500, 1500, 1000, 400, 100, 25 };
	double avaSalary;
	double totalS=0, totalE=0;
	long int aboveAverage=0, belowAverage=0, individual;

	for(int i=0; i<7; i++)
	{
		totalS += salaryArr[i] * employeeArr[i];
		totalE += employeeArr[i];
	}
	avaSalary = totalS / totalE;

	for(int k=0; k<7; k++)
	{
		if(salaryArr[k] > avaSalary)
		{
			cout << "\nabove average : " << salaryArr[k] << "  ";
			aboveAverage += salaryArr[k];
		}
		else if(salaryArr[i] < avaSalary)
		{
			cout << "\nbelow average : " << salaryArr[k] << "  ";
			belowAverage += salaryArr[k];
		}
	}

	individual = avaSalary * 1000.0 ;

	cout << "\n\nAverage salary level : " << avaSalary << endl;
	cout << "\nSalary above average salary level : " << aboveAverage <<endl;
	cout << "\nSalary below average salary level : " << belowAverage << endl;
	cout << "\nAverage salary earned by individual : " << individual;
	getch();
}