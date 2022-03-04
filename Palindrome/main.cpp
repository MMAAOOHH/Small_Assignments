#include <iostream>

using namespace std;


bool isPalindrome(string s) 
{
    string reversed;

    for (int i = s.length(); i >= 0; i--) {
        reversed += s[i];
    }
    return (s == reversed);
}

int main()
{
    cout << isPalindrome("test") << endl;
    cout << isPalindrome("olasalo") << endl;
	return 0;
}