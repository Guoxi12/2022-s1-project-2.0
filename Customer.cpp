
#include<string>
#include<iostream>
#include"printable.h"
#include"Vehicle.h"
#include"Customer.h"

using namespace std;

Customer :: Customer(int customer_ID) : _customer_ID(customer_ID) {
    string name;
    cout << "Please enter the customer's name: " << endl;
    cin >> name;
    _name = name;

    string preference_brand;
    cout << "Please enter the customer's preference brand: " << endl;
    cin >> preference_brand;
    _preference_brand = preference_brand;

    int max_budget;
    cout << "Please enter the customer's max budget: " << endl;
    cin >> max_budget;
    _max_budget = max_budget;
}

string Customer :: get_preference_brand(){ return _preference_brand; }

string Customer :: get_name() { return _name; }

int Customer :: get_max_budget() { return _max_budget;}

Customer :: ~Customer(){}


