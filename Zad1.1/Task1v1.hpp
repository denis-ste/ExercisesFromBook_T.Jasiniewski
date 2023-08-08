

#ifndef Task1v1_hpp
#define Task1v1_hpp

#include <iostream>
#include "Functions.hpp"
#include "Valid.hpp"

class Task1v1 : public Functions {
private:
    void putInNumbers(Parameters &);
    void findBigestOne(Parameters &);
    void fillInNumber(Parameters &);
    void setMultitime(Parameters &);
    void sumWithoutBiggestNumer(Parameters &);
public:
    void solution ();
};

#endif

