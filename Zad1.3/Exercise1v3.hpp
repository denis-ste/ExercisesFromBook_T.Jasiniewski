
#ifndef Exercise1v3_hpp
#define Exercise1v3_hpp

#include <iostream>
#include "Functions.hpp"

class Exercise1v3 : public Functions {
private:
    
    void settingValidNumber();
    void checkDivisibility(int number);
    bool divisibilityByThreeAndFive(int number);
    bool divisibilityByThreeOrFive(int number);
    
public:
    
    void workIt();
};




#endif /* Exercise_1v3_hpp */
