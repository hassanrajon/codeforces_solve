import java.io.*;
public class file_concatination {
  public static void main(String[] args) throws IOException {
    FileInputStream file1 = null;
    FileInputStream file2 = null;
    FileOutputStream out = null;
    SequenceInputStream file3 = null;
    try {
      file1 = new FileInputStream("D:/vs/academic_practise/a.txt");
      file2 = new FileInputStream("D:/vs/academic_practise/b.txt");
      file3 = new SequenceInputStream(file1, file2);
      BufferedInputStream inBuffer = new BufferedInputStream(file3);
      BufferedOutputStream OutBUffer = new BufferedOutputStream(System.out);
      out = new FileOutputStream("D:/vs/academic_practise/c.txt");
      int c;
      while ((c = inBuffer.read()) != -1) {
        out.write(c);
        OutBUffer.write(c);
      }
      inBuffer.close();
      OutBUffer.close();
    } finally {
      file1.close();
      file2.close();
      file3.close();
      out.close();
    }

  }
}
