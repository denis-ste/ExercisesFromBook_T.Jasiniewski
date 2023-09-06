#include "Library.hpp"
using namespace std;

void Task1v1::solution() {
    Parameters data;
    try {
        machineUI(data);
    }
    catch(ErrorFormat::Exit error){
        error.info();
        getValidFalse(data);
    }
};
