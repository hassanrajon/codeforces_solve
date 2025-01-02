#include <bits/stdc++.h>
using namespace std;
class students
{
public:
    string name;
    double *heightPtr; // dynamic memory allocation
    
    students(string name, double height)
    {
        this->name = name;
        heightPtr = new double;
        *heightPtr = height;
    }
    void getInfor(){
        cout<<"name: "<<name<<endl;
        cout<<"height: "<<*heightPtr<<endl;
    }
};
class teachers{
    public:
    string name;
    int* id;
    //  deep copy constructor
    teachers(){

    }
    teachers(teachers &obj){
      this->name=obj.name;
      id = new int;
      *(this->id)=*(obj.id);
    }
    void getInfo(){
        cout<<"name: "<<name<<endl;
        cout<<"id: "<<*id<<endl;
    }
};
int main()
{
    students s1("razon",5.7);
    students s2(s1);
    // ! eikhane shallow copy
    /*
     eikhane default copy constructor call hoise, so eikhane shallow copy hobe
     ,,shallow copy te dynamic memory gula copy hoy na, shudhu reference copy 
     hoy,,tar jonne s2 er height change korle seta s1 er height o change kore felbe 
     
     */
    *(s2.heightPtr)=20.00;
    s1.getInfor();
    s2.getInfor();

cout<<"---------------------"<<endl;
    //!  eikhane  deep copy
   /*
   dynamic memory allocation hoile setar deep copy by default hoy na
   manually kora lage
   */
   teachers t1;
   t1.name="nayan";
   *(t1.id)=10;
   teachers t2(t1);
   *(t2.id)=30;
   t1.getInfo();
   t2.getInfo();
}