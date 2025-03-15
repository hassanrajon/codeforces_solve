import java.util.Stack;
public class st_in_java {
    public static void main(String[] args) {
       Stack<Integer> st = new Stack<Integer>();
       st.push(10);
       st.push(20);
       st.push(30);
       st.push(40);
       System.out.println("st: " + st);
       int topElement = st.peek();
       System.out.println("Top element (peek): " + topElement);
       int poppedElement = st.pop();
       System.out.println("Popped element: " + poppedElement);
       System.out.println("st after pop: " + st);
       if (st.isEmpty()) {
           System.out.println("st is empty");
       } else {
           System.out.println("st is not empty");
       }
       int position = st.search(20);
       if (position != -1) {
           System.out.println("Element 20 found at position: " + position);
       } else {
           System.out.println("Element 20 not found in the st");
       } 
    }
}
