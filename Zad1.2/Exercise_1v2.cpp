
#include "Exercise_1v2.hpp"
using namespace std;

void Exercise_1v2::textInfo(string text){
    cout << text;
}

void Exercise_1v2::setValidNumberAndCheckEven(){
    int number;
   
    while(cin >> number){
        isEven(number);
    }
}

void Exercise_1v2::isEven(const int & number){
    if (number % 2)
        textInfo("\t--- wprowadono liczbe nieparzysta ---\n");
    else
        textInfo("\t--- wprowadono liczbe parzysta ---\n");
}

void Exercise_1v2::workIt(){
    textInfo("WPROWADZ DANE\n\t Będziemy sprawdzać parzystość liczby.\n");
    textInfo("\tPodaj dowolna liczbe całkowitą lub wstaw dowolny znak by zakończyć : ");
    setValidNumberAndCheckEven();
}
