/***********************************************************************
** Program name: lab7
** Author:       Rebekah Koon
** Date:         8/6/19
** Description:  Implementation file for the Menu class, which has 
**               functions to start the program, have the user select an
**               option to perform, and make either a buffer or 
**               palindrome based on the user's choice they selected.
***********************************************************************/


#include "Menu.hpp"


/***********************************************************************
** Description: Member function chooseOption asks the user what choice 
**              they want to perform. Returns the user's choice.
***********************************************************************/
int Menu::chooseOption()
{
    int choice;
    const int CHOICE_MIN = 1,
              CHOICE_MAX = 3;

    cout << "What would you like to do?" << endl;
    cout << "1. Make a buffer" << endl;
    cout << "2. Make a palindrome" << endl;
    cout << "3. Quit" << endl << endl;

    cout << "Enter your choice: ";
    choice = validInput(CHOICE_MIN, CHOICE_MAX);

    return choice;
}


/***********************************************************************
** Description: Void member function startProgram calls makeBuffer or
**              makePalindrome depending on the user's choice if they 
**              did not decide to quit the program. The user can either
**              choose an option again or quit the program.
***********************************************************************/
void Menu::startProgram()
{
    int choice;

    choice = chooseOption();

    //Choosing to make either a buffer or palindrome
    while (choice != QUIT)
    {
        switch (choice)
        {
        case BUFFER:
            makeBuffer();
            break;
        
        case PALINDROME:
            makePalindrome();
            break;
        }

        //User choose what they want to perform next
        choice = chooseOption();
    }

    //If user decides to quit program
    cout << "Goodbye!" << endl;
}


/***********************************************************************
** Description: Void member function makeBuffer asks user to input the
**              number of rounds that will be simulated for the buffer, 
**              percent chance of adding a random integer to the buffer,
**              and percent chance of removing the top integer from the
**              buffer. Calls simulation in the BufferSimulation class
**              to simulate the buffer using the user's input.
***********************************************************************/
void Menu::makeBuffer()
{
    BufferSimulation buffer;

    int rounds,
        chanceToAppend,
        chanceToRemove;

    const int MIN_ROUNDS = 1,
              MAX_ROUNDS = 1000,
              MIN_PERCENT = 1,
              MAX_PERCENT = 100;

    //Getting number of rounds for simulation from user
    cout << "How many rounds should be simulated?" << endl;
    cout << "Enter an integer from " << MIN_ROUNDS << " to "
         << MAX_ROUNDS << ": ";
    rounds = validInput(MIN_ROUNDS, MAX_ROUNDS);

    //Getting percent chance of adding random integer to buffer from user
    cout << endl << "Enter an integer from " << MIN_PERCENT << " to "
         << MAX_PERCENT << " for the percent chance" << endl
         << "to add a random integer to the end of the buffer: ";
    chanceToAppend = validInput(MIN_PERCENT, MAX_PERCENT);

    //Getting percent chance of removing top integer of buffer from user
    cout << endl << "Enter an integer from " << MIN_PERCENT << " to "
         << MAX_PERCENT << " for the percent chance" << endl
         << "to remove the integer at the front of the buffer: ";
    chanceToRemove = validInput(MIN_PERCENT, MAX_PERCENT);

    cout << endl;

    //Starting buffer simulation
    buffer.simulation(rounds, chanceToAppend, chanceToRemove);
}


/***********************************************************************
** Description: Void member function makePalindrome asks the user to 
**              enter a string that will be made into a palindrome. 
**              Calls palindrome function to create the palindrome.
***********************************************************************/
void Menu::makePalindrome()
{
    string userInput;

    cout << "What string do you want to make a palindrome?" << endl;
    cout << "Enter a string: ";
    userInput = validInput();

    //Creating a palindrome from user's string
    palindrome(userInput);
}