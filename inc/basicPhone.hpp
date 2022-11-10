#pragma once
#include "phone.hpp"

class BasicPhone : public Phone{

private:
    std::string keyboard_type{};
    bool has_radio{};

public:
    BasicPhone() = delete;
    ~BasicPhone();
    BasicPhone(const int, const std::string&, const std::string&, const bool);
    BasicPhone(const BasicPhone&) = delete;  //copy constructor 
    BasicPhone& operator=(const BasicPhone&) = delete;  //assignment operator
    void set_keyboard_type(const std::string&);
    void set_radio_available(const bool);

    std::string get_keyboard_type() const{
        return keyboard_type;
    }    

    bool get_radio_available() const{
        return has_radio;
    }
};