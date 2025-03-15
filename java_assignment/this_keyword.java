class Student {
    String name;
    int age;
    Student() {
        // Using 'this' to call another constructor (constructor chaining)
        this("Unknown", 18); 
        System.out.println("Default constructor called.");
    }
    Student(String name, int age) {
        // Using 'this' to refer to instance variables
        this.name = name;
        this.age = age;
        System.out.println("Parameterized constructor called.");
    }
    void setDetails(String name, int age) {
        // Using 'this' to differentiate between instance variables and parameters
        this.name = name;
        this.age = age;
    }
    void displayDetails() {
        System.out.println("Student Name: " + this.name);
        System.out.println("Student Age: " + this.age);
    }
    // Method to return the current class instance
    Student getInstance() {
        return this;
    }
     // A method to demonstrate 'this' to call another method
    void show() {
        System.out.println("Show method called.");
        // calling another method of the same class
        this.displayDetails();
    }
}
public class this_keyword {
    public static void main(String[] args) {
     Student student1 = new Student(); 
     student1.displayDetails();
     System.out.println();
     Student student2 = new Student("Alice", 21);
    //  calls show() method which internally another method with "this" keyword
     student2.show(); 
     System.out.println();
     // Updating student2 details using setDetails method
     student2.setDetails("Bob", 22);
     student2.displayDetails();
     System.out.println();
     // Returning the current instance using getInstance method
     Student instance = student2.getInstance();
     instance.displayDetails();  
    }
}
