#include <iostream>
using namespace std;

int main()
{
	double provincea[7], provinceb[7], provincec [7];
	int size, i;
	
	size = 7;
	
	cout << "Enter all the temperatures (in degrees Celsius) recorded in province A for the " << endl;
	cout << "last seven days: " << endl;
	for(i = 0; i < size; i++)
	{
		cout << "Province A, Day" << " " << i+1 << ": ";
		cin >> provincea[i];
		cout << endl;
	}
	cout << endl;
	cout << "Temperatures (in degrees Celsius) recorded in province A for the last seven days" << endl;
	for(i = 0; i < size; i++)
	{
		cout << "Province A, Day" << " " << i+1 << " = " << provincea[i] << endl;
	}
	
	cout << endl;
	cout << "Enter all the temperatures (in degrees Celsius) recorded in province B for the " << endl;
	cout << "last seven days: " << endl;
	for(i = 0; i < size; i++)
	{
		cout << "Province B, Day" << " " << i+1 << ": ";
		cin >> provinceb[i];
		cout << endl;
	}
	cout << endl;
	cout << "Temperatures (in degrees Celsius) recorded in province B for the last seven days" << endl;
	for(i = 0; i < size; i++)
	{
		cout << "Province B, Day" << " " << i+1 << " = " << provinceb[i] << endl;
	}

	cout << endl;
	cout << "Enter all the temperatures (in degrees Celsius) recorded in province C for the " << endl;
	cout << "last seven days: " << endl;
	for(i = 0; i < size; i++)
	{
		cout << "Province C, Day" << " " << i+1 << ": ";
		cin >> provincec[i];
		cout << endl;
	}
	cout << endl;
	cout << "Temperatures (in degrees Celsius) recorded in province C for the last seven days" << endl;
	for(i = 0; i < size; i++)
	{
		cout << "Province C, Day" << " " << i+1 << " = " << provincec[i] << endl;
	}
	return 0;
}
