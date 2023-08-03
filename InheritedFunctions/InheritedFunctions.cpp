

#include "InheritedFunctions.hpp"
using namespace std;



int InheritedFunctions::setSize(){
    int size;
    cin >> size;
    return size;
}

int* InheritedFunctions::getBoxNumbers(TaskParameters & taskParameters){
    auto begin = new int [taskParameters.size];
    return begin;
}

