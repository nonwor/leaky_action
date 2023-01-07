#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>

/*
  
  This is a skeleton for a miniature todo list application. See README.md for instructions.
    ok
*/

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

void print_users(std::vector<User *> &users) {
    /* 
       (7) This function should use an iterator (or range loop)
           to print all of the Users to stdout in a format like:

       Alan Turing, alan@turing.com
       Linus Torvalds, linus@linuxfoundation.org
       Bjarne Stroustrup, bjarne@stroustrup.org
       ... etc ...
    */

    // std::cout <<"here"<<" ";

    // for(auto &element : users){
    //   std::cout <<element->name<<", ";
    //   std::cout <<element->email<<" \n ";
    // }
   
}

void print_tasks(std::map<User *, std::set<Task *> *> &tasks) {
    /* (11) This function should use an iterator (or range loop) 
            to print Tasks for each User in a format like:
        
       Alan Turing, alan@turing.com
         06/09/1941: break enigma code [complete]
         03/25/2020: do laundry [not complete]

       Linus Torvalds, linus@linuxfoundation.org
         01/01/1991: invent linux [complete]

       Bjarne Stroustrup, bjarne@stroustrup.org
         01/01/1979: invent cpp [complete]

       ... etc ...
    */
    std::cout<<"-----Task 11------"<<"\n ";

    // for(auto &elem: tasks){
    //   std::cout<<elem.first->name<<",  ";
    //   std::cout<<elem.first->email<<"\n  ";
      
    //   for(auto &subelem: *elem.second){
    //     std::cout<<subelem->description<<", ";
    //     std::cout<<subelem->due_date<<", ";
    //     // std::cout<<subelem->completed<<"\n ";
    //     if(subelem->completed == 1){
    //       std::cout<<"[complete]"<<"\n ";
    //     } else {
    //       std::cout<<"[not complete]"<<"\n ";
    //     }
    //   }
      

    // }

    
}

int main(int argc, char **argv) {
    User *alan;
    User *linus;
    User *bjarne;
    User *ada;
    User *grace;
    

    // (5) Using the `new` keyword, heap-allocate User objects for each
    //     of the above variables (you can make up the data)
    
    alan = new User("Alan Turing", "alan@yahoo.com");
    linus = new User("linus linny", "linus@google.com");
    bjarne = new User("bjarne God", "bg@cc.com");
    ada = new User("ada", "ada@msn.com");
    grace = new User("Grace Yim", "graceyim@hotmail.com");
    
    //This is how to get name and email from the new created variables...
    //Not sure if this is the best way. 
    // std::cout <<alan->name<<" ";
    // std::cout <<alan->email<<" ";


    // (6) Add the Users to a vector
    std::vector<User *> users;
    users.push_back(alan);
    users.push_back(linus);
    users.push_back(bjarne);
    users.push_back(ada);
    users.push_back(grace);

    // (7) Implement this function to display the users
    print_users(users); 

    // (8) Heap-allocate various Task objects (you can make up the data)
    Task *task1;
    Task *task2;
    Task *task3;
    Task *task4;
    Task *task5;
    Task *task6;
    Task *task7;

    task1 = new Task("run", "1/2/10", true);
    task2 = new Task("fight", "1/2/11", true);
    task3 = new Task("lock out", "5/2/12", false);
    task4 = new Task("re-run system", "1/2/2022", false);
    task5 = new Task("git pull and git push", "1/2/10", true);
    task6 = new Task("walk", "1/2/10", false);
    task7 = new Task("swim", "1/2/10", true);

    // (9) Heap-allocate various std::set<Task *>* objects. Each set represents the Tasks for a single User.
    // std::set<Task *> alan_task;
    // alan_task.insert(task1);
    // alan_task.insert(task2);

    // std::set<Task *> linus_task;
    // linus_task.insert(task3);

    // std::set<Task *> bjarne_task;
    // bjarne_task.insert(task4);

    // std::set<Task *> ada_task;
    // ada_task.insert(task5);

    // std::set<Task *> grace_task;
    // grace_task.insert(task6);
    // grace_task.insert(task7);


    // (10) Add the User* and std::set<Task *>* objects to a map. 
    //      The key-value pairs in this map associate a User with a set of their Tasks.
    std::map<User *, std::set<Task *> *> tasks;
    // tasks[alan] = &alan_task;
    // tasks[linus] = &linus_task;
    // tasks[bjarne] = &bjarne_task;
    // tasks[ada] = &ada_task;
    // tasks[grace] = &grace_task;

    // (11) Implement this function to display Tasks for all Users
    print_tasks(tasks); 
    
    // (12) Optionally, delete the memory for the allocated User, Task and std::set objects. You can 
    //      use valgrind to ensure your program has successfully released the memory it allocated.
    delete alan;
    delete linus;
    delete bjarne;
    delete ada;
    delete grace;

    delete task1;
    delete task2;
    delete task3;
    delete task4;
    delete task5;
    delete task6;
    delete task7;

    return 0;
}

