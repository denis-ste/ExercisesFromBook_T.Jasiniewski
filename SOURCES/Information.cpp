#include "Library.hpp"
using namespace std;
 
 void Information::infoStart(){
     cout << "WPISZ DANE " << "(wciśnij q lub Q aby zakończyć program)" << endl;
 }
 void Information::infoWhatDo(){
     cout << endl;
     cout << "Wprowadz liczby : " << endl;
     cout << "- z zakresu 0 - 9" << endl;
     cout << "- niepowtarzajace" << endl;
     cout << "- nieujemne" << endl;
     cout << "- odzielone jedna spacja " << endl;
     cout << "Przykładowy format dla 3 liczb (liczba liczba liczba)" << endl;
     cout << ": ";
 }
 void Information::infoExample(){
     cout << endl << endl;
     cout << "Przykładowy format 3 liczb (liczba liczba liczba)" << endl;
     cout << "Wprowadz liczby nieujemne oddzielone spacją : ";
 }
 void Information::infoVectorSize(){
     cout << "Na ilu liczbach chesz prowadzić obliczenia? : ";
 }
 void Information::infoClose(){
     cout << endl << "WYNNIKI OBLICZEŃ" << endl;
 }
void Information::infoCantInsertNumber(){
    cout << "\nNie udalo sie wpowadzić liczb";
}
void Information::infoEndProgram(){
    std::cout << std::endl << std::endl;
}

