

#include "Exercise1v1.hpp"
using namespace std;

void Exercise1v1::workIt() {
    
    TaskParameters taskParameters;
    
    entranceInfo();
    taskParameters.size = setSize();
    
    taskParameters.beginOfBoxNumbers =  getBoxNumbers(taskParameters.size);
    
    putInNumbers(taskParameters);
    
    
    int theBigestOfNumber = findTheBigestOne(taskParameters.beginOfBoxNumbers,
                                             taskParameters.size);
    int sumRemainingvar = sumRemaining(taskParameters.beginOfBoxNumbers,
                                       theBigestOfNumber,  taskParameters.size);
    
    displaySumMultiTime(sumRemainingvar, theBigestOfNumber);
    
    cout << "\n\n\n";
    delete [] taskParameters.beginOfBoxNumbers;
}

void Exercise1v1::putInNumbers(TaskParameters taskParameters){
    cout << "\tPodaj kolejno " << taskParameters.size << " liczb nieujemnych odzielone spacja bez powtorzeń : ";
    //try
    for (int i = 0; i < taskParameters.size; i++) {
        cin >> taskParameters.beginOfBoxNumbers[i];
        // checkRecurNmber(boxOfNumbers, size, i);
    }
}

int Exercise1v1::findTheBigestOne(int* boxOfNumbers, int size){
    int theBigestOfNumbers = 0;

    for (int i = 0; i < size; i++) {
        if (theBigestOfNumbers < boxOfNumbers[i]) {
            theBigestOfNumbers = boxOfNumbers[i];
        }
    }
    cout << "\nWYNIKI OBLICZEN\n\tNajwiększa z podanych liczb to : " << theBigestOfNumbers;
    return theBigestOfNumbers;
}

int Exercise1v1::sumRemaining(int* boxOfNumbers,int theBigestOfNumbers, int size){
    int totalSum = 0;
    
    for (int i = 0; i < size; i++){
        if (boxOfNumbers[i] != theBigestOfNumbers) {
            totalSum += boxOfNumbers[i];
        }
    }
    cout << "\n\tSuma pozostalych liczb wynosi : " << totalSum;
    return totalSum;
}

void Exercise1v1::displaySumMultiTime(int sumRemaining , int theBigestOfNumbers){
    int multiTime = theBigestOfNumbers;
    cout << "\n\tWyswietlam " << theBigestOfNumbers << "-razy sume pozostalych liczb : ";
    
    for (int i = 0; i < multiTime; i++){
        cout << sumRemaining << ", ";
    }
}


