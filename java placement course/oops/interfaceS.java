public class interfaceS {
    public static void main(String[] args) {

        maruti m1 = new maruti();
        m1.color("red");
        
     System.out.println(m1.color);
    }
}
interface car {
    int seats=4;
    int lights = 5;
    void runs();
    void color(String color);
}
class maruti implements car{
    
    String color;
    @Override
    public void runs() {
        // TODO Auto-generated method stub
        System.out.println("runs soomthly");
    }
   
    @Override
    public void color(String color) {
        // TODO Auto-generated method stub
        this.color = color;
    }
}