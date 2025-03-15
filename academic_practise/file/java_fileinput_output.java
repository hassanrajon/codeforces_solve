import java.io.*;
public class java_fileinput_output {
  public static void main(String[] args)throws Exception {
    FileInputStream in = null;
    FileOutputStream out = null;
    try {
      in = new FileInputStream("D:/vs/academic_practise/file/Triangle.txt");
      out = new FileOutputStream("D:/vs/academic_practise/file/out.txt");
      int c;
      while ((c = in.read()) != -1) {
        out.write(c) ;
      }
      

    } finally {
      in.close();
      out.close();
    }
  }

}