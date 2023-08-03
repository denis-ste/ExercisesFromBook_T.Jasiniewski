

#include "Exercise1v1Valid.hpp"

void Exercise1v1Valid::checkRecurNumber(TaskParameters& taskParameters, const int &i){
    for (int j = 0; j < taskParameters.size; j++) {
        if (taskParameters.beginningNumberBox[i] == taskParameters.beginningNumberBox[j]) {
            WrongInputValue wrongInputValueCapluse;
            throw wrongInputValueCapluse;
        }
    }
}


