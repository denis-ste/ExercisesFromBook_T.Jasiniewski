#ifndef Validaction_hpp
#define Validaction_hpp

#include "Library.hpp"

class Validaction : public DetailedValidation, public Tool, public UserData {
protected:
    void valid(Parameters&);
    bool validCheck(Parameters&);
    bool validStatus(const Parameters& data);
};
#endif
