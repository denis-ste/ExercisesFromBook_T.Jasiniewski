#ifndef Parameters_hpp
#define Parameters_hpp

#include "Library.hpp"

class Parameters{
public:
    //Align ASCII
    const int CHAR_TO_INT_ALIGN_ASCII = 48;
    //Operaction
    std::string text;
    std::vector<unsigned int> numbersBox;
    //Validation
    bool canBeNumberLoad = true;
    bool enterDataAgain = false;
    bool statusValid = true;
    //Result
    int biggestNumber = 0;
    int totalSum = 0;
    int multiTime = 0;
    int num = 0;
};
#endif
