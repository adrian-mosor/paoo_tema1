#pragma once
#include "phone.hpp"

class SmartPhone : public Phone{

private:
    int ram_size{};
    std::string operating_system{};

public:
    SmartPhone() = default;
    SmartPhone(const int, const std::string&, const int, const std::string&);
    ~SmartPhone();
    SmartPhone(const SmartPhone&);  //copy constructor 
    SmartPhone& operator=(const SmartPhone&);  //assignment operator 
    void set_ram_size(const int);
    void set_operating_system(const std::string&);

    int get_ram_size() const{
        return ram_size;
    }

    std::string get_operating_system() const{
        return operating_system;
    }
};