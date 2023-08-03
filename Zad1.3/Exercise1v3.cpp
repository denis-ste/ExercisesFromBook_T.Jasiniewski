
#include "Exercise1v3.hpp"
using namespace std;


void Exercise1v3::settingValidNumber(){
    int number;
    cout << "WPROWADZ DANE\n\t Będziemy sprawdzać podzielnosc liczby przez 3 oraz 5.\n";
    cout << "\tPodaj dowolna liczbe całkowitą lub wstaw dowolny znak by zakończyć : ";
    while (cin >> number) {
        checkDivisibility(number);
    }
}

void Exercise1v3::checkDivisibility(int number) {
    if ( divisibilityByThreeAndFive(number) == false && divisibilityByThreeOrFive(number) == false ) {
        cout << "Liczba nie jest podzielna ani przez 3 ani przez 5\n";
    }
}

bool Exercise1v3::divisibilityByThreeAndFive(int number){
    if (number % 3 == 0 && number % 5 == 0) {
        cout << "Liczba jest podzielna przez 3 i przez 5\n";
        return true;
    }
    return false;;
}

bool Exercise1v3::divisibilityByThreeOrFive(int number) {
    if (number % 3 == 0 && number % 5 != 0) {
        cout << "Liczba jest podzielna przez 3 ale nie przez 5\n";
        return true;
    }
    else if (number % 3 != 0 && number % 5 == 0) {
        cout << "Liczba nie jest podzielna przez 3 ale za to jest podzielna przez 5\n";
        return true;
    }
    else return false;
}

void Exercise1v3::workIt(){
    settingValidNumber();
}
