/*************************************************************************
** Program name: lab7
** Author:       Rebekah Koon
** Date:         8/6/19
** Description:  This program calls the Menu class to give the user the 
**               option to either create a buffer simulation or a 
**               palindrome. If they select to create a buffer simulation,
**               then a user-specified number of rounds will be played 
**               where there is a percent chance that a random integer
**               will be selected to enter the buffer as well as a percent
**               chance to remove the top integer in the buffer. These two 
**               percentages are decided by the user. If creating a 
**               palindrome is selected, then the user enters a string 
**               that will be used to create a palindrome. The palindrome 
**               is then printed. The user can decide if they want to make
**               a buffer simulation or palindrome again.
*************************************************************************/


#include <cstdlib>
#include <ctime>

#include "Menu.hpp"

int main()
{
    unsigned seed;
    seed = time(0);
    srand(seed);

    Menu program;

    //Starting the program to make either buffer or palindrome
    program.startProgram();

    return 0;
}