#include <iostream>

using namespace std;

int linearSearch(string numbers, int toSearchFor) 
{
    for (int i = 0; i < numbers.length(); i++) {
        if (numbers[i] == toSearchFor) {
            return i;
        }
    }
    return -1;
}

int main() 
{
    cout << linearSearch({ 5, 65, 48 , 123 }, 48) << endl;

    return 0;
}