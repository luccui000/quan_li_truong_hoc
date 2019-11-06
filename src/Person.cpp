#include "Person.h"

void Person::setPerson(){
    fflush(stdin);
    cout << "Nhap Ho va Ten : ";getline(cin, fName);
    fflush(stdin);
    cout << "Nhap Dia Chi : " ; getline(cin, Address);
    fflush(stdin);
    cout << "Nhap So Dien Thoai : "; cin >> this->phoneNumber;
    fflush(stdin);
    cout << "Nhap Ngay Thang Nam Sinh (dd-MM-YYYY): \n";
    setDetailBfD();
}
void Person::setPerson(string fname, string addr, long phone, string d){
    this->fName = fname;
    this->Address = addr;
    this->phoneNumber = phone;
}
string Person::convertBirthday(int d, int MM, int YYYY) const{
    if(isTrueBirthday(d,MM,YYYY)){
        char str1[10] = {(char)d};
        char str2[10] = {(char)MM};
        char str3[10] = {(char)YYYY};
        char str4[50];
        strcat(str4,str1);
        strcat(str4,str2);
        strcat(str4,str3);
        return str4;
    }
    return "Birthday Not True !!!!";
}
bool Person::isTrueBirthday(int dd, int MM, int YYYY) const{
    if(dd > 0 && dd < 32 && MM > 0 && MM < 13 && YYYY > 0) return true;
    return false;
}
void Person::setDetailBfD(){
    do{
        cout << "->Nhap Ngay Sinh : " ; cin >> this->birthday.day;
        cout << "->Nhap Thang Sinh : " ; cin >> this->birthday.month;
        cout << "->Nhap Nam Sinh : " ; cin >> this->birthday.year;
        if(isTrueBirthday(this->birthday.day,this->birthday.month,this->birthday.year) == false)
            cout << "Ngay hoac Thang hoac Nam khong dung\n";
    }while(!isTrueBirthday(this->birthday.day,this->birthday.month,this->birthday.year));
}
void Person::displayInformtion() const{
    cout << fixed << setprecision(2)
    <<"-----------------------------------------\n"
    << "Ho va Ten : " << this->fName
    << "\nDia Chi   : " << this->Address
    << "\nSo Dien Thoai : "<< this->phoneNumber
    << "\nNam Sinh      : " << this->birthday.day << "/" 
    << this->birthday.month << "/"<< this->birthday.year << endl;
}
long Person::convertINT(const string &s){
    int len  = s.length();
    long num1 = 0;
    for(int i = len - 1; i >= 0; --i)
        num1+= static_cast<int>(s[i] - '0') * pow(10, len - i - 1);
    return num1;
}
long Person::setPassword(int &i)
{
    i++;
    string s = getDofB();
    long code = convertINT(s);
    return code;
}
string Person::getDofB(){
    int a = this->birthday.day;
    int b = this->birthday.month;
    int c = this->birthday.year;
    stringstream ss1, ss2, ss3;
    string s1, s2, s3;
    ss1 << a;
    ss1 >> s1;
    ss2 << b;
    ss2 >> s2;
    ss3 << c;
    ss3 >> s3;
    string connect = s1 + s2 + s3;
    return connect;
}