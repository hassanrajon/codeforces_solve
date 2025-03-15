import java.util.*;
public class testPriorityQueue {
    public static void main(String[] args) {
        PriorityQueue<String> pq = new PriorityQueue<String>();
        pq.add("aaaaaaaaa");
        pq.add("bbbbbbbbb");
        pq.add("ccccccccc");
        System.out.println("Front: "+pq.element());
        System.out.println("Front: "+pq.peek());
        System.out.println("Iterating elements: ");
        Iterator<String> it = pq.iterator();
        while (it.hasNext()) {
            System.out.println(it.next());
        }
        pq.remove();
        pq.poll();
        System.out.println("elements after removing: ");
        Iterator<String> it2 = pq.iterator();
        while (it2.hasNext()) {
            System.out.println(it2.next());
        }
    }
}
