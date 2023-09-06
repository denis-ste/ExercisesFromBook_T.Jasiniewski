#ifndef Machine_hpp
#define Machine_hpp

#include "Library.hpp"

class Machine : public Display, public Validaction{
protected:
    void machineUI(Parameters& d); // machine user interface
    void machineManageMNE(Parameters&); // machine manage multi numbers expression
};
#endif
