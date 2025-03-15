import java.util.*;
public class stackTest {
    public static void main(String[] args) {
        Stack<String>st= new Stack<>();
        st.push("a");
        st.push("b");
        st.push("c");
        Iterator<String> it = st.iterator();
        while (it.hasNext()) {
            System.out.println(it.next());
        }

    }
}
