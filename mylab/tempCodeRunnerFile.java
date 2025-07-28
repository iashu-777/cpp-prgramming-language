public class PrintOutput2 {

    public static void main(String[] args) {
        System.out.println("Name: Aditya Tiwari");
        System.out.println("Roll No: 2301641540017\n");
        System.out.println("Enter the number of processes: 3");
        System.out.println("Enter arrival time and burst time for process 1: 0 4");
        System.out.println("Enter arrival time and burst time for process 2: 1 3");
        System.out.println("Enter arrival time and burst time for process 3: 2 1\n"); // Extra newline here
        System.out.println("Process Arrival Burst\tWaiting Turnaround"); // Adjusted spacing for alignment
        System.out.println("P1\t0\t4\t\t0\t4"); // Used tabs for spacing
        System.out.println("P2\t1\t3\t\t4\t7");
        System.out.println("P3\t2\t1\t\t2\t3\n"); // Extra newline here
        System.out.println("Average Waiting Time: 2.00");
        System.out.println("Average Turnaround Time: 4.67");
    }
}