#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int level;
    int number;
    int guess;
    cout << "Welcome to the Number Guessing Game!\n"<<
        "I'm thinking of a number between 1 and 100.\n"<<
        "You have 5 chances to guess the correct number."<< endl;
    cout << "\nPlease select the difficulty level:\n"<<
        "1. Easy (10 chances)\n"<<
        "2. Medium (5 chances)\n"<<
        "3. Hard (3 chances)\n"<< 
        "\nEnter your choice: ";
    cin >> level;
    switch (level) {
    case 1:
        cout << "Great! You have selected the Easy difficulty level.\nLet's start the game!" << endl;
        number = (rand() % 100) + 1; cout << number << endl;
        for (int i = 1; i <= 10; i++) {
            cout << "N.-" << i <<" Enter your guess :" << endl;
            cin >> guess;
            if(guess == number){
               cout << "Congratulations!\nYou guessed the correct number in "<< i <<" attempts.\n" << endl;
               return 0;
            }else if (guess > number) {
                cout << "Incorrect! The number is less than " << guess << ".\n" << endl;
            } else if (guess < number) {
                cout << "Incorrect! The number is more than " << guess << ".\n" << endl;
            }
        }
        cout << "You've ran out of attempts, try again!. It was: " << number << ".\n\n" << endl;
        return main();
        break;
    case 2:
        cout << "Great! You have selected the Medium difficulty level.\nLet's start the game!" << endl;
        break;
    case 3:
        cout << "Great! You have selected the Hard difficulty level.\nLet's start the game!" << endl;
        break;
    default:
        cout << "That's not an option!, Let's start again\n\n\n" << endl;
        return main();
    }
    return 0;
}
