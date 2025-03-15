import java.applet.Applet;
import java.awt.Color;
import java.awt.Graphics;
public class applet_graphics extends Applet{
    public void paint(Graphics g) {
        // Set background color to white
        setBackground(Color.WHITE);

        // Set color for the face
        g.setColor(Color.YELLOW);
        // Draw the face (a filled circle)
        g.fillOval(100, 100, 200, 200); // (x, y, width, height)

        // Set color for the eyes
        g.setColor(Color.BLACK);
        // Left eye (filled oval)
        g.fillOval(150, 150, 20, 20);
        // Right eye (filled oval)
        g.fillOval(230, 150, 20, 20);

        // Set color for the mouth
        g.setColor(Color.RED);
        // Draw a smile (arc)
        g.drawArc(150, 180, 100, 50, 0, -180); // (x, y, width, height, startAngle, arcAngle)
    }
}