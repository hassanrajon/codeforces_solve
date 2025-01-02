#include <bits/stdc++.h>
using namespace std;
class students
{
public:
    string name;
    int age;
    void getInfo()
    {
        cout << "name: " << name << endl;
        cout << "age: " << age << endl;
    }
    students()
    {
    }
    students(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};
int main()
{
    students s1;
    s1.name = "razon";
    s1.age = 52;
    //    default copy constructor
    students s2(s1);
    s2.name="hassan";

    // eikhane s1 er sob kisu copy hoye s2 te jabe, but amon kuno constructor
    // banai nai,,eita c++ e by default thake
    s1.getInfo(); 
    s2.getInfo();
}