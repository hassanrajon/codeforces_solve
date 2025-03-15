import java.util.PriorityQueue;
import java.util.Deque;
import java.util.LinkedList;
import java.util.ArrayDeque;
public class CollectionExample {
    public static void main(String[] args) {
        System.out.println("=== PriorityQueue Example ===");
        PriorityQueue<Integer> pq = new PriorityQueue<>();
        pq.add(30);
        pq.add(10);
        pq.add(50);
        pq.add(20);
        System.out.println("Priority Queue: " + pq);
        while (!pq.isEmpty()) {
            System.out.println("Removed from PriorityQueue: " + pq.poll());
        }
        System.out.println("\n=== Deque Example (LinkedList) ===");
        Deque<String> deque = new LinkedList<>();
        deque.addFirst("Front");
        deque.addLast("Back");
        System.out.println("Deque: " + deque);
        System.out.println("Removed from front: " + deque.removeFirst());
        System.out.println("Removed from back: " + deque.removeLast());
        System.out.println("\n=== ArrayDeque Example ===");
        ArrayDeque<Integer> arrayDeque = new ArrayDeque<>();
        arrayDeque.offerFirst(10);
        arrayDeque.offerLast(20);
        System.out.println("ArrayDeque: " + arrayDeque);
        System.out.println("Removed from front: " + arrayDeque.pollFirst());
        System.out.println("Removed from back: " + arrayDeque.pollLast());
    }
}
