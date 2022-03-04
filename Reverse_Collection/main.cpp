#include <iostream>

using namespace std;

string reverse(string collection) 
{
    string rev;

    for (int i = collection.length(); i >= 0; i--) {
        rev += collection[i];
    }
    return rev;
}

int main() 
{
    cout << reverse("testing") << endl;
    return 0;
}