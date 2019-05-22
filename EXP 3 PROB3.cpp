#include <iostream>
using namespace std;

int main()
{
char phrase[] = "UST 408 years";
int i;

cout << phrase << endl;
cout << endl;
cout << "The array size is 13." << endl;
cout << endl;
cout << "Reversed: ";

for(i = 12; i >= 0; i--)
{
		cout << phrase[i];
}

return 0;
}
