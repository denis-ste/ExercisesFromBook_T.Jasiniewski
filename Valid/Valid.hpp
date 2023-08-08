

#ifndef Valid_hpp
#define Valid_hpp

#include <iostream>
#include "Parameters.hpp"


class Valid {
protected:
    void containsChar(Parameters& taskParameters);
    void containsDuplicate(std::vector<unsigned int>& nums);
    void isContainerFull(Parameters & param);
    
    struct DuplicateValue {
        std::string message = "--- wprowadzone liczby dublują się, wprowadź zestaw liczb bez powtorzeń : ";
        
        inline void info(){
            std::cout << message;
        }
    };
    struct WrongValue {
        std::string message = "--- wprowadzono niedozwolony /-e znak /-i, wprowadz zestaw liczb poprawnie : ";
        
        inline void info(){
            std::cout << message;
        }
    };
    struct NotFull {
        std::string message = "--- wprowadzono zbyt małą liczbę danych.\n ";
        
        inline void info(){
            std::cout << message;
        }
    };
};


#endif /* Valid_hpp */
