

#include "Exercise_1v1.hpp"
using namespace std;

int Exercise_1v1::setSize(){
    int size;
    
    cout << "WPROWADZ DANE \n\tPodaj wielkosc tablicy : ";
    cin >> size;
    return size;
}

int* Exercise_1v1::getEmptyBoxForNumbers(int size){
    
    auto begin = new int [size];
    return begin;
}

void Exercise_1v1::putInNumbers(int* boxOfNumbers, int size){
    cout << "\tPodaj kolejno " << size << " liczb/-y nieujemne odzielone spacja : ";
    for (int i = 0; i < size; i++) {
        cin >> boxOfNumbers[i];
    }
}

int Exercise_1v1::searchForTheBigestOne(int* boxOfNumbers, int size){
    int theBigestOfNumbers = 0;

    for (int i = 0; i < size; i++) {
        if (theBigestOfNumbers < boxOfNumbers[i]) {
            theBigestOfNumbers = boxOfNumbers[i];
        }
    }
    cout << "\nWYNIKI OBLICZEN\n\tNajwiększa z podanych liczb to : " << theBigestOfNumbers;
    return theBigestOfNumbers;
}

int Exercise_1v1::sumRemaining(int* boxOfNumbers,int theBigestOfNumbers, int size){
    int totalSum = 0;
    
    for (int i = 0; i < size; i++){
        if (boxOfNumbers[i] != theBigestOfNumbers) {
            totalSum += boxOfNumbers[i];
        }
    }
    cout << "\n\tSuma pozostalych liczb wynosi : " << totalSum;
    return totalSum;
}

void Exercise_1v1::displaySumMultiTime(int sumRemaining , int theBigestOfNumbers){
    int multiTime = theBigestOfNumbers;
    cout << "\n\tWyswietlam " << theBigestOfNumbers << "-razy sume pozostalych liczb : ";
    
    for (int i = 0; i < multiTime; i++){
        cout << sumRemaining << ", ";
    }
}

void Exercise_1v1::workIt() {
    
    int size = setSize();
    int* beginOfBoxNumbers =  getEmptyBoxForNumbers(size);
    putInNumbers(beginOfBoxNumbers, size);
    
    
    int theBigestOfNumbers = searchForTheBigestOne(beginOfBoxNumbers, size);
    int sumRemainingvar = sumRemaining(beginOfBoxNumbers, theBigestOfNumbers,  size);
    
    displaySumMultiTime(sumRemainingvar, theBigestOfNumbers);
    
    cout << "\n\n\n";
    delete [] beginOfBoxNumbers;
}
