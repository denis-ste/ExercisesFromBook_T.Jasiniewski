

#ifndef Exercise_hpp
#define Exercise_hpp

#include <iostream>

class Exercise {
    
protected:
    virtual inline void textInfo(std::string text = "Blank"){
         std::cout << text;
     }
    
    virtual inline void numberTextInfo(std::string text = "Blank" , int count = 0){
         std::cout << text;
     }
    
    
    Exercise() = default;
    
};

#endif /* Exercise_hpp */
