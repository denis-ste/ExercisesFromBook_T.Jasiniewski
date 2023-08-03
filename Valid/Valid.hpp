

#ifndef Valid_hpp
#define Valid_hpp

#include <iostream>

class Valid {
protected:
    
    struct WrongInputValue {
        std::string duplicateNumberMessage = "--- wprowadzona liczba powtorzyła się, wprowadź inną : ";
    };
    struct WrongFeedbackValue {
        std::string message;
    };
    
};

#endif /* Valid_hpp */
