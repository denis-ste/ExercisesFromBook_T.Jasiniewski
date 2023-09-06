#include "Library.hpp"
using namespace std;

void Machine::machineUI(Parameters& d){
    infoStart();
    infoWhatDo();
    
    machineManageMNE(d);
    
    toolVectorSortIt(d);
    toolFindBigestOne(d);
    toolSetMultitime(d);
    toolSumWithoutBiggestNumer(d);
    
    infoClose();
    displayBigestOne(d);
    displaySumWithoutBiggestNumer(d);
    displayMultiTimeSumWithoutBiggestNumer(d);
    infoEndProgram();
}
void Machine::machineManageMNE(Parameters& d){
    do{
        userDataLoadExpression(d);
        valid(d);
    } while(validCheck(d));
    validStatus(d) ? toolConverseStringToVectorNumber(d) : infoCantInsertNumber();
}

