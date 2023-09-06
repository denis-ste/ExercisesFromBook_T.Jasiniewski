#include "Library.hpp"
using namespace std;

void UserData::userDataLoadExpression(Parameters& d){
    getline(cin, d.text);
}
void UserData::userDataClearCIN(){
    cin.clear();
}

