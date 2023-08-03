

#ifndef Exercise1v1_hpp
#define Exercise1v1_hpp

#include <iostream>
#include "InheritedFunctions.hpp"


class Exercise1v1 : public InheritedFunctions {
private:

    
    void putInNumbers(TaskParameters boxOfNumbersAndSize);
    int findTheBigestOne(int* boxOfNumbers,int size);
    int sumRemaining(int* tablica,int theBigestOfNumbers, int size);
    void displaySumMultiTime(int sumRemaining, int multiTime);
    
public:
    
    void workIt();
};

#endif

