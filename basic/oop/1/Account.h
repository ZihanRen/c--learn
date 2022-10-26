#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <iostream>
#include <string>

class Account{
    private:
    std::string name;
    double balance;

    public:
    //methods
    //declare inline
    void set_balance(double bal){balance=bal;}
    double get_balance(){return balance;}
    // methods will be declared outside of class
    void set_name(std::string n);
    std::string get_name();
    bool deposit(double amount);
    bool withdraw(double amount);

};

#endif