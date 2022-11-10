#include <iostream>
#include "../inc/basicPhone.hpp"

BasicPhone::BasicPhone(const int serialNumber, const std::string& releaseDate, const std::string& keyboardType, const bool hasRadio) 
    : Phone(serialNumber, releaseDate), keyboard_type(keyboardType), has_radio(hasRadio){

    std::cout << "basicPhone object created\n";
}

BasicPhone::~BasicPhone(){
    std::cout << "basicPhone object destroyedd\n";
}

void BasicPhone::set_keyboard_type(const std::string& keyboardType){
    keyboard_type = keyboardType;
}

void BasicPhone::set_radio_available(const bool hasRadio){
    has_radio = hasRadio;
}