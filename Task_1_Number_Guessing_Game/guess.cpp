#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    srand(static_cast<unsigned int>(time(nullptr)));
    int num = rand() % 100 + 1;
    int userguess;
    int attempts = 0;
    cout << "Welcome to Guess the Number Game!" << endl;
    do {
        cout << "Enter your guess (between 1 and 100): ";
        cin >> userguess;
        
        if (userguess == num) {
            cout << "Congratulations! You guessed the right number in " << attempts << " attempts." << endl;
        } else if (userguess < num) {
            cout << "That's lower than the number. Try again." << endl;
        } else {
            cout << "That's higher than the number. Try again." << endl;
        }
        attempts++;
    } while (userguess != num);

    return 0;
}

