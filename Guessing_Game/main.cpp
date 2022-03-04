#include <iostream>

using namespace std;

void guessingGame() {

    //TODO: learn how to and add <random>
    int numberToGuess = rand() % 20;
    int guesses = 0;
    int playerInput;

    do {
        cout << "Guess the secret number!" << endl;
        cin >> playerInput;
        guesses++;
    } while (playerInput != numberToGuess);

    cout << playerInput << " is correct! Amount of tries: " << guesses;
}

int main()
{
    guessingGame();
    return 0;
}