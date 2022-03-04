#include <iostream>

using namespace std;

bool checkArithmetic(string numbers) {

    int arithmeticStep = 0;

    for (int i = 1; i < numbers.length(); i++) {

        if (numbers[i] - numbers[i - 1] == 2) {
            arithmeticStep++;
        }
    }

    return (arithmeticStep == numbers.length() - 1);
}


int main()
{
    cout << checkArithmetic({ 0,2,4,6,8,10,12,14,16 }) << endl;

	return 0;
}
