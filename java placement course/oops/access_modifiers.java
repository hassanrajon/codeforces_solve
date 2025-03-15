public class access_modifiers {

    public static void main(String[] args) {
        bank_account b1 = new bank_account();
        b1.name = "razon hassan";
        b1.setPassword("helloworld");
        System.out.println(b1.name);
    }

   
}

class bank_account {
    public String name;
    private String password;

    public void setPassword(String pwd) {
        password = pwd;
    }
}