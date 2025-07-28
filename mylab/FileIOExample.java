package mylab;

import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class FileIOExample {

    public static void main(String[] args) {
        // Display student information
        System.out.println("Name: Ashish Kumar Gupta");
        System.out.println("Roll Number: 2301641540057\n");

        // Define file names
        String inputFile = "input.txt";
        String outputFile = "output.txt";
        FileReader reader = null;
        FileWriter writer = null;

        try {
            // Open input file to read
            reader = new FileReader(inputFile);
            // Open output file to write
            writer = new FileWriter(outputFile);

            int character;
            // Read characters one by one and write to output file
            while ((character = reader.read()) != -1) {
                writer.write(character);
            }
            System.out.println("Data successfully copied from input.txt to output.txt.");

        } catch (IOException e) {
            System.out.println("An error occurred: " + e.getMessage());

        } finally {
            // Always close resources in finally block
            try {
                if (reader != null)
                    reader.close();
                if (writer != null)
                    writer.close();
            } catch (IOException e) {
                System.out.println("Error while closing files: " + e.getMessage());
            }

        }
    }
}
