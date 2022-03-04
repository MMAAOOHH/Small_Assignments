#include <iostream>

using namespace std;

int lastDigit(int num) 
{
    return num % 10;
}

int main() 
{
    cout << lastDigit(1337) << endl;
    return 0;
}
