import java.util.Vector;
public class vector_in_java {
    public static void main(String[] args) {
        Vector<String>vec = new Vector<String>();
        vec.add("A");
        vec.add("V");
        vec.add("c");
        vec.add("d");
        vec.add("e");
        vec.add("f");
        System.out.println(vec);
        vec.set(5, "razon");
        System.out.println(vec);
    }
}
