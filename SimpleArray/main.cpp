#include <iostream>
using namespace std;

int main()
{
	int num[5]; //5 is the number of spaces available in the variable
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter a number for space " << i + 1 << ": ";
		cin >> num[i];
	}
	for (int i = 0; i < 5; i++)
	{
		cout << "#" << i+1 << " = " << num[i] << endl;
	}
	system("pause");
	return 0;
}