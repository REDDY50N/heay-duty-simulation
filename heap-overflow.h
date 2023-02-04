#ifndef HEAPOVERFLOW_H
#define HEAPOVERFLOW_H

#include <iostream>

const int integersPerKilobyte = 1024 / sizeof(int);

void heap_overflow(){
    std::cout << "Be aware should cause a heap overflow after a while!" << std::endl;
    std::cout << "Allocate 1KB!" << std::endl;
    while(true)
    {
        // just allocate memory on heap (Kilobyte by kilobyte)
        int *arr_1KB = new int[integersPerKilobyte];
        std::cout << "Allocate another Kilobyte!" << std::endl;
    }
}


#endif // HEAPOVERFLOW_H
