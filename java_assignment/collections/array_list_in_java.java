import java.util.ArrayList;
public class array_list_in_java {
    public static void main(String[] args) {
        ArrayList<Integer>arr=new ArrayList<Integer>();
        for(int i=0;i<10;i++){
            arr.add(i*2);
        }
        arr.set(0, 10);
        arr.remove(5);
        System.out.println(arr);
    }
}
