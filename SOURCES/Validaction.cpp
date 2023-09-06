#include "Library.hpp"
using namespace std;

void Validaction::valid(Parameters& data){
    setValidDEFAULT(data);
    try{
        checkValidMNE(data);
    }
    catch(ErrorFormat::EmptyExpession error){
        error.info();
        getValidFalse(data);
    }
    catch(ErrorFormat::SpaceInWrongPlace error){
        error.info();
        getValidFalse(data);
    }
    catch(ErrorFormat::NegativeNumber error){
        error.info();
        getValidFalse(data);
    }
    catch(ErrorFormat::WrongValue error){
        error.info();
        getValidFalse(data);
    }
    catch(ErrorFormat::TooLargeNumber error){
        error.info();
        getValidFalse(data);
    }
    catch(ErrorFormat::Duplicate error){
        error.info();
        getValidFalse(data);
    }
}
bool Validaction::validCheck(Parameters& data){
   return checkEnterDataAgain(data);
}
bool Validaction::validStatus(const Parameters& data){
    return checkStatusValid(data);
}





