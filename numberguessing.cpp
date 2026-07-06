#include <iostream>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()

using namespace std;

int main()
{
    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;

    int guess;
    int attempts = 0;

    cout << "===================================" << endl;
    cout << "      NUMBER GUESSING GAME" << endl;
    cout << "===================================" << endl;
    cout << "I have chosen a number between 1 and 100." << endl;
    cout << "Try to guess it!" << endl;

    do
    {
        cout << "\nEnter your guess: ";
        cin >> guess;

        attempts++;

        if (guess > secretNumber)
        {
            cout << "Too High! Try Again." << endl;
        }
        else if (guess < secretNumber)
        {
            cout << "Too Low! Try Again." << endl;
        }
        else
        {
            cout << "\nCongratulations!" << endl;
            cout << "You guessed the correct number." << endl;
            cout << "Total Attempts: " << attempts << endl;
        }

    } while (guess != secretNumber);

    return 0;
}
