
#include "Exercise1v2.hpp"
using namespace std;



void Exercise1v2::setValidNumberAndCheckEven(){
    int number;
   
    while(cin >> number){
        isEven(number);
    }
}

void Exercise1v2::isEven(const int & number){
    if (number % 2)
        cout << "\t--- wprowadono liczbe nieparzysta ---\n";
    else
        cout << "\t--- wprowadono liczbe parzysta ---\n";
}

void Exercise1v2::workIt(){
    cout << "WPROWADZ DANE\n\t Będziemy sprawdzać parzystość liczby.\n";
    cout << "\tPodaj dowolna liczbe całkowitą lub wstaw dowolny znak by zakończyć : ";
    setValidNumberAndCheckEven();
}
