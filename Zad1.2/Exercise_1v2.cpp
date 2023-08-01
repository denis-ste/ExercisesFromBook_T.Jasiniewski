

#include "Exercise_1v2.hpp"
using namespace std;


void Exercise_1v2::putNumber(){
    int number;
    cout << "WPROWADZ DANE\n\t" << "Będziemy sprawdzać parzystość liczby.\n";
    
    do{
        cout << "\tPodaj dowolna liczbe całkowitą lub wstaw dowolny znak by zakończyć : ";
        cin >> number;
        isEven(number);
    } while(number);
}
bool Exercise_1v2::isEven(const int & number){
    if (number % 2) {
        cout << "\t--- wprowadono liczbe nieparzysta ---\n";
        return false;
    }
    else {
        cout << "\t--- wprowadono liczbe parzysta ---\n";
        return true;
    }
}
void Exercise_1v2::workIt(){
    putNumber();
}
