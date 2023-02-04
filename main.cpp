#include <iostream>

#include "heap-overflow.h"
#include "stack-overflow.h"

using namespace std;

int main()
{
    cout << "Hello OS! \nI will test your limits!" << endl;
    cout << "Save your current work before running this!" << endl;

    heap_overflow();
    //stack_overflow();

    return 0;
}
