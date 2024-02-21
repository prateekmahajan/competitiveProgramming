import java.io.*;

public class template {
    public static void main(String[] args) {
        try (BufferedReader reader = new BufferedReader(new FileReader("java/input.txt"));
                PrintWriter writer = new PrintWriter(new FileWriter("java/output.txt"))) {

            String line;
            while ((line = reader.readLine()) != null) {
                try {
                    // ** CODE STARTS **
                    writer.println(line);
                    // ** CODE ENDS **
                } catch (NumberFormatException e) {
                    writer.println("Error:  " + e.getMessage());
                }
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}