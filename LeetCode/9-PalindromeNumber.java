class Solution {
    public boolean isPalindrome(int x) {
        // Condizione Base
        if (x < 0) {
            return false;
        }
        // Salviamo il valore nella variabile "number"
        int number = x;
        // Variabile per leggere il numero reverse
        int reverse = 0;
        while (number > 0) {
            reverse = reverse * 10 + number % 10;
            number /= 10;
        }
        return x == reverse;
    }
}
