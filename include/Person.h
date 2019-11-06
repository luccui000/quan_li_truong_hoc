#ifndef _PERSON_H_
#define _PERSON_H_

#include <iostream>
#include <iomanip>
#include <string.h>
#include <math.h>
#include <sstream>

typedef struct DATE{
    int day;
    int month;
    int year;
}_Date;


using namespace std;

class Person{
    protected:
        string fName;
        string Address;
        unsigned long phoneNumber;
        _Date birthday;
        string convertBirthday(int dd, int MM, int YYYY) const;
        bool isTrueBirthday(int dd, int MM, int YYYY) const;
    public:
        virtual void setPerson();
        virtual void setPerson(string name, string addr, long phone, string d);
        virtual void setName(string name){this->fName = name;}
        virtual void setAddress(string addr) {this->Address = addr;}
        virtual void setPhoneNumber(long phone) {this->phoneNumber = phone;}
        virtual void setDateofBirth(_Date date) {this->birthday = date;}
        virtual void displayInformtion() const;
        virtual void setDetailBfD();
        virtual string getName() const {return this->fName;}
        virtual unsigned long getPhone() const{return this->phoneNumber;}
        virtual string getAddr() const{return this->Address;}
        virtual string getDofB();
        string code(){return convertBirthday(this->birthday.day, this->birthday.month, this->birthday.year);}
        long setPassword(int &i);
        long convertINT(const string &);
};

#endif