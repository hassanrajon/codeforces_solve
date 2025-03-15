public class SingleInheritance {
    public static void main(String[] args) {
      dog dg = new dog("first_dog", "red");
    //   here name is an inherited property
      dg.name="Animal";
    //  here sleep is an inherited method 
      dg.sleep();
    //   subclass method
      dg.display();
    }
}
class Animal{
    String name;
    int age;
    Animal(String name,int age){
        this.name=name;
        this.age=age;
    }
    Animal(){

    }
    void sleep(){
        System.out.println("Animal sleeps");
    }
   
}
class dog extends Animal{
    String dog_name;
    String color;
    dog(String dog_name,String color){
        this.dog_name=dog_name;
        this.color=color;
    }
    void display(){
        System.out.println("Super class: "+this.getClass().getSuperclass().getName());
         System.out.println("Dog name: "+this.dog_name);
         System.out.println("Dog color: "+this.color);
    }
}
