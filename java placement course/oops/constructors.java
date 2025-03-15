public class constructors {
    public static void main(String[] args) {
        Student s1 = new Student(10);
        Student s2 = new Student("razon");
        Student s3 = new Student("razon", 15, 01);
        s1.setId(50);
        s1.setName("first boy");
        s2.setAge(50);
        // System.out.println(s3.getName());

        // for copy constructors
        s3.marks[0] = 100;
        s3.marks[1] = 50;
        s3.marks[2] = 80;
        Student s4 = new Student(s3);
       
        // s3 er property s4 e copy korar por s3 er mark change kora hoise,,
        // so, s4 er mark change hobar kotha na, cz copy agei kora hoise,,
        // but shallow copy korle change hobe, deep copy korle change hobe na
        s3.marks[2]=100;
        /*
        eikhane deep copy hobar jonne s3 er marks change korleo s4 er mark change hobe na
        but, shallow copy korle s3 er mark change korle s4 er mark o change hoye jabe,
        karon shallow copy te reference copy hoy shudhu
        */ 
        for(int i=0;i<3;i++){
            System.out.println(s4.marks[i]);
        }
     

    }
}

class Student {
    String name;
    private int age;
    private int id;
    int marks[];

    // constructors
    Student(String name) {
        marks = new int[3];
        this.name = name;
    }

    Student(int age) {
        marks = new int[3];
        this.age = age;
    }

    Student(String name, int age) {
        marks = new int[3];
        this.name = name;
        this.age = age;
    }

    Student(String name, int age, int id) {
        marks = new int[3];
        this.name = name;
        this.age = age;
        this.id = id;
    }

    // copy constructors
    Student(Student s1) {
        marks = new int[3];
        this.name = s1.name;
        this.age = s1.age;
        this.id = s1.id;
        // this is deep copy
        for (int i = 0; i < 3; i++) {
            this.marks[i] = s1.marks[i];
        }

        /*
         * this is for shallow copy
         * 
         * 
         * 
         * eivabe copy korle reference copy hoy,,,
         * new j object e ager object er property copy korbe,,ager ta te valu
         * change korle new ta teo change hoye jabe,,,shallow copy te
         * 
         */
        // this.marks=s1.marks;
    }

    // setters
    public void setName(String name) {
        this.name = name;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public void setId(int id) {
        this.id = id;
    }
    // getters

    public String getName() {
        return name;
    }

    public int getAge() {
        return age;
    }

    public int getId() {
        return id;
    }

}