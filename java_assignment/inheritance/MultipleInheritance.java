
// Interface 1
interface Animal {
    void sound(); // Abstract method
}
// Interface 2
interface Bird {
    void fly(); // Abstract method
}
// Class that implements both interfaces (achieving multiple inheritance)
class Bat implements Animal, Bird {
    // Implementing the method from Animal interface
    public void sound() {
        System.out.println("Bat makes a sound.");
    }

    // Implementing the method from Bird interface
    public void fly() {
        System.out.println("Bat can fly.");
    }
}
public class MultipleInheritance {
    public static void main(String[] args) {
        // Creating an object of the class Bat
        Bat bat = new Bat();
        // Calling the methods from both interfaces(multiple inheritance)
        bat.sound(); // From Animal
        bat.fly();   // From Bird
    }
}

