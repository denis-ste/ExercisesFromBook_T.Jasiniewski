

#include "Functions.hpp"
using namespace std;


void Functions::setSize(Parameters & param){
    int size;
    cin >> size;
    param.size = size;
}
void Functions::sortIt(Parameters & param){
    if (!std::is_sorted(param.numbersBox.begin(), param.numbersBox.end()))
        std::sort(param.numbersBox.begin(), param.numbersBox.end());
}

