#pragma once
#include <string>

class Phone{

protected:
    int serial_number{};
    std::string release_date{};

public:
    Phone();
    Phone(const int, const std::string&);
    virtual ~Phone();
    void set_serial_number(const int);
    void set_release_date(const std::string&);
    virtual void display_info() = 0;
    
    int get_serial_number() const{
        return serial_number;
    }

    std::string get_release_date() const{
        return release_date;
    }

};