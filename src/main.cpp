#include <iostream>
#include "Account.h"
#include "Student.h"
#include "Person.h"

int main(){
    // Account acc, *a;
    // a = &acc;
    // acc.init(110119025, "Luc Cui", 3.40000);
    // a->display();
    // Student *sv;

    // fflush(stdin);
    // sv->setBirthday();
    // // sv->setGraduations(true);
    // Student sv2(110119025, "Luc", "Cui", false);
    // sv = &sv2;
    // sv->display();
    _Date date;
    date.day = 23;
    date.month = 01;
    date.year = 2000;
    Person p, *ptr;
    // Account *a, acc;
    p.setName("Thach Minh Luc");
    p.setAddress("Duyen Hai, Tra Vinh");
    p.setPhoneNumber(84399942301);
    p.setDateofBirth(date);
    // p.setPerson();
    // p.getDofB();
    // string s = p.code();
    // cout << s << endl;
    // ptr = &p;
    // p.displayInformtion();
    // ptr->displayInformtion();
    int i = 0;
    cout << i << "\t" << p.setPassword(i) << endl;    
    return 0;  
}