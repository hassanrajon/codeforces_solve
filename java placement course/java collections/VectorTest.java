import java.util.*;;

public class VectorTest {
    public static void main(String[] args) {
        Vector<String> v = new Vector<>();
        v.add("a");
        v.add("b");
        v.add("c");
        Iterator<String> it = v.iterator();
        while (it.hasNext()) {
            System.out.println(it.next());
        }
    }
}
