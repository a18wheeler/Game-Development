// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();

    // Welcomeing the Player
    PrintLine(TEXT("Welcome to the Bull Cows game!"));

    // Setting up the game
    SetupGame();
    PrintLine(TEXT("Guess the 4 letter word!")); // Magic Number, Remove!
    PrintLine(TEXT("Press Enter to continue..."));

    // Print "Guess the $number.." prompt using HiddenWord length
}

void UBullCowCartridge::OnInput(const FString &Input) // When the player hits enter
{
    ClearScreen();

    if (Input == HiddenWord)
    {
        PrintLine(TEXT("You're right! The word is " + HiddenWord + "!"));
    }
    else
    {
        PrintLine(TEXT("Sorry, that isn't right"));
    }

    // Check if Isogram
    // Check if right number of characters

    // Remove a life

    // If lives == 0, print fail screen, show answer, prompt to play again
    // If not isogram, print that it must be
    // If wrong num of chars, print as such
    // Print lives
    // Play Again or Quit
}

void UBullCowCartridge::SetupGame()
{
    HiddenWord = TEXT("soup");
    Lives = 4; // Set Lives Dependent of letters in HiddenWord
}
