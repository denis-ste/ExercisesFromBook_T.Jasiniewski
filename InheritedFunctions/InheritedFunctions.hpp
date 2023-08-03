

#ifndef Exercise_hpp
#define Exercise_hpp

#include <iostream>
#include "TaskParameters.hpp"

class InheritedFunctions {
    
protected:
    
    inline void entranceInfo() {
        std::cout << "WPROWADZ DANE";
    };
    
    int setSize();
    int* getBoxNumbers(const int & size);
    
    struct WrongInputValue {
        std::string message;
    };
    struct WrongFeedbackValue {
        std::string message;
    };
    
};

#endif /* Exercise_hpp */
