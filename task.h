#include <iostream>

class Task {
public:
    // (3) Add fields for string description, string due date and bool completed
    std::string description;
    std::string due_date;
    bool completed;

    // (4) Add a constructor that accepts parameters for the above 
    //     variables and uses them to initialize corresponding class fields
    Task(std::string a, std::string b, bool c){
      description = a;
      due_date = b;
      completed = c;
    }
};