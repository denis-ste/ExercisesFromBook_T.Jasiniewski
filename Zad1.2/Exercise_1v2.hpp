

#ifndef Exercise_1v2_hpp
#define Exercise_1v2_hpp

#include <iostream>
#include <vector>
#include "Exercise.hpp"

class Exercise_1v2 : public Exercise {
private:
    void inline textInfo(std::string text) override;
    void setValidNumberAndCheckEven() ;
    
    void isEven(const int & number);
    
public:
    void workIt();
};

#endif
