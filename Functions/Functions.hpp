

#ifndef Functions_hpp
#define Functions_hpp

#include <iostream>
#include "Parameters.hpp"
#include "Info.hpp"
#include "Valid.hpp"

class Functions : public Info, public Valid {
protected:
    void setSize(Parameters & size);
    void sortIt(Parameters & nums);
};

#endif /* Functions_hpp */
