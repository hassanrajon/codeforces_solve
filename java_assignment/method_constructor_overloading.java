public class method_constructor_overloading {
    public static void main(String[] args) {
        // demostration of constructor overloadin
        Person razon = new Person();
        Person hassan = new Person(24, "hassan");
        Person person3 = new Person("person3", 24);
        // demostration of method overloadin
        razon.showDetails(20, 40);
        hassan.showDetails(5);
        person3.showDetails();
    }
}

class Person {
    String name;
    int age;
    // constructor overloading

    // non parameterized constructor
    Person() {
    }

    // parameterized constructor
    Person(String name, int age) {
        this.name = name;
        this.age = age;
    }

    Person(int age, String name) {
        this.name = name;
        this.age = age;
    }

    // method overloading
    void showDetails(int n) {
        for (int i = 0; i < n; i++) {
            System.out.println(this.name);
        }
    }

    void showDetails(int a, int b) {
        System.out.println(a + b);
    }

    void showDetails() {
        System.out.println("Name: " + this.name + ", Age: " + this.age);
    }
}