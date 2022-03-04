#include <iostream>
using namespace std;

void swapBitwise(int a, int b)
{
    cout << "To swap: " << a << ", " << b << endl;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << "Swapped: " << a << ", " << b << endl;
}

int main()
{
    swapBitwise(22, 44);
    return 0;
}