package mylab;

import studentinfo.Student;

public class StudentPackageDemo {
    public static void main(String[] args) {
        // Display your own details 
        System.out.println("Name: Devanshi Arora");
        System.out.println("Roll Number: 2301641530065\n");

        // Create object of Student class from studentinfo package 
        Student s = new Student("Devanshi Arora", "2301641530065"); 
        s.display(); // Call method to display details
    }
}
