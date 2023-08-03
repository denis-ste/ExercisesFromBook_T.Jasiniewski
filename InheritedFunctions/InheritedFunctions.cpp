

#include "InheritedFunctions.hpp"
using namespace std;

int InheritedFunctions::setSize(){
    int size;
    cout << "\n\tPodaj wielkosc tablicy : ";
    cin >> size;
    return size;
}

int* InheritedFunctions::getBoxNumbers(const int & size){
    auto begin = new int [size];
    return begin;
}
