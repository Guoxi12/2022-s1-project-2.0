#pragma once

#include "printable.h"
#include <string>

using namespace std;

class Vehicle{
    protected:
        int _price;
        int _vehicle_ID;
        string _brand;
    public:
        Vehicle();
        Vehicle(int price, int vehicle_ID, string brand);
        int get_price();
        int get_ID();
        string get_brand();
        virtual void print_info() = 0;

        ~Vehicle();
};
