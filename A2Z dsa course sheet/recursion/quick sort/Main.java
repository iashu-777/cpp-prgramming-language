import java.util.*;

class Main {
    static final long MOD = 1_000_000_007;
    static int N, M;
    static int[] A, rB;
    static long[][] memo;

    static long solve(int i, int j) {
        // Base case
        if(i == 0 || j == 0) return 1;

        // Check memo
        if(memo[i][j] != -1) return memo[i][j];

        long result;

        if(A[i-1] == rB[j-1]) {
            // Match - 3 choices
            result = (solve(i-1, j)      // skip A[i]
                   + solve(i, j-1)       // skip revB[j]
                   + solve(i-1, j-1))    // use both
                   % MOD;
        } else {
            // No match - inclusion exclusion
            result = (solve(i-1, j)      // skip A[i]
                   + solve(i, j-1)       // skip revB[j]
                   - solve(i-1, j-1)     // remove double count
                   + MOD)               // prevent negative
                   % MOD;
        }

        memo[i][j] = result;
        return result;
    }

    public static long solve(int n, int m, int[] a, int[] b) {
        N = n; M = m; A = a;

        // Reverse B
        rB = new int[m];
        for(int i = 0; i < m; i++)
            rB[i] = b[m-1-i];

        // Init memo
        memo = new long[N+1][M+1];
        for(long[] row : memo)
            Arrays.fill(row, -1);

        // Answer - 1 to remove empty subsequence
        return (solve(N, M) - 1 + MOD) % MOD;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int[] A = new int[n];
        int[] B = new int[m];
        for(int i = 0; i < n; i++) A[i] = sc.nextInt();
        for(int i = 0; i < m; i++) B[i] = sc.nextInt();
        System.out.println(solve(n, m, A, B));
    }
}