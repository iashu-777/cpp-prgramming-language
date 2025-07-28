public class SumFromArgs {

    public static void main(String[] args) {

        System.out.println("Name: Devanshi Arora");
        System.out.println("Roll Number: 2301641530065\n");

        // Check if exactly two arguments are provided
        if (args.length != 2) {
            System.out.println("Please provide exactly two integer numbers as command-line arguments.");
            return;
        }

        try {
            // Parse command-line arguments to integers
            int num1 = Integer.parseInt(args[0]);
            int num2 = Integer.parseInt(args[1]);

            // Calculate the sum
            int sum = num1 + num2;

            // Display the result
            System.out.println("First Number: " + num1);
            System.out.println("Second Number: " + num2);
            System.out.println("Sum = " + sum);

        } catch (NumberFormatException e) {
            // Handle the case where input is not a valid integer
            System.out.println("Invalid input. Please enter valid integers only.");
        }
    }
}
