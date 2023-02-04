#ifndef STACKOVERFLOW_H
#define STACKOVERFLOW_H

#include <iostream>

// global var is needed for recursive function call

int counter = 0;

// counter calls himself recursively
void stack_overflow()
{
    counter++;
    std::cout << "Counter +1" << std::endl;
    stack_overflow();
}

#endif // STACKOVERFLOW_H
