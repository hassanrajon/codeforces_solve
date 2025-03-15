public class setters_getters {
    public static void main(String[] args) {
       Student s1 = new Student();
       // setters methods
       s1.setAge(15);
       s1.setName("razon");
       s1.setId(10);
       s1.setPassword("123456");
      //getters method
       System.out.println("student name is: "+s1.getName());
       System.out.println("student age: "+s1.getAge());
       System.out.println("student id: "+s1.getId());
       System.out.print("student password: "+s1.getPassword());
    }
}

class Student {

    String name;
    int age;
    private String password;
    private int id;
   // getters method to get value
    public String getName() {
        return name;
    }

    public int getAge() {
        return age;
    }

    public String getPassword() {
        return password;
    }

    public int getId() {
        return id;
    }
 // setters method to set values
    public void setName(String name) {
        this.name = name;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public void setPassword(String password) {
        this.password = password;
    }

    public void setId(int id) {
        this.id = id;
    }

}