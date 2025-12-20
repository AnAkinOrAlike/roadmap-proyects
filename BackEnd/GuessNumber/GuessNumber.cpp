#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int level;
    int number;
    int guess;
    char retry;
cout << ".oooo     oooo           o888" << endl;
cout << ". 88   88  88 ooooooooo8  888   ooooooo     ooooooo  oo ooo oooo   ooooooooo8" << endl;
cout << ".  88 888 88 888oooooo8   888 888     888 888     888 888 888 888 888oooooo8" << endl;
cout << ".   888 888  888          888 888         888     888 888 888 888 888" << endl;
cout << ".    8   8     88oooo888 o888o  88ooo888    88ooo88  o888o888o888o  88oooo888\n" << endl;
cout << ".  o8                    o8   oooo" << endl;
cout << ".o888oo ooooooo        o888oo  888ooooo   ooooooooo8" << endl;
cout << ". 888 888     888       888    888   888 888oooooo8" << endl;
cout << ". 888 888     888       888    888   888 888" << endl;
cout << ".  888o 88ooo88          888o o888o o888o  88oooo888\n" << endl;
cout << ".oooo   oooo                          oooo" << endl;
cout << ". 8888o  88 oooo  oooo  oo ooo oooo    888ooooo    ooooooooo8 oo oooooo" << endl;
cout << ". 88 888o88  888   888   888 888 888   888    888 888oooooo8   888    888" << endl;
cout << ". 88   8888  888   888   888 888 888   888    888 888          888" << endl;
cout << ".o88o    88   888o88 8o o888o888o888o o888ooo88     88oooo888 o888o\n" << endl;
cout << ". ooooooo8                                              o88" << endl;
cout << ".o888       oooo  oooo  ooooooooo8  oooooooo8  oooooooo8 oooo  oo oooooo     oooooooo8" << endl;
cout << ".888    oooo 888   888 888oooooo8  888ooooooo 888ooooooo  888   888   888  888    88o" << endl;
cout << ".888o    88  888   888 888                 888        888 888   888   888   888oo888o" << endl;
cout << ". 888ooo888   888o88 8o  88oooo888 88oooooo88 88oooooo88 o888o o888o o888o 888     888" << endl;
cout << ".                                                                          888ooo888" << endl;
cout << ".  ooooooo8                                       oo" << endl;
cout << ".o888    88   ooooooo   oo ooo oooo   ooooooooo8 8888" << endl;
cout << ".888    oooo  ooooo888   888 888 888 888oooooo8  8888" << endl;
cout << ".888o    88 888    888   888 888 888 888          88" << endl;
cout << ". 888ooo888  88ooo88 8o o888o888o888o  88oooo888  oo\n" << endl;
    cout <<"I'm thinking of a number between 1 and 100.\n"<<
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
            cout << "N.-" << i <<" Enter your guess: ";
            cin >> guess;
            if(guess == number){
                cout << "Congratulations!\nYou guessed the correct number in " << i << " attempts.\n" << endl;
                cout << "Do you want another round?\n" << i << " attempts.\n" << endl;
                cout << ". __  __     ______     ______           __   __     ______    " << endl;
                cout << "./\\ \\_\\ \\   /\\  ___\\   /\\  ___\\         /\\  -.\\ \\   /\\  __ \\   " << endl;
                cout << ".\\ \\____ \\  \\ \\   __\\  \\ \\___  \\   OR   \\ \\ \\-.  \\  \\ \\ \\/\\ \\    ?" << endl;
                cout << ". \\/\\_____\\  \\ \\_____\\  \\/\\_____\\        \\ \\_\\\\ \\_\\  \\ \\_____\\ " << endl;
                cout << ".  \\/_____/   \\/_____/   \\/_____/         \\/_/ \\/_/   \\/_____/ " << endl;
                cout << ".               ( Y )                             ( N )        " << endl;
                cout << "What's going to be?: ";
                cin >> retry;
                if (retry == 'Y') {
                    cout << "Another round!\n\n" << endl;
                    return main();
                }
                cout << "No?, well... Goodbye!" << endl;
                return 0;
            }else if (guess > number) {
                cout << "Incorrect! The number is less than " << guess << ".\n" << endl;
            } else if (guess < number) {
                cout << "Incorrect! The number is more than " << guess << ".\n" << endl;
            }
        }
        cout << "You've ran out of attempts, try again!. It was: " << number << ".\n\n" << endl;
        return main();
    case 2:
        cout << "Great! You have selected the Medium difficulty level.\nLet's start the game!" << endl;
        number = (rand() % 100) + 1; cout << number << endl;
        for (int i = 1; i <= 5; i++) {
            cout << "N.-" << i << " Enter your guess: ";
            cin >> guess;
            if (guess == number) {
                cout << "Congratulations!\nYou guessed the correct number in " << i << " attempts.\n" << endl;
                cout << "Do you want another round?\n" << i << " attempts.\n" << endl;
                cout << ". __  __     ______     ______           __   __     ______    " << endl;
                cout << "./\\ \\_\\ \\   /\\  ___\\   /\\  ___\\         /\\  -.\\ \\   /\\  __ \\   " << endl;
                cout << ".\\ \\____ \\  \\ \\   __\\  \\ \\___  \\   OR   \\ \\ \\-.  \\  \\ \\ \\/\\ \\    ?" << endl;
                cout << ". \\/\\_____\\  \\ \\_____\\  \\/\\_____\\        \\ \\_\\\\ \\_\\  \\ \\_____\\ " << endl;
                cout << ".  \\/_____/   \\/_____/   \\/_____/         \\/_/ \\/_/   \\/_____/ " << endl;
                cout << ".               ( Y )                             ( N )        " << endl;
                cout << "What's going to be?: ";
                cin >> retry;
                if (retry == 'Y') {
                    cout << "Another round!\n\n" << endl;
                    return main();
                }
                cout << "No?, well... Goodbye!" << endl;
                return 0;
            }
            else if (guess > number) {
                cout << "Incorrect! The number is less than " << guess << ".\n" << endl;
            }
            else if (guess < number) {
                cout << "Incorrect! The number is more than " << guess << ".\n" << endl;
            }
        }
        cout << "You've ran out of attempts, try again!. It was: " << number << ".\n\n" << endl;
        return main();

    case 3:
        cout << "Great! You have selected the Hard difficulty level.\nLet's start the game!" << endl;
        number = (rand() % 100) + 1; cout << number << endl;
        for (int i = 1; i <= 3; i++) {
            cout << "N.-" << i << " Enter your guess: ";
            cin >> guess;
            if (guess == number) {
                cout << "Congratulations!\nYou guessed the correct number in " << i << " attempts.\n" << endl;
                cout << "Do you want another round?\n" << i << " attempts.\n" << endl;
                cout << ". __  __     ______     ______           __   __     ______    " << endl;
                cout << "./\\ \\_\\ \\   /\\  ___\\   /\\  ___\\         /\\  -.\\ \\   /\\  __ \\   " << endl;
                cout << ".\\ \\____ \\  \\ \\   __\\  \\ \\___  \\   OR   \\ \\ \\-.  \\  \\ \\ \\/\\ \\    ?" << endl;
                cout << ". \\/\\_____\\  \\ \\_____\\  \\/\\_____\\        \\ \\_\\\\ \\_\\  \\ \\_____\\ " << endl;
                cout << ".  \\/_____/   \\/_____/   \\/_____/         \\/_/ \\/_/   \\/_____/ " << endl;
                cout << ".               ( Y )                             ( N )        " << endl;
                cout << "What's going to be?: ";
                cin >> retry;
                if (retry == 'Y') {
                    cout << "Another round!\n\n" << endl;
                    return main();
                }
                cout << "No?, well... Goodbye!" << endl;
                return 0;
            }
            else if (guess > number) {
                cout << "Incorrect! The number is less than " << guess << ".\n" << endl;
            }
            else if (guess < number) {
                cout << "Incorrect! The number is more than " << guess << ".\n" << endl;
            }
        }
        cout << "You've ran out of attempts, try again!. It was: " << number << ".\n\n" << endl;
        return main();

    default:
        cout << "That's not an option!, Let's start again\n\n\n" << endl;
        return main();
    }
    return 0;
}
