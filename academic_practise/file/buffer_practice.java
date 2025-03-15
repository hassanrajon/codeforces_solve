import java.io.*;
public class buffer_practice {
    public static void main(String[] args)throws Exception {
        try{
           FileInputStream file1 = new FileInputStream("practice_read_write_input.txt");
           FileInputStream file2 = new FileInputStream("practice_read_write_output.txt");
           SequenceInputStream file3 = new SequenceInputStream(file1,file2);
           BufferedInputStream in = new BufferedInputStream(file3);
           FileOutputStream out = new FileOutputStream("result.txt");
           int c;
           while((c=in.read())!=-1){
             out.write(c);
           }
           file1.close();
           file2.close();
           out.close();

        }catch(Exception e){
            
        }
    }
}
