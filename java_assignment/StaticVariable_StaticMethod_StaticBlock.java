public class StaticVariable_StaticMethod_StaticBlock {
     // Static variable
     static int staticVar;
     // Static block: This is executed when the class is first loaded
     static {
         System.out.println("Static block is executed.");
         staticVar = 10; // Initialize the static variable
     }
     // Static method
     static void display() {
         System.out.println("Static method is called.");
         System.out.println("Static variable value: " + staticVar);
     }
     // Constructor (just for demonstration, not related to static elements)
     StaticVariable_StaticMethod_StaticBlock() {
         System.out.println("Constructor is called.");
     }
    public static void main(String[] args) {
         // Call the static method (no need to create an object)
         StaticVariable_StaticMethod_StaticBlock.display();
         // Modify the static variable
         StaticVariable_StaticMethod_StaticBlock.staticVar = 20;
         // Call the static method again to see the updated value
         StaticVariable_StaticMethod_StaticBlock.display();
         // Create an object (constructor will be called)
         StaticVariable_StaticMethod_StaticBlock obj = new StaticVariable_StaticMethod_StaticBlock();
    }
}