#include <bits/stdc++.h>
using namespace std;
class Teacher
{
private:
    int salary;
    int id;

public:
    string name;
    int age;

    void print_hello()
    {
        cout << "hello world" << endl;
    }
    void setSalary(int s){
        salary=s;
    }
    int getSalary(){
        return salary;
    }
    void setId(int idt){
        id = idt;
    }
    int getId(){
        return id;
    }
};
int main()
{
    Teacher t1;
    t1.age=25;
    t1.name="Razon Hassan";
    t1.setId(5);
    t1.setSalary(2000);
    cout<<t1.name<<endl;
    cout<<"Id= "<<t1.getId()<<" | salary= "<<t1.getSalary()<<endl;
}
