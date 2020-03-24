/*************************************************************************
** Program name: lab7
** Author:       Rebekah Koon
** Date:         8/6/19
** Description:  Source file for the palindrome function, which takes a
**               string and uses it to create a palindrome.
*************************************************************************/

#include "palindrome.hpp"


/*************************************************************************
** Description: Void function palindrome takes in a string as a parameter.
**              Creates a stack containing the characters in the string 
**              and uses the stack to create a palindrome.
**              Source: http://www.cplusplus.com/forum/beginner/160537/
*************************************************************************/
void palindrome(string userString)
{
    stack<char> stringStack;

    //Putting each character in string into the stack
    for (int i = 0; i < userString.length(); i++)
    {
        stringStack.push(userString.at(i));
    }

    cout << "The palindrome of " << userString << " is:" << endl;

    //Printing user's inputted string
    cout << userString;

    //Printing each character in string in reverse on same line as userString
    while(!(stringStack.empty()))
    {
        //Finding last character in the string
        cout << stringStack.top();

        //Removing last character in string from stack to get next character
        stringStack.pop();
    }

    cout << endl << endl;
}