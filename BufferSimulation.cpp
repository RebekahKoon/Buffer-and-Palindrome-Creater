/***********************************************************************
** Program name: lab7
** Author:       Rebekah Koon
** Date:         8/6/19
** Description:  Implementation file for the BufferSimulation class. 
**               Contains one function to create the buffer simulation 
**               and another to print the buffer after each round.
***********************************************************************/


#include "BufferSimulation.hpp"


/***********************************************************************
** Description: Void member function simulation takes in the number of
**              rounds for the simulation, the percent chance of 
**              appending an integer to the buffer, and the percent 
**              chance of removing the first integer in the buffer as
**              parameters. For the selected number of rounds, a
**              randomly generated integer has the append percent chance
**              of being added to the buffer and the top integer in the
**              buffer has the remove percent chance of being removed. 
**              The numbers in the buffer, buffer length, and average
**              buffer length is then printed.
**              Source: Gaddis textbook, 18.6
***********************************************************************/
void BufferSimulation::simulation(int numRounds, int appendPercent, 
                                  int removePercent)
{
    int N,
        appendChance,
        removeChance,
        round = 0;

    //Initial average length of buffer is 0 since no values in buffer yet
    double avgLength = 0;

    const int MAX_NUM = 1000,
              MAX_PERCENT = 100;

    queue<int> buffer;

    //Determining if a number will be added/removed for each round
    for (int i = 0; i < numRounds; i++)
    {
        round++;
        cout << "Round " << round << ":" << endl;

        //Finding integer N that will potentially be added to buffer
        N = rand() % MAX_NUM + 1;
        cout << "Number generated: " << N << endl;

        //Used to determine if an integer will be added to buffer
        appendChance = rand() % MAX_PERCENT + 1;

        cout << appendPercent << "% chance " << N << " will be added." << endl;
        cout << N << " added if " << appendChance 
             << " is less than/equal to " << appendPercent << "." << endl;

        //Determining if N will be added based on the append percentage
        if (appendChance <= appendPercent)
        {
            cout << "Adding " << N << " to the buffer." << endl << endl;
            buffer.push(N);
        }

        //Integer was not added
        else
        {
            cout << N << " was not added to the buffer." << endl << endl;
        }

        //Used to determine if front integer in buffer will be removed
        removeChance = rand() % MAX_PERCENT + 1;

        //Cannot remove integers from empty buffer
        if (buffer.empty())
        {
            cout << "No integers are available to remove." << endl << endl;
        }

        //Determining if front value is removed based on remove percentage
        else
        {
            cout << removePercent << "% chance of removing front integer." 
                << endl;

            cout << buffer.front() << " removed if " << removeChance 
                 << " is less than/equal to " << removePercent << "." << endl;
            
            //Removing front integer
            if (removeChance <= removePercent)
            {
                cout << "Removing " << buffer.front() << endl << endl;
                buffer.pop();
            }

            //Integer at front not removed
            else
            {
                cout << buffer.front() << " was not removed." << endl << endl;
            }
        }

        //Printing buffer
        printBuffer(buffer);

        cout << fixed << showpoint << setprecision(2);
        cout << "Current buffer length: " << buffer.size() 
             << endl << endl;

        //Finding average buffer length
        avgLength = ((avgLength * (round - 1)) + buffer.size()) / round;
        cout << "Average buffer length: " << avgLength << endl << endl << endl;
    }
}


/***********************************************************************
** Description: Void member function printBuffer takes in a queue 
**              representing the buffer as a parameter. Prints the 
**              values within the buffer.
**              Source: https://stackoverflow.com/questions/22280318/
**                      how-do-i-print-a-queue
***********************************************************************/
void BufferSimulation::printBuffer(queue<int> bufferIn)
{
    //No values printed when buffer is empty
    if (bufferIn.empty())
    {
        cout << "There are no values in the buffer." << endl;
    }

    //Printing values in buffer if not empty
    else
    {
        cout << "Values in the buffer:" << endl;
        while (!(bufferIn.empty()))
        {
            cout << bufferIn.front() << endl;
            bufferIn.pop();
        }

        cout << endl;
    }
}