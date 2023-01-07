#include <iostream>

class User {
public:
    // (1) Add fields for string name, string email
    std::string name;
    std::string email;
    

    // (2) Add a constructor that accepts name and email parameters and
    //     uses them to initialize the class' name and email fields
    User(std::string x, std::string y){
      name = x;
      email = y;
    }
};