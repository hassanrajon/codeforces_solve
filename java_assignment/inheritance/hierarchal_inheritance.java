// Superclass (Parent class)
class Animal {
    // Method of the Animal class
    void eat() {
        System.out.println("Animal eats.");
    }
}
// Subclass 1 (inherits from Animal)
class Dog extends Animal {
    // Method of the Dog class
    void bark() {
        System.out.println("Dog barks.");
    }
}
// Subclass 2 (inherits from Animal)
class Cat extends Animal {
    // Method of the Cat class
    void meow() {
        System.out.println("Cat meows.");
    }
}
public class hierarchal_inheritance {
    public static void main(String[] args) {
        // Creating an object of the Dog class
        Dog dog = new Dog();
        dog.eat();  // Inherited from Animal
        dog.bark(); // Defined in Dog

        System.out.println();

        // Creating an object of the Cat class
        Cat cat = new Cat();
        cat.eat();  // Inherited from Animal
        cat.meow(); // Defined in Cat
    }
}
