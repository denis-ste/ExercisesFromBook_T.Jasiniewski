#include "Library.hpp"
using namespace std;

bool DetailedValidation::checkStatusValid(const Parameters& d){
    return d.statusValid;
}
bool DetailedValidation::checkEnterDataAgain(const Parameters& d){
    return d.enterDataAgain;
}

void DetailedValidation::setValidDEFAULT(Parameters& d){
    d.numbersBox.clear();
    d.statusValid = false;
    d.canBeNumberLoad = true;
    d.enterDataAgain = false;
}
void DetailedValidation::checkValidMNE(Parameters& d){
    if ( itIsEmptyExpression(d) ){
        ErrorFormat::EmptyExpession error;
        throw error;
    }
    for( char k : d.text ){
        if ( isItSign(k) ) {
            if ( isItExitKey(k, d) ) {
                ErrorFormat::Exit error;
                throw error;
            }
            else if ( isItSpaceSign(k) ){
                    if ( numberTurnLoad(d) ){
                        ErrorFormat::SpaceInWrongPlace error;
                        throw error;
                }
            }
            else if ( isItNegativeSign(k) ){
                ErrorFormat::NegativeNumber error;
                throw error;
            }
            else {
                ErrorFormat::WrongValue error {k};
                throw error;
            }
        }
        if( isItNumber(k) ){
            if ( !numberTurnLoad(d) ) {
                ErrorFormat::TooLargeNumber error;
                throw error;
                }
            if ( isItDuplicatedNumber(k, d) ){
                ErrorFormat::Duplicate error{k};
                throw error;
            }
        }
        changeCharTurnLoad(d);
        }
    okStatusValid(d);
}
void DetailedValidation::okStatusValid(Parameters& d){
    d.statusValid = true ;
}
bool DetailedValidation::numberTurnLoad(const Parameters& data){
    return data.canBeNumberLoad ? true : false;
}
bool DetailedValidation::itIsEmptyExpression(const Parameters& d){
    return d.text.empty() ? true : false;
}
bool DetailedValidation::isItSign(char k){
   return (k <= 47 or k >= 58) ?  true : false ;
}
bool DetailedValidation::isItNegativeSign(char k){
   return k == '-' ?  true : false ;
}
bool DetailedValidation::isItSpaceSign(char k){
    return k == ' ' ? true : false;
}
bool DetailedValidation::isItExitKey(char k,const Parameters& data){
   return ((k == 'q' or k == 'Q') and k == data.text.front()) ?  true : false ;
}
bool DetailedValidation::isItNumber(char k){
   return (k >= 48 and k <= 57) ?  true : false ;
}
bool DetailedValidation::isItDuplicatedNumber(const char k,const Parameters& d){
    return count(d.text.cbegin(), d.text.cend(), k) >= 2 ? true : false;
}
void DetailedValidation::changeCharTurnLoad(Parameters& data){
    data.canBeNumberLoad ? data.canBeNumberLoad = false : data.canBeNumberLoad = true ;
}
bool DetailedValidation::getValidTrue(Parameters& data){
    return data.enterDataAgain = false;
}
bool DetailedValidation::getValidFalse(Parameters& data){
    return data.enterDataAgain = true;
}


