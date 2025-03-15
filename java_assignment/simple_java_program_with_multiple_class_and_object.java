
class Person {
    String name;
    int age;
    // Method to print Person details
    void showDetails() {
        System.out.println("Name: " + name + ", Age: " + age);
    }
}
class Car {
    String brand;
    String model;
    // Method to print Car details
    void showDetails() {
        System.out.println("Car Brand: " + brand + ", Model: " + model);
    }
}
class Book {
    String title;
    String author;
    // Method to print Book details
    void showDetails() {
        System.out.println("Book Title: " + title + ", Author: " + author);
    }
}
public class simple_java_program_with_multiple_class_and_object {
    public static void main(String[] args) {
         // Object 1: Person
         Person person1 = new Person();
         person1.name="Alice";
         person1.age=25;
         person1.showDetails();
 
         // Object 2: Person
         Person person2 = new Person();
         person2.name="Bob";
         person2.age=30;
         person2.showDetails();

         // Object 3: Car
         Car car1 = new Car();
         car1.brand="Toyota";
         car1.model="Camry";
         car1.showDetails();
 
         // Object 4: Book
         Book book1 = new Book();
         book1.author="George Orwell";
         book1.title="1984";
         book1.showDetails();
    }
}
