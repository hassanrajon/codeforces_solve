import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
public class java_gui_program {
    public static void main(String[] args) {
         JFrame frame = new JFrame("Simple Form");
         frame.setSize(1000, 500);
         frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
         frame.setLayout(new GridLayout(3, 2));
         JLabel nameLabel = new JLabel("Name:");
         JTextField nameField = new JTextField();
         JLabel ageLabel = new JLabel("Age:");
         JTextField ageField = new JTextField();
         JButton submitButton = new JButton("Submit");
         submitButton.addActionListener(new ActionListener() {
             public void actionPerformed(ActionEvent e) {
                 String name = nameField.getText();
                 String age = ageField.getText();
                 JOptionPane.showMessageDialog(frame, "Name: " + name + "\nAge: " + age);
             }
         });
         frame.add(nameLabel);
         frame.add(nameField);
         frame.add(ageLabel);
         frame.add(ageField);
         frame.add(submitButton);
         frame.setVisible(true);
    }
}
