

#ifndef Exercise1v1Info_hpp
#define Exercise1v1Info_hpp

#include <iostream>
#include "TaskParameters.hpp"

class Exercise1v1Info {
private:
    
public:
    inline void sumMultiTimeDisplayInfo(const TaskParameters & taskParameters){
        std::cout << "\n\tWyswietlam " << taskParameters.multiTime << "-razy sume pozostalych liczb : ";
    }
    inline void afterSetSizeInfo(const TaskParameters & taskParameters){
        std::cout << "\tPodaj kolejno " << taskParameters.size
                  << " liczb/-y nieujemne /-ych oddzielone/-ych spacja bez powtorzeń."
                  << "\n\tWieksza ilość podanych liczb zostanie zignorowana : ";
    };
    inline void findBigestOneInfo(const TaskParameters & taskParameters){
        std::cout << "\nWYNIKI OBLICZEN\n\tNajwiększa z podanych liczb to : "
                  << taskParameters.biggestNumber;
    }
    inline void sumWithoutBiggestNumerInfo(const TaskParameters & taskParameters){
        std::cout << "\n\tSuma pozostalych liczb wynosi : "
                  << taskParameters.totalSum;
    }
};

#endif /* Exercise1v1Info_hpp */
