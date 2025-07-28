// Student class definition
class Student {
    // Data members
    String name;
    String rollNo;

    // Method to display student details
    void displayDetails() {
        System.out.println("Student Name: " + name);
        System.out.println("Roll Number: " + rollNo);
    }
}

// Rectangle class definition
class Rectangle {
    // Data members
    double length;
    double width;

    // Method to calculate and display area
    void displayArea() {
        double area = length * width;
        System.out.println("Rectangle Length: " + length);
        System.out.println("Rectangle Width: " + width);
        System.out.println("Area of Rectangle: " + area);
    }
}

// Main class
public class StudentRectangleDemo {

    public static void main(String[] args) {
        // Display student info (as required) 
        System.out.println("Name: Aryan Mishra"); 
        System.out.println("Roll Number: 2301641540053\n");

        // Creating and using Student object
        Student s1 = new Student();
        s1.name = "Devanshi Arora";
        s1.rollNo = "2301641530065";

        s1.displayDetails();

        System.out.println(); // Blank line for readability

        // Creating and using Rectangle object
        Rectangle r1 = new Rectangle();
        r1.length = 10.5;
        r1.width = 5.2;
        r1.displayArea();
    }
}
