/*
Why is main an int?
    This is because the return acts an exit code.
Preprocessor Directive
    - An instruction to the compiler [to include a library].
    - # represents this
Compiler
    - cl
    - Syntax is "cl [filename.cpp]"
    - w/out warnings "cl [file.cpp] /EHsc"
Namespace
    - Think of it like a lastname
    - Allows us to avoid naming conflicts
    - Scope Operator(::) allows us to access a namescape
Variables
    - Store data
    - When you declare a var, you reserve space in memory
    - "A value that is subject to change"
Expression Statements
    - A line that ends with a semicolon
Input/Ooutput
    - "<<" The Insertion Operator
    - ">>" The Extraction Operator
    - cin/cout = character in/out
Std::Stuff
    - cin.clear() // clears any errors
    - cin.ignore() // discards the buffer
 */

#include <iostream>
#include <ctime>

void PrintIntroduction()
{
    // explain the story
    std::cout << "You are an explorer searching for a lost Mayan treasure.\n"
              << "You have arrived at a temple door with 3 numbered dials.\n"
              << "You have deciphered a message on the door that reads, \n"
              << "\"You must find the correct codes to continue.\n"
              << "Each door will be harder than the last!\"\n";

    std::cout << " _____________________________________________\n"
              << "|.'',                                     ,''.|\n"
              << "|.'.'',                                 ,''.'.|\n"
              << "|.'.'.'',                             ,''.'.'.|\n"
              << "|.'.'.'.'',                         ,''.'.'.'.|\n"
              << "|.'.'.'.'.|                         |.'.'.'.'.|\n"
              << "|.'.'.'.'.|===;                 ;===|.'.'.'.'.|\n"
              << "|.'.'.'.'.|:::|',             ,'|:::|.'.'.'.'.|\n"
              << "|.'.'.'.'.|---|'.|, _______ ,|.'|---|.'.'.'.'.|\n"
              << "|.'.'.'.'.|:::|'.|'|???????|'|.'|:::|.'.'.'.'.|\n"
              << "|,',',',',|---|',|'|???????|'|,'|---|,',',',',|\n"
              << "|.'.'.'.'.|:::|'.|'|???????|'|.'|:::|.'.'.'.'.|\n"
              << "|.'.'.'.'.|---|','   /%%%\\   ','|---|.'.'.'.'.|\n"
              << "|.'.'.'.'.|===:'    /%%%%%\\    ':===|.'.'.'.'.|\n"
              << "|.'.'.'.'.|%%%%%%%%%%%%%%%%%%%%%%%%%|.'.'.'.'.|\n"
              << "|.'.'.'.','       /%%%%%%%%%\\       ','.'.'.'.|\n"
              << "|.'.'.','        /%%%%%%%%%%%\\        ','.'.'.|\n"
              << "|.'.','         /%%%%%%%%%%%%%\\         ','.'.|\n"
              << "|.','          /%%%%%%%%%%%%%%%\\          ','.|\n"
              << "|;____________/%%%%%%%%%%%%%%%%%\\____________;|\n\n";
}

bool PlayGame(int Difficulty)
{
    // Print Level
    std::cout << "You have opened " << Difficulty << " doors.\n";

    

    // initialize the three numbers
    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;

    // get the product and sum
    const int CodeProduct = CodeA * CodeB * CodeC;
    const int CodeSum = CodeA + CodeB + CodeC;

    // display product and sum
    std::cout << "***********************************\n";
    std::cout << "There are 3 numbers in the code.\n";
    std::cout << "The sum of the numbers is " << CodeSum << "\n";
    std::cout << "The product of the numbers is " << CodeProduct << "\n";
    std::cout << "***********************************\n";

    // store player guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // check if player is correct
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\nNice! On to the next door...\n";
        return true;
    }
    else
    {
        std::cout << "\nNope. Try again.\n";
        return false;
    }
}

int main()
{
    // initialize the seed of rand
    srand(time(NULL));

    int LevelDifficulty = 1;
    const int MaxLevel = 5;

    PrintIntroduction();
    while (LevelDifficulty <= MaxLevel) // loops until finished
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear();   // clears any errors
        std::cin.ignore();  // discards the buffer
        //System("PAUSE");

        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }    
    }
    std::cout << "You got the treasure! Nice job boy!\n";

    return 0;
}