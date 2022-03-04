#include <iostream>

using namespace std;

int setBit(int number, int bit)
{
    int temp = 0b0000001 << (bit - 1);
    return number ^ temp;
}

bool getBit(int number, int bit)
{
    int temp = 0b0000001 << (bit - 1);
    return number & temp;
}

int main() 
{
    cout << setBit(12, 1) << endl;
    cout << getBit(12, 1) << endl;

    return 0;
}