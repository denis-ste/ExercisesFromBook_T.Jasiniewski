#ifndef Display_hpp
#define Display_hpp

#include "Library.hpp"

class Display : public Information{
protected:
    void displayBigestOne(const Parameters&);
    void displaySumWithoutBiggestNumer(const Parameters&);
    void displayMultiTimeSumWithoutBiggestNumer(const Parameters&);
};
#endif
