#include <iostream>
#include "../inc/basicPhone.hpp"
#include "../inc/smartPhone.hpp"
#include <memory> //library for smart pointers
#include <thread>

int line = 1;
void print_line(){

    std::cout << std::endl << line;
    std::cout << "\n-------------------------------------\n";
    line++;
}

int main(){

    //1st assignment:

    // print_line(); 
    // {
    //     SmartPhone s1(909, "2020/08/22", 4096, "android");
    // }
    
    // print_line();
    // {
    //     BasicPhone b1(919, "2012/09/21", "qwerty", true);
    // }
    
    // print_line();
    // {
    //     Phone *p1 = new SmartPhone(991, "2022/03/28", 8012, "ios");
    //     delete p1;
    // }
    
    // print_line();
    // {
    //     Phone *p1 = new SmartPhone(); //default constructor included 
    //     delete p1;   
    // }
    
    // print_line();
    // {
    //     // Phone *p1 = new BasicPhone(); //illegal (deleted auto-generated constructor)
    //     Phone *p1 = new BasicPhone(901, "2018/02/12", "basic", false);
    //     delete p1;
    // }

    // print_line();
    // {
    //     SmartPhone s1(909, "2020/08/22", 4096, "android");
    //     SmartPhone s2(s1);  //copy constructor (SmartPhone s2 = s1)

    //     SmartPhone s3;
    //     s3 = s1;    //assignment operator
    // }
    
    // print_line();
    // {   
    //     BasicPhone b1(901, "2018/02/12", "basic", false);
        
    //     // BasicPhone b2(b1);   //illegal (copy constructor and assigment operator deleted)
    //     // BasicPhone b3 = b1;
    // }

    //2nd assignment:
    // print_line();
    
    // {
    //     SmartPhone s1(909, "2020/08/22", 4096, "android");
    //     SmartPhone s2, s3;
    //     s2 = s3 = s1;    //assignment operator - chain of assignments

    //     //copied all parts
    //     std::cout << "\nDisplay info for s1:\n";
    //     s1.display_info();

    //     std::cout << "\nDisplay info for s2:\n";
    //     s2.display_info();

    //     std::cout << "\nDisplay info for s3:\n";
    //     s3.display_info();
    // }

    // print_line();
    // {
    //     SmartPhone s1(909, "2020/08/22", 4096, "android");
    //     s1 = s1;

    //     std::cout << "\nDisplay info for s1:\n";
    //     s1.display_info();
    // }

    // print_line();
    // {   
    //     SmartPhone s1(909, "2020/08/22", 4096, "android");
    //     SmartPhone s2{s1};  //copy constructor

    //     std::cout << "\nDisplay info for s1:\n";
    //     s1.display_info();

    //     std::cout << "\nDisplay info for s2:\n";
    //     s2.display_info();       
    // }

    //3rd assignment:
    print_line();
    {

        //smart pointers
        //unique ptr
        std::unique_ptr<SmartPhone> entity = std::make_unique<SmartPhone>(909, "2020/08/22", 4096, "android");

    }   //called destructors (no need to manually free thanks to smart pointers)

    print_line();
    {   
        //shared ptr
        std::shared_ptr<SmartPhone> shEnt = std::make_shared<SmartPhone>(909, "2020/08/22", 4096, "android");
        std::shared_ptr<SmartPhone> shEnt1(new SmartPhone(666, "2022/12/08", 8012, "stock android"));
        
        std::shared_ptr<SmartPhone> e0 = shEnt1; //it's perfectly fine to do that with shared

    }   //called destructors (automatically freed pointers - 2 objects destroyed)

    print_line();
    {
        std::shared_ptr<SmartPhone> shEnt = std::make_shared<SmartPhone>(909, "2020/08/22", 4096, "android");
        std::shared_ptr<SmartPhone> shEnt1(shEnt); //sharing the same resource

        std::thread t1(&SmartPhone::modify_resource, shEnt); //another thread
        shEnt1 -> modify_resource();    //current thread

        t1.join();

        std::cout << shEnt -> get_resource() << '\n';
        std::cout << shEnt1 -> get_resource() << '\n';
    }
    
}