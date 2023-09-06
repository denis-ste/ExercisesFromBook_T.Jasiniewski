#ifndef DetailedValidation_hpp
#define DetailedValidation_hpp

#include "Library.hpp"

class DetailedValidation : public ErrorFormat  {
public:
    void setValidDEFAULT(Parameters&);
    void checkValidMNE(Parameters&);
    bool checkStatusValid(const Parameters& d);
    void okStatusValid(Parameters& d);
    void checkValidDuplicateNUMBER(Parameters&);
    bool checkEnterDataAgain(const Parameters& d);
    void checkValidCharMNE(Parameters&);
    void changeValidFlagsMNE(Parameters&);
   
    bool checkConfirmValid(Parameters& d);
    void changeCharTurnLoad(Parameters& );
    bool numberTurnLoad(const Parameters&);
    
    bool itIsEmptyExpression(const Parameters&);
    bool isItSign(char k);
    bool isItNumber(char k);
    bool isItExitKey(char k,const Parameters&);
    bool isItNegativeSign(char k);
    bool isItSpaceSign(char k);
    bool isItDuplicatedNumber(const char, const Parameters&);
    
    bool getValidTrue(Parameters& data);
    bool getValidFalse(Parameters& data);
   
};
#endif
