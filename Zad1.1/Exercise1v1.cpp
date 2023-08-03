

#include "Exercise1v1.hpp"
using namespace std;

void Exercise1v1::solution() {
    
    TaskParameters taskParameters;
    
    entranceInfo();
    setSizeInfo();
    taskParameters.size = setSize();
    afterSetSizeInfo(taskParameters);
    taskParameters.beginningNumberBox = getBoxNumbers(taskParameters);
    putInNumbers(taskParameters);
    taskParameters.biggestNumber = findBigestOne(taskParameters);
    findBigestOneInfo(taskParameters);
    taskParameters.totalSum = sumWithoutBiggestNumer(taskParameters);
    setMultitime(taskParameters);
    sumMultiTimeDisplayInfo(taskParameters);
    sumMultiTimeDisplay(taskParameters);
    verticalScreenSpace();
    delete [] taskParameters.beginningNumberBox;
}

void Exercise1v1::putInNumbers(TaskParameters & taskParameters){
    //try
    for (int i = 0; i < taskParameters.size; i++) {
        cin >> taskParameters.beginningNumberBox[i];
        checkRecurNumber(taskParameters , i);
    }
}

int Exercise1v1::findBigestOne(TaskParameters & taskParameters){

    for (int i = 0; i < taskParameters.size; i++) {
        if (taskParameters.biggestNumber < taskParameters.beginningNumberBox[i]) {
            taskParameters.biggestNumber = taskParameters.beginningNumberBox[i];
        }
    }
    return taskParameters.biggestNumber;
}

void Exercise1v1::setMultitime(TaskParameters & taskParameters){
    taskParameters.multiTime = taskParameters.biggestNumber;
};

int Exercise1v1::sumWithoutBiggestNumer(TaskParameters & taskParameters){
    
    for (int i = 0; i < taskParameters.size; i++){
        if (taskParameters.beginningNumberBox[i] != taskParameters.biggestNumber) {
            taskParameters.totalSum += taskParameters.beginningNumberBox[i];
        }
    }
    return taskParameters.totalSum;
}

void Exercise1v1::sumMultiTimeDisplay(const TaskParameters & taskParameters){
    for (int i = 0; i < taskParameters.multiTime; i++){
        cout << taskParameters.totalSum << ", ";
    }
}


