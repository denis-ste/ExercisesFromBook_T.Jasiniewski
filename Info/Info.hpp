

#ifndef Info_hpp
#define Info_hpp

#include <iostream>
#include "Parameters.hpp"

class Info {
protected:
    inline void entranceInfo() {
        std::cout << "WPROWADZ DANE";
    };
    inline void closeInfo(){
        std::cout << "\nWYNIKI OBLICZEN";
    };
    inline void whatToDoInfo(){
        std::cout << "\tPodaj kolejno liczb/-y nieujemne /-ych oddzielone/-ych spacja bez powtorzeń : ";
    };
    inline void reminder(const Parameters & param){
        std::cout << "\nPodaj DOKŁADNIE tyle samo licz co zadeklarowałeś. Zadeklarowałeś /-aś : "
        << param.size << " liczby : ";
    }
    inline void setSizeInfo(){
        std::cout << "\n\tPodaj wielkosc tablicy : ";
    };
    inline void bigestOneInfo(const Parameters & param){
        std::cout << "\n\tNajwiększa z podanych liczb to : "
        << param.numbersBox.back();
    }
    inline void sumMultiTimeDisplayInfo(const Parameters & param){
        std::cout << "\n\tWyswietlam " << param.multiTime << "-razy sume pozostalych liczb : ";
    }
    inline void sumMultiTimeDisplay(const Parameters & param){
        for (const auto x : param.numbersBox){
            if (x != param.numbersBox.back())
                std::cout << param.totalSum << ", ";
        }
    }
    inline void sumWithoutBiggestNumerInfo(const Parameters & param){
        std::cout << "\n\tSuma pozostalych liczb wynosi : "
                  << param.totalSum;
    }
    inline void verticalScreenSpace(){
        std::cout << "\n\n";
    };
};


#endif /* Info_hpp */
