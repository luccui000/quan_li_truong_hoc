#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
#include <iomanip>
#include <math.h>
#include "Person.h"


using namespace std;

class Account:public Person
{
    public:
        unsigned long setID();
        unsigned long setID(unsigned long = 000000000) const;            
    private:
        long convertINT(const string &);
        unsigned long ID;
        string fName;
        string Address;
        unsigned long phoneNumber;
        _Date birthday;
        string getName();
        unsigned long getPhone() {return getPhone();}
        string getAddr(){return getAddr();}
        string getDofB(){return Person::getDofB();}
        string setCode() const;
        long setPassword(int &i){}
        bool loginSuccess();
        bool loginFailed();
};

#endif