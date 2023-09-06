#include "Library.hpp"
using namespace std;

void Tool::toolFindBigestOne(Parameters& d){
d.biggestNumber = d.numbersBox.back();
}
void Tool::toolSetMultitime(Parameters& d){
d.multiTime = d.biggestNumber;
}
void Tool::toolVectorSortIt(Parameters& d){
if (!std::is_sorted(d.numbersBox.begin(), d.numbersBox.end()))
    std::sort(d.numbersBox.begin(), d.numbersBox.end());
}
 void Tool::toolConverseStringToVectorNumber(Parameters& d){
     for(char& z : d.text){
         if (z == ' ') continue;
         d.num = int(z) - d.CHAR_TO_INT_ALIGN_ASCII;
         d.numbersBox.push_back(d.num);
     }
 }
void Tool::toolSumWithoutBiggestNumer(Parameters& d){
     for (auto x : d.numbersBox){
        if (x != d.numbersBox.back()) {
            d.totalSum += x;
        }
     }
}


