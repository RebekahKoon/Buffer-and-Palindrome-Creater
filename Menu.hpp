/***********************************************************************
** Program name: lab7
** Author:       Rebekah Koon
** Date:         8/6/19
** Description:  Header file for the Menu class, which has functions to
**               start the program, have the user select an option to
**               perform, and make either a buffer or palindrome based
**               on the user's choice they selected.
***********************************************************************/


#ifndef MENU_HPP
#define MENU_HPP

#include "BufferSimulation.hpp"
#include "palindrome.hpp"
#include "validInput.hpp"

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

//Used to determine user's choice of what to perform
enum UserOption {BUFFER = 1, PALINDROME, QUIT};

class Menu
{
    public:
        int chooseOption();
        void startProgram();

        void makeBuffer();
        void makePalindrome();
};

#endif