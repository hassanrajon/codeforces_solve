import java.io.FileInputStream;
import java.io.FileOutputStream;
class practice_read_write {

    public static void main(String[] args) throws Exception {
        try {
            FileInputStream in = new FileInputStream("practice_read_write_input.txt");
            FileOutputStream out = new FileOutputStream("practice_read_write_output.txt");
            int c;
            while ((c = in.read()) != -1) {
                out.write(c);
            }
            in.close();
            out.close();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}