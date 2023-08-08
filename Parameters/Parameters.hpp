
#ifndef Parameters_hpp
#define Parameters_hpp

#include <iostream>
#include "vector"

class Parameters {
public:
    size_t flag = false;
    std::string str;
    std::vector<unsigned int> numbersBox;
    int num = NULL;
    int size = NULL;
    int position = NULL;
    int biggestNumber = NULL;
    int totalSum = NULL;
    int multiTime = NULL;
};

#endif /* Parameters_hpp */
