// Superclass (Level 1)
class Animal {
    // Method of the Animal class
    void eat() {
        System.out.println("Animal eats.");
    }
}
// Subclass (Level 2) that inherits from Animal
class Mammal extends Animal {
    // Method of the Mammal class
    void walk() {
        System.out.println("Mammal walks.");
    }
}
// Subclass (Level 3) that inherits from Mammal
class Dog extends Mammal {
    // Method of the Dog class
    void bark() {
        System.out.println("Dog barks.");
    }
}
public class multi_level_inheritance{
    public static void main(String[] args) {
        // Creating an object of the Dog class (Level 3)
        Dog dog = new Dog();
        // Calling methods from all levels of inheritance
        dog.eat();   // From Animal class (Level 1)
        dog.walk();  // From Mammal class (Level 2)
        dog.bark();  // From Dog class (Level 3)
    }
}
