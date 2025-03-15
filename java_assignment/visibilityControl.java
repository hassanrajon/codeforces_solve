class Parent {
    public String publicVar = "I am public";
    private String privateVar = "I am private";
    protected String protectedVar = "I am protected";
    String defaultVar = "I am default (package-private)";
    public void showPrivateVar() {
        System.out.println(privateVar);
    }
}
class Child extends Parent {
    public void display() {
        System.out.println(publicVar);    
        // System.out.println(privateVar);
        System.out.println(protectedVar);
        System.out.println(defaultVar);
    }
}
public class visibilityControl {
    public static void main(String[] args) {
        Parent parent = new Parent();
        Child child = new Child();
        System.out.println("Parent class:");
        parent.showPrivateVar();
        System.out.println("\nChild class:");
        child.display();
    }
}
