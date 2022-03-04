#include <iostream>

using namespace std;

bool isEven(int num) 
{
	return num % 2 != 0;
}

int main()
{
	cout << isEven(7) << endl;
	return 0;
}
