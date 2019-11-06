#include "Account.h"

long Account::convertINT(const string &s){
    int len  = s.length();
    long num = 0;
    for(int i = len - 1;i >= 0; --i)
        num += static_cast<int>(s[i] - '0') * pow(10, len - i - 1);
    return num;
}
unsigned long Account::setID(){

}
string Account::setCode() const{
    char str1[10] = {(char)this->birthday.day};
    char str2[10] = {(char)this->birthday.month};
    char str3[10] = {(char)this->birthday.year};
    char str4[50];
    strcat(str4,str1);
    strcat(str4,str2);
    strcat(str4,str3);
    return str4;
}
long Account::setPassword(int &i)
{
    i++;
    string s = getDofB();
    long code = convertINT(s);
    return code;
}
// bool Account::loginSuccess(){
    
// }
// bool Account::loginFailed(){

// }
