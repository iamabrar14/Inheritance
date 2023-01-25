#include <bits/stdc++.h>
using namespace std;
class students{
    public:
   long int id;
    string FN;
    string LN;
    float salary;
    void getinfo(){
        cout<<"Welcome to Tech For Everyone"<<endl;
        cout<<"Please fill up these information for interview purpose "<<endl;
        cout<<"************************************************************"<<endl;
        cout<<"Enter your phone number: ";
        cin>>id;
        cout<<"Your first name : ";
        cin>>FN;
        cout<<"Your last name : ";
        cin>>LN;
        }
};
class programmers : public students{
    public:
    string LName;
    void ln(){
        cout<<"Your preferable programming Language : ";
        cin>>LName;
        cout<<"Your expected salary : ";
        cin>>salary;
}
};
class employee : public programmers{
    public:
    float total;
    float bonus;
    void totalSalary(){
        bonus=salary*0.1;
        total=salary+bonus;
        //cout<<"So your final salary will be : "<<total<<endl;
    }
    void showAll(){
        cout<<" First Name : "<<FN<<endl;
        cout<<" Last Name  : "<<LN<<endl;
        cout<<"ID : "<<id<<endl;
         cout<<"Preferable Language : "<<LName<<endl;
        cout<<"************************************************************"<<endl;
        cout<<"You have been selected for this junior developer post!"<<endl;
        cout<<"Congratulations !!"<<endl;
        cout<<"************************************************************"<<endl;
        cout<<"Final salary from Company : "<<total<<endl;
        cout<<"************************************************************"<<endl;

    }
};
int main(){
    employee o;
    o.getinfo();
    o.ln();
    o.totalSalary();
    o.showAll();
    return 0;
}