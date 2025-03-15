public class static_keyword {
    public static void main(String[] args) {
        student s1 = new student();
        s1.school_name="Hashil High School";
        student s2= new student();
        // eikhane s2 er jonne amra kuno school name set kori nai, but tao
        // s2 er school name s1 er tai ashtese, karon eita static variable
        // r sobgula static properties e oi class er sobgula object share kore

        System.out.println(s2.school_name);
        s2.school_name="Paboi Shonar Bangla High School";
        student s3 = new student();
        //  s2 er school name change hobar karone sob gula
        // object er school name change hoye jabe
        System.out.println(s1.school_name);
        System.out.println(s3.school_name);


    }
}
class student{
 static String school_name;
 static int id = 45;

}