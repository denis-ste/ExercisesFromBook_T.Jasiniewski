

#ifndef Exercise1v2_hpp
#define Exercise1v2_hpp

#include <iostream>
#include <vector>
#include "Functions.hpp"

class Exercise1v2 : public Functions {
private:
    //void inline textInfo(std::string text) override;
    void setValidNumberAndCheckEven() ;
    
    void isEven(const int & number);
    
public:
    void workIt();
};

#endif
