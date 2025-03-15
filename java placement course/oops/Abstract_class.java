public class Abstract_class {

    public static void main(String[] args) {
        dog d = new dog();
        d.changeColor();
        d.walk();
        System.out.println(d.color);
        chicken ch = new chicken();
        ch.walk();
        System.out.println(ch.color);

    }
}
abstract class Animal{
    String color;
    void eat(){
        System.out.println("Animal's Eat");
    }
    abstract void walk();
    
    public Animal(String color) {
        this.color = color;
    }
    Animal(){
     color = "brown";
    } 
}
class dog extends Animal{
    void changeColor(){
        color="yellow";
     }
    @Override
    void walk() {
        // TODO Auto-generated method stub
      System.out.println("Dogs walk on 4 legs");

    }
}
class chicken extends Animal{
    void walk(){
        System.out.println("Chickens walks on 2 legs");
    }
    void changeColor(){
        color="red";
    }
}