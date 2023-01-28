#include <bits/stdc++.h>
#include <conio.h>
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
         cout<<"************************************************************"<<endl;
    
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
        if(salary<=40000){
        cout<<" First Name : "<<FN<<endl;
        cout<<" Last Name  : "<<LN<<endl;
        cout<<"Phone : "<<id<<endl;
         cout<<"Preferable Language : "<<LName<<endl;
        cout<<"************************************************************"<<endl;
        cout<<"You have been selected for this junior developer post!"<<endl;
        cout<<"Congratulations !!"<<endl;
        cout<<"************************************************************"<<endl;
        cout<<"Final salary from Company : "<<total<<endl;
        cout<<"************************************************************"<<endl;
        }
        else{
            cout<<"Sorry! Your Salary demand is too high for this post!"<<endl;
            cout<<"Highest limit of salary is 40000 thousands taka only"<<endl;
            cout<<"************************************************************"<<endl;
        }

    }
};
int main(){
    employee o;
    o.getinfo();
    o.ln();
    o.totalSalary();
    o.showAll();
    getch();
    return 0;
}