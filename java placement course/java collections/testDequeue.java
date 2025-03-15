import java.util.*;

public class testDequeue {
    public static void main(String[] args) {
        int n;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        Deque<String> dq = new ArrayDeque<>();
        for (int i = 0; i < n; i++) {
            String s;
            s = sc.next();
            dq.add(s);
        }
        Iterator<String> it = dq.iterator();
        while (it.hasNext()) {
            System.out.println(it.next());
        }
        
        sc.close();
    }
}
