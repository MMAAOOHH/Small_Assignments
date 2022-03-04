#include <iostream>

using namespace std;

float celsiusToFahrenheit(float celsius) {

    float fahrenheit = celsius * 9 / 5 + 32;
    return fahrenheit;
}


int main()
{
    cout << celsiusToFahrenheit(36.f) << endl;
	return 0;
}