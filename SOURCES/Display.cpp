#include "Library.hpp"
using namespace std;

void Display::displayBigestOne(const Parameters& d){
    cout << endl << "Największa z podanych liczb to : " << d.numbersBox.back();
}
void Display::displaySumWithoutBiggestNumer(const Parameters& d){
    cout << endl << "Suma pozostalych liczb wynosi : " << d.totalSum;
}
void Display::displayMultiTimeSumWithoutBiggestNumer(const Parameters& d){
    cout << endl << "Wyswietlanie " << d.multiTime << "-krotne sumy pozostałych" << endl << " ";
    for (int i = 0 ; i < d.multiTime; i++){
        cout << d.totalSum;
        if(i != (d.multiTime-1)){
           cout << " ,";
        }
    }
}


