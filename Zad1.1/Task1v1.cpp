

#include "Task1v1.hpp"
using namespace std;

void Task1v1::solution() {
    
    Parameters param;
    
    entranceInfo();
    setSizeInfo();
    setSize(param);
    whatToDoInfo();
    putInNumbers(param);
    sortIt(param);
    findBigestOne(param);
    sumWithoutBiggestNumer(param);
    setMultitime(param);
    closeInfo();
    bigestOneInfo(param);
    sumMultiTimeDisplayInfo(param);
    sumMultiTimeDisplay(param);
    verticalScreenSpace();
}

void Task1v1::putInNumbers(Parameters & param){
    while (param.position < param.size) {
        cin >> param.str;
        try{
            containsChar(param);
            fillInNumber(param);
            isContainerFull(param);
            containsDuplicate(param.numbersBox);
        }
        catch(WrongValue value){
            value.info();
            continue;
        }
        catch(NotFull value){
            value.info();
            param.numbersBox.clear();
            continue;
        }
        catch(DuplicateValue value){
            value.info();
            param.numbersBox.pop_back();
            continue;
        }
        param.position++;
    }
}
void Task1v1::fillInNumber(Parameters & param){
    param.num = stoi(param.str);
    param.numbersBox.push_back(param.num);
}
void Task1v1::findBigestOne(Parameters & param){
  param.biggestNumber = param.numbersBox.back();
}
void Task1v1::setMultitime(Parameters & param){
    param.multiTime = param.biggestNumber;
};
void Task1v1::sumWithoutBiggestNumer(Parameters & param){
    for (auto x : param.numbersBox){
        if (x != param.numbersBox.back()) {
            param.totalSum += x;
        }
    }
}





