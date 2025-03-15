public class super_keyword {
    public static void main(String[] args) {
     dog d1 = new dog("bagha", "red")  ;
     System.out.println(d1.color);  
      
    }
}
class animal{
    String color;
    animal(){
        System.out.println("animals constructor is called");

    }
    void print_hello(){
        System.out.println("Super keyword is used");
    }
}
class dog extends animal {
    String name;

    dog(String name,String color){
       this.name=name;
       super.color=color;
       super.print_hello();
    }
}