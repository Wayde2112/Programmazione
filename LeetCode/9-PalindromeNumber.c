bool isPalindrome(int x) {
    // Condizione Base
    if (x < 0) return false;
    // Variabile Reverse
    long reverse = 0;
    // Variabile numero
    long numero=x;
    while (numero > 0) {
        reverse = reverse * 10 + numero % 10;
        numero /= 10;
    }
    return (reverse == x);
}