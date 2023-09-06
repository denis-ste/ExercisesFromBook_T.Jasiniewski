#ifndef ErrorFormat_hpp
#define ErrorFormat_hpp

#include "Library.hpp"

class ErrorFormat{
protected:
    struct EmptyExpession{
        void info(){
            std::cout << "Puste wyrażenie -- błąd formatu" << std::endl;
            std::cout << "Wprowadz liczby : ";
        }
    };
    struct Exit{
        void info(){
            std::cout << "Wcisnieto klawisz wyjscia ..." << std::endl;
        }
    };
    struct SpaceInWrongPlace{
        void info()  {
            std::cout << "Spacja w miejcu liczby -- błąd formatu" << std::endl;
            std::cout << "Wprowadz liczby : ";
        }
    };
    struct NegativeNumber{
        void info(){
            std::cout << "Wprowadzono liczbę ujemną -- błąd formatu" << std::endl;
            std::cout << "Wprowadz liczby : ";
        }
    };
    struct WrongValue{
        char k;
        void info(){
            std::cout << "Znak " << k << " w miecu liczy -- błąd formatu" << std::endl;
            std::cout << "Wprowadz liczby : ";
        }
    };
    struct TooLargeNumber{
        void info(){
            std::cout << "Podaj liczbę z zakresu 0 - 9 -- błąd formatu" << std::endl;
            std::cout << "Wprowadz liczby : ";
        }
    };
    struct Duplicate{
        char k;
        void info(){
            std::cout << "Dubel powtorzona została liczba " << k << " -- błąd formatu" << std::endl;
            std::cout << "Wprowadz liczby : ";
        }
    };
};
#endif
