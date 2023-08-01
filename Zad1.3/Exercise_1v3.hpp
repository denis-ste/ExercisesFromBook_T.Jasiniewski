
#ifndef Exercise_1v3_hpp
#define Exercise_1v3_hpp

#include <iostream>
#include "Exercise.hpp"

class Exercise_1v3 : public Exercise {
private:
    
    void settingValidNumber();
    void checkDivisibility(int number);
    bool divisibilityByThreeAndFive(int number);
    bool divisibilityByThreeOrFive(int number);
    
public:
    
    void workIt();
};




#endif /* Exercise_1v3_hpp */
