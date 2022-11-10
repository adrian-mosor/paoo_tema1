#include <iostream>
#include "../inc/basicPhone.hpp"
#include "../inc/smartPhone.hpp"

int line = 1;
void print_line(){

    std::cout << std::endl << line;
    std::cout << "\n-------------------------------------\n";
    line++;
}

int main(){

    print_line(); 
    {
        SmartPhone s1(909, "2020/08/22", 4096, "android");
    }
    
    print_line();
    {
        BasicPhone b1(919, "2012/09/21", "qwerty", true);
    }
    
    print_line();
    {
        Phone *p1 = new SmartPhone(991, "2022/03/28", 8012, "ios");
        delete p1;
    }
    
    print_line();
    {
        Phone *p1 = new SmartPhone(); //default constructor included 
        delete p1;   
    }
    
    print_line();
    {
        // Phone *p1 = new BasicPhone(); //illegal (deleted auto-generated constructor)
        Phone *p1 = new BasicPhone(901, "2018/02/12", "basic", false);
        delete p1;
    }

    print_line();
    {
        SmartPhone s1(909, "2020/08/22", 4096, "android");
        SmartPhone s2(s1);  //copy constructor (SmartPhone s2 = s1)

        SmartPhone s3;
        s3 = s1;    //assignment operator
    }
    
    print_line();
    {   
        BasicPhone b1(901, "2018/02/12", "basic", false);
        
        // BasicPhone b2(b1);   //illegal (copy constructor and assigment operator deleted)
        // BasicPhone b3 = b1;
    }

    
}