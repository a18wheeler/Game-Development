#include <iostream>
#include <string>
using namespace std;

void PrintIntro()
{
    // introduce the game
    constexpr int WORLD_LENGTH = 5;
    cout << "Welcome to Bulls and Cows, a fun word game.\n";
    cout << "Can you guess the " << WORLD_LENGTH << " letter isogram I'm thinking of?\n";
    return;
}

int main()
{
    

    // get a guess from the player
    string Guess;
    cout << "===================\n";
    cout << "Enter your guess: ";
    getline(cin, Guess);
    cout << "This was your guess: " << Guess << endl;

    

    // repeat the guess back to them


    return 0;
}
