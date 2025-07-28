// Custom class to demonstrate multithreading
class MyThread extends Thread {
    private String threadName;

    // Constructor
    MyThread(String name) {
        this.threadName = name;
    }

    // Run method that executes when thread starts
    public void run() {
        for (int i = 1; i <= 3; i++) {
            System.out.println(threadName + " is running... Iteration: " + i);
            try {
                Thread.sleep(500); // Delay to simulate concurrent execution
            } catch (InterruptedException e) {
                System.out.println(threadName + " was interrupted.");
            }
        }
    }
}

// Main class
public class ExceptionThreadDemo {

    public static void main(String[] args) {
        // Display student info
        System.out.println("Name: Devanshi Arora");
        System.out.println("Roll Number: 2301641530065\n");

        // ========================
        // 1. Exception Handling
        // ========================
        try {
            System.out.println("Attempting division by zero...");
            int a = 10;
            int b = 0;
            int result = a / b; // This will throw ArithmeticException
            System.out.println("Result: " + result);
        } catch (ArithmeticException e) {
            System.out.println("Exception Caught: " + e);
        } finally {
            System.out.println("Finally block executed. Exception handling completed.\n");
        }

        // ========================
        // 2. Multithreading

        // ========================
        System.out.println("Starting Threads...\n");

        MyThread t1 = new MyThread("Thread-1");
        MyThread t2 = new MyThread("Thread-2");
        t1.start(); // Start first thread
        t2.start(); // Start second thread
    }
}
