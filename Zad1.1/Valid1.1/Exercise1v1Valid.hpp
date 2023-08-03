

#ifndef Exercise1v1Valid_hpp
#define Exercise1v1Valid_hpp

#include <iostream>
#include "TaskParameters.hpp"
#include "Valid.hpp"

class Exercise1v1Valid : public Valid {
private:
    
protected:
    void checkRecurNumber(TaskParameters & taskParameters ,const int & i);
};

#endif /* Exercise1v1Valid_hpp */
