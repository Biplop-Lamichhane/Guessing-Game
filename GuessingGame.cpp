///Author's Name: Biplop Lamichhane and Dipraj Shah
///Program Name: Guessing Game
///Program function: The program asks the user for a level of difficulty and generates a random number
///and asks teh user for a number 3, 5 or 7 times based on the level of difficulty and if the user matches the random number
///the user will win otherwise doesn't.
///
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main()
{

    cout << "\n\t\t\tWelcome to 'The Guessing Game'!!!"
         << endl;
    cout << "In this game, You have to guess a number between 1 and 100. "
            "You'll be given choices based on the "
            "level you choose. Good Luck!"
         << endl;

    while (true) {
        cout << "\nEnter the difficulty level: \n";
        cout << "1 as easy!\t";
        cout << "2 as medium!\t";
        cout << "3 as difficult!\t";
        cout << "0 to end the game!\n" << endl;

        // select the level of difficulty
        int difficultyChoice;
        cout << "Enter the number: ";
        cin >> difficultyChoice;

        // generating the secret number
        srand(time(0));
        int secretNumber = 1 + (rand() % 100);
        int playerChoice;

        // Difficulty Level:Easy
        if (difficultyChoice == 1) {
            cout << "\nYou have 10 choices for finding the "
                    "secret number between 1 and 100.";
            int choicesLeft = 10;
            for (int i = 1; i <= 10; i++) {
                cout << "\n\nEnter the number: ";
                cin >> playerChoice;

                if (playerChoice == secretNumber) {
                    cout << "Well played! You won the game, "
                         << playerChoice
                         << " is the perfect guess. It's the secret number." << endl;
                    cout << "\t\t\t Thanks for playing...."
                         << endl;
                    cout << "Play the game again with "
                            "us!!\n\n"
                         << endl;
                    break;
                }
                else {
                    cout << "Nope, " << playerChoice
                         << " is not the right number\n";
                    if (playerChoice > secretNumber) {
                        cout << "The secret number is "
                                "smaller than the number "
                                "you have chosen"
                             << endl;
                    }
                    else {
                        cout << "The secret number is "
                                "greater than the number "
                                "you have chosen"
                             << endl;
                    }
                    choicesLeft--;
                    if (choicesLeft != 0 ){
                        cout << choicesLeft << " choices left. Play Carefully!!!"
                             << endl;
                    }
                    if (choicesLeft == 0) {
                        cout << choicesLeft << " choices left. See you next time!!!"
                             << endl;
                        cout << "You couldn't find the "
                                "secret number, it was "
                             << secretNumber
                             << ", You lose!!\n\n";
                        cout << "Play the game again to "
                                "win!!!\n\n";
                    }
                }
            }
        }

        // Difficulty level : Medium
        else if (difficultyChoice == 2) {
            cout << "\nYou have 7 choices for finding the "
                    "secret number between 1 and 100.";
            int choicesLeft = 7;
            for (int i = 1; i <= 7; i++) {

                cout << "\n\nEnter the number: ";
                cin >> playerChoice;

                if (playerChoice == secretNumber) {
                    cout << "Well played! You won the game, "
                         << playerChoice
                         << " is the perfect guess. It's the secret number." << endl;
                    cout << "\t\t\t Thanks for playing...."
                         << endl;
                    cout << "Play the game again with "
                            "us!!\n\n"
                         << endl;
                    break;
                }
                else {
                    cout << "Nope, " << playerChoice
                         << " is not the right number\n";
                    if (playerChoice > secretNumber) {
                        cout << "The secret number is "
                                "smaller than the number "
                                "you have chosen"
                             << endl;
                    }
                    else {
                        cout << "The secret number is "
                                "greater than the number "
                                "you have chosen"
                             << endl;
                    }
                    choicesLeft--;
                    if (choicesLeft != 0 ){
                        cout << choicesLeft << " choices left. Play Carefully!!!"
                             << endl;
                    }
                    if (choicesLeft == 0) {
                        cout << choicesLeft << " choices left. See you next time!!!"
                             << endl;
                        cout << "You couldn't find the "
                                "secret number, it was "
                             << secretNumber
                             << ", You lose!!\n\n";
                        cout << "Play the game again to "
                                "win!!!\n\n";
                    }
                }
            }
        }
        // Difficulty level : Medium
        else if (difficultyChoice == 3) {
            cout << "\nYou have 5 choices for finding the "
                    "secret number between 1 and 100.";
            int choicesLeft = 5;
            for (int i = 1; i <= 5; i++) {

                cout << "\n\nEnter the number: ";
                cin >> playerChoice;

                if (playerChoice == secretNumber) {
                    cout << "Well played! You won the game, "
                         << playerChoice
                         << " is the perfect guess. It's the secret number." << endl;
                    cout << "\t\t\t Thanks for playing...."
                         << endl;
                    cout << "Play the game again with "
                            "us!!\n\n"
                         << endl;
                    break;
                }
                else {
                    cout << "Nope, " << playerChoice
                         << " is not the right number\n";
                    if (playerChoice > secretNumber) {
                        cout << "The secret number is "
                                "smaller than the number "
                                "you have chosen"
                             << endl;
                    }
                    else {
                        cout << "The secret number is "
                                "greater than the number "
                                "you have chosen"
                             << endl;
                    }
                    choicesLeft--;
                    if (choicesLeft != 0 ){
                        cout << choicesLeft << " choices left. Play Carefully!!!"
                             << endl;
                    }
                    if (choicesLeft == 0) {
                        cout << choicesLeft << " choices left. See you next time!!!"
                             << endl;
                        cout << "You couldn't find the "
                                "secret number, it was "
                             << secretNumber
                             << ", You lose!!\n\n";
                        cout << "Play the game again to "
                                "win!!!\n\n";
                    }
                }
            }
        }
        // To end the game
        else if (difficultyChoice == 0) {
            exit(0);
        }
        else {
            cout << "Wrong choice, Enter valid choice to "
                    "play the game! (0,1,2,3)"
                 << endl;
        }
    }
    return 0;
}
