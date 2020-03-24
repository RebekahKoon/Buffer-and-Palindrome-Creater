/***********************************************************************
** Program name: lab7
** Author:       Rebekah Koon
** Date:         8/6/19
** Description:  Header file for the BufferSimulation class. Contains
**               one function to create the buffer simulation and 
**               another to print the buffer after each round.
***********************************************************************/

#ifndef QUEUE_HPP
#define QUEUE_HPP

#include <iostream>
#include <queue>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using std::cout;
using std::endl;
using std::queue;
using std::fixed;
using std::showpoint;
using std::setprecision;

class BufferSimulation
{
    public:
        void simulation(int, int, int);
        void printBuffer(queue<int>);
};

#endif