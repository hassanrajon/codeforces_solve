abstract class Animal{
    abstract void sound();
    void sleep() {
        System.out.println("Animal is sleeping.");
    }
}
class Dog extends Animal {
    @Override
    void sound() {
        System.out.println("Dog barks.");
    }
}
final class FinalDog extends Dog {
    @Override
    void sound() {
        System.out.println("FinalDog barks differently.");
    }
}
public class finalClasses_and_abstractMethod {
    public static void main(String[] args) {
         FinalDog finalDog = new FinalDog();
         finalDog.sound();
         finalDog.sleep();
    }
}
