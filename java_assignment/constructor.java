public class constructor {
    public static void main(String[] args) {
        // Object 1: Person
        Person person1 = new Person("Alice",25);
        person1.showDetails();
        // Object 2: Person
        Person person2 = new Person("Bob",30);
        person2.showDetails();
        // Object 3: Car
        Car car1 = new Car("Toyota","Camry");
        car1.showDetails();
        // Object 4: Book
        Book book1 = new Book("1984","George Orwell");
        book1.showDetails();
    }
}
class Person {
    String name;
    int age;
    // Constructor for Person
    Person(String name, int age) {
        this.name = name;
        this.age = age;
    }
    // Method to print Person details
    void showDetails() {
        System.out.println("Name: " + name + ", Age: " + age);
    }
}
class Car {
    String brand;
    String model;
    // Constructor for Car
    Car(String brand, String model) {
        this.brand = brand;
        this.model = model;
    }
    // Method to print Car details
    void showDetails() {
        System.out.println("Car Brand: " + brand + ", Model: " + model);
    }
}
class Book {
    String title;
    String author;
    // Constructor for Book
    Book(String title, String author) {
        this.title = title;
        this.author = author;
    }
    // Method to print Book details
    void showDetails() {
        System.out.println("Book Title: " + title + ", Author: " + author);
    }
}