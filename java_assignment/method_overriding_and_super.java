// Superclass
class Animal {
    // Property of the superclass
    String name;
    // Constructor of the superclass
    Animal(String name) {
        this.name = name;
        System.out.println("Animal's constructor is called.");
    }
    // Method of the superclass
    void sound() {
        System.out.println("Animal makes a sound.");
    }
}
// Subclass
class Dog extends Animal {
    // Additional property in the subclass
    String breed;
    // Constructor of the subclass
    Dog(String name, String breed) {
        // Call the superclass constructor using 'super'
        super(name);
        this.breed = breed;
        System.out.println("Dog's constructor is called.");
    }
    @Override
    void sound(){
        System.out.println("Dog barks.");
    }
    // Method to display properties of the subclass and superclass
    void displayDetails() {
        // Accessing the superclass property using 'super'
        System.out.println("Name: " + super.name);
        // Accessing the subclass property
        System.out.println("Breed: " + this.breed);
    }
}
public class method_overriding_and_super {
   public static void main(String[] args) {
    // Creating an object of the subclass Dog
    Dog dog = new Dog("Buddy", "Golden Retriever");
    // Display the details
    dog.displayDetails();
    // Calling the overridden sound method
    dog.sound();
   }
}
