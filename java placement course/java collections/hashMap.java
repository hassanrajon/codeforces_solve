import java.util.*;

public class hashMap {
    public static void main(String[] args) {
        HashMap<String,Integer>mp=new HashMap<String,Integer>();
        int n;
        Scanner sc = new Scanner(System.in);
        n=sc.nextInt();
        for(int i=0;i<n;i++){
            String s;
            s = sc.next();
            if(mp.containsKey(s)){
                mp.put(s, mp.get(s)+1);
            }else{
               mp.put(s,1) ;
            }
        }
        sc.close();
        System.out.println("keys: \n");
        for(String i:mp.keySet()){
            System.out.println(i);
        }
        System.out.println("values: \n");
        for(int i :mp.values()){
            System.out.println(i);
        }
        System.out.println("keys and values: \n");
        for(String i:mp.keySet()){
            System.out.println(i+" "+mp.get(i));
        }

    }
}
