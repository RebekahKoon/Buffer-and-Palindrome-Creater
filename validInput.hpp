/*********************************************************************
** Program name: lab7
** Author:       Rebekah Koon
** Date:         8/6/19
** Description:  Header file for validInput functions. One function 
**               determines if a user entered a number within the 
**               correct range. If not within range, asks user to 
**               reenter their input until a valid answer is selected.
**               Another function determines if a valid string was
**               entered and asks the user to reenter if not valid.
*********************************************************************/

#ifndef VALID_INPUT_HPP
#define VALID_INPUT_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <sstream>
#include <iomanip>

using std::atoi;
using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;
using std::istringstream;
using std::noskipws;
using std::fixed;
using std::showpoint;
using std::setprecision;

int validInput(int, int);
string validInput();

#endif