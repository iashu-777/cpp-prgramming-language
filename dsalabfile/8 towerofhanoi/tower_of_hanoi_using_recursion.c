// 1) Algorithm towerOfHanoi(n, source, destination, auxiliary)
// 2) Pre: n is the number of disks, source, destination, auxiliary are the names of the rods
// 3) Post: The sequence of moves to solve the Tower of Hanoi puzzle is printed
// 4) if n == 1
// 5)     print "Move disk 1 from rod source to rod destination"
// 6)     return
// 7) end if
// 8) towerOfHanoi(n - 1, source, auxiliary, destination)   // Move n-1 disks from source to auxiliary using destination
// 9) print "Move disk n from rod source to rod destination"
// 10) towerOfHanoi(n - 1, auxiliary, destination, source)   // Move n-1 disks from auxiliary to destination using source
// 11) end towerOfHanoi


#include <stdio.h>

// Recursive function to solve Tower of Hanoi
void towerOfHanoi(int n, char source, char destination, char auxilliary) {
    if (n == 1) {
        // Base case: Move a single disk directly
        printf("Move disk 1 from rod %c to rod %c\n", source, destination);
        return;
    }
    
    // Move n-1 disks from 'source' to 'auxilliary' using 'destination'
    towerOfHanoi(n - 1, source, auxilliary, destination);

    // Move the nth disk from 'source' to 'destination'
    printf("Move disk %d from rod %c to rod %c\n", n, source, destination);

    // Move the n-1 disks from 'auxilliary' to 'destination' using 'source'
    towerOfHanoi(n - 1, auxilliary, destination, source);
}

int main() {
    int n;  // Number of disks
    printf("Enter the number of disks: ");
    scanf("%d", &n);

    // Call the Tower of Hanoi function
    printf("The sequence of moves to solve the Tower of Hanoi is:\n");
    towerOfHanoi(n, 'A', 'C', 'B');  // A, B, C are names of the rods
    return 0;
}
