#include <iostream>
#include "../inc/phone.hpp"

Phone::Phone(){
    std::cout << "phone object created\n";
}

Phone::Phone(const int serialNumber, const std::string& releaseDate) 
    : serial_number(serialNumber), release_date(releaseDate){

        std::cout << "phone object created\n";
}

Phone::~Phone(){
    std::cout << "phone object destroyed\n";
}

void Phone::set_serial_number(const int serial){
    serial_number = serial;
}

void Phone::set_release_date(const std::string& date){
    release_date = date;
}
