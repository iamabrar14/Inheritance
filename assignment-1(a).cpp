#include <iostream>
using namespace std;
// Base class
class Employee {
  protected: // Protected access specifier
    int salary;
};
// Derived class
class Programmer: protected Employee {
  public:
    int bonus;
    void setSalary(int s) {
      salary = s;
    }
    int getSalary() {
      return salary;
    }
    int total(int s){
        return bonus+s;
    }
};

int main() {
  Programmer myObj;
  int sal,bon;
  cout<<"Enter Salary: ";
  cin>>sal;
  bon=sal*0.10;
  myObj.setSalary(sal);
  myObj.bonus =bon;
  cout << "Salary: " << myObj.getSalary() << "\n";
  cout << "Bonus: " << myObj.bonus << "\n";
  cout<<"Total : "<<myObj.total(sal)<<endl;
  return 0;
}