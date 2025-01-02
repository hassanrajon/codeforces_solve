#include <bits/stdc++.h>
using namespace std;
class Students
{
private:
    string password;
    int id;

public:
    string name;
    int age;
    Students()
    {
        cout << "this is non parameterized constructor" << endl;
        cout << "it will be called automatically at object creation" << endl;
    }
    // parameterized constructor
    Students(string name, int age)
    {  // this->property eita c++ e pointer, java te this.property likhlei hoy
        this->name = name;
        this->age = age;
    }
    //    constructor overloading or method overloading
    Students(int age, string name)
    {
        this->name = name;
       this->age = age;
    }
    void getInfo(){
        cout<<"name: "<<name<<endl;
        cout<<"age:  "<<age<<endl;

    }

};
int main()
{
    Students s1;
    Students s2(25, "razon hassan");
    Students s3("hello", 27);
    s2.getInfo();
    s3.getInfo();
}