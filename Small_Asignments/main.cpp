#include <iostream>

using namespace std;

int abs(int a, int b) {

    int abs = a - b;
    return abs >= 0 ? abs : -abs;
}

int main() 
{

    cout << abs(-6, 4) << endl;

	return 0;
}