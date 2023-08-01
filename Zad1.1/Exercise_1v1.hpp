

#ifndef Exercise_1v1_hpp
#define Exercise_1v1_hpp

#include <iostream>
#include "Exercise.hpp"

class Exercise_1v1 : public Exercise {
private:
     void textInfo(std::string text) override;
     void numberTextInfo(std::string text , int count) override;

    int setSize();
    int* getEmptyBoxForNumbers(int size);
    void putInNumbers(int* boxOfNumbers, int size);
    int searchForTheBigestOne(int* boxOfNumbers,int size);
    int sumRemaining(int* tablica,int theBigestOfNumbers, int size);
    void displaySumMultiTime(int sumRemaining, int multiTime);
    
public:
    
    void workIt();
};

#endif

