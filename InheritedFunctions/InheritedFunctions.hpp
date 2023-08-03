

#ifndef Exercise_hpp
#define Exercise_hpp

#include <iostream>
#include "TaskParameters.hpp"
#include "Info.hpp"

class InheritedFunctions : public Info  {
private:
    
protected:
    
    inline void entranceInfo() {
        std::cout << "WPROWADZ DANE";
    };
    inline void verticalScreenSpace(){
        std::cout << "\n\n";
    };
    inline void setSizeInfo(){
        std::cout << "\n\tPodaj wielkosc tablicy : ";
    };
  
    
    int setSize();
    int* getBoxNumbers(TaskParameters & size);
    
    
};

#endif /* Exercise_hpp */
