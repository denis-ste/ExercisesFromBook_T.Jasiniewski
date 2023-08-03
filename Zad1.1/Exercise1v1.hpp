

#ifndef Exercise1v1_hpp
#define Exercise1v1_hpp

#include <iostream>
#include "InheritedFunctions.hpp"
#include "Exercise1v1Valid.hpp"

class Exercise1v1 : public InheritedFunctions, public Exercise1v1Valid {
private:
    void putInNumbers(TaskParameters &);
    int findBigestOne(TaskParameters &);
    void setMultitime(TaskParameters &);
    int sumWithoutBiggestNumer(TaskParameters &);
    void sumMultiTimeDisplay(const TaskParameters &);
public:
    void solution ();
};

#endif

