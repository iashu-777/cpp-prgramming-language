package studentinfo;

public class Student {
    public String name; 
    public String rollNo;

    public Student(String name, String rollNo) {
        this.name = name;
        this.rollNo = rollNo;
    }

    public void display() { 
        System.out.println("Student Name: " + name); 
        System.out.println("Roll Number: " + rollNo);
    }
}
