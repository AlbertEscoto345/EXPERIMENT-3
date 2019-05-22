#include <iostream>
using namespace std;

int main()
{
	int numlist[10]; 

	int size, i, maxi, mini, largenum, smallnum;
	
	size = 10;
	cout << "Enter 10 integers: " << endl;
	for(i = 0; i < size; i++)
	{
		cin >> numlist[i];
	}
	cout << endl;	
	
	maxi = 0;
	for(i = 0; i < size; i++)
	{
		if(numlist[maxi] < numlist[i])
		maxi = i;
	}
	largenum = numlist[maxi];
	cout << endl;
	cout << "Largest integer: " << largenum << endl;
	
	mini = 0;
	for(i = 0; i < size; i++)
	{
		if(numlist[mini] > numlist[i])
		mini = i;
	}
	smallnum = numlist[mini];
	cout << endl;
	cout << "Smallest integer: " << smallnum;
	
	int sumtotal = 0;
	for(i = 0; i < size; i++)
	{
		sumtotal = sumtotal + numlist[i];
	}
	cout << endl;
	cout << endl;
	cout << "Total: " << sumtotal << endl;
	
	int avg;
	avg = sumtotal / 10;
	cout << endl;
	cout << "Average: " << avg << endl;
	
	return 0;
}
