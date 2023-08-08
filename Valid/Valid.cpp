

#include "Valid.hpp"

void Valid::containsChar(Parameters& param){
    param.flag = param.str.find_first_not_of("0123456789");
    if (param.flag != std::string::npos){
        WrongValue value;
        throw value;
    }
}
void Valid::containsDuplicate(std::vector<unsigned int>& nums) {
    if(std::adjacent_find(nums.begin(), nums.end()) != nums.end()) {
        DuplicateValue value;
        throw value;
    }
}
void Valid::isContainerFull(Parameters & param){
    if (param.numbersBox.size() !=  param.size){
        NotFull value;
        throw value;
    }
}
