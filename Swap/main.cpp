#include <iostream>

using namespace std;

void swapping(int a, int b) {

    cout << "Numbers to swap:" << a << " " << b << endl;
    cout << "1.By reference, 2.using STL, 3.By pointers" << endl;

    int input = 0;

    while (input < 1 || input > 3) {
        cin >> input;
    }

    switch (input) {
    case 1: {

        int temp = a;
        a = b;
        b = temp;
        break;
    }
    case 2: {

        swap(a, b);
        break;
    }

    case 3: {

        int* aPtr = &a;
        int* bPtr = &b;

        //TODO: ISSUE, assigning b to same as a, do I need a temp here as well?
        a = *bPtr;
        b = *aPtr;

        break;
    }
    }
    cout << "Swapped:" << a << " " << b << endl;
}

int main() 
{
    swapping(45, 99);

    return 0;
}