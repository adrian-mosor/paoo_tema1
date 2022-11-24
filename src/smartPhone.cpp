#include <iostream>
#include "../inc/smartPhone.hpp"

SmartPhone::SmartPhone(const int serialNumber, const std::string& releaseDate, const int ramSize, const std::string& operatingSystem)
    : ram_size(ramSize), operating_system(operatingSystem){

    serial_number = serialNumber;
    release_date = releaseDate;
    std::cout << "smartPhone object created\n";
}

SmartPhone::~SmartPhone(){
    std::cout << "smartPhone object destroyed\n";
}

void SmartPhone::set_ram_size(const int ram){
    ram_size = ram;
}

void SmartPhone::set_operating_system(const std::string& system){
    operating_system = system;
}

SmartPhone::SmartPhone(const SmartPhone& p){    //copy constructor

    serial_number = p.serial_number;
    release_date = p.release_date;
    ram_size = p.ram_size;
    operating_system = p.operating_system;

    std::cout << "copy constructor executed\n";
}

SmartPhone& SmartPhone::operator=(const SmartPhone& p){   //assignment operator overloading

    if(this == &p){
        std::cout << "ENTERED IF SAME OBJECTS\n\n";
        return *this;   //item 11 - handling assigment 
    }

    //delete bp;  //if this and p points to the same object, p.bp also gets deleted!
    
    serial_number = p.serial_number;
    release_date = p.release_date;
    ram_size = p.ram_size;
    operating_system = p.operating_system;

    std::cout << "assignment operator executed\n";

    return *this;   //return the existing object
}

void SmartPhone::display_info(){

    std::cout << "Serial number: " << serial_number << '\n';
    std::cout << "Relase date: " << release_date << '\n';
    std::cout << "Ram size: " << ram_size << '\n';
    std::cout << "Operating system: " << operating_system << '\n';
}