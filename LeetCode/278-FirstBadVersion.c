// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n) {
        // Variabili locali per non avere problemi di overflow
        unsigned int a = 0, b;
        while (true) {
            // Per cercare il numero centrale
            b = (a + n) / 2;
            
            // Controlliamo se  è una "badVersion"
            if (isBadVersion(b) == true)
                n = b;
            
            // Se non lo è la prossima potrebbe esserlo, quindi b + 1
            else 
                a = b + 1;
        
            // Confrontiamo a e n e, se sono uguali, n sarà la prima "badVersion"
            if (a == n)
                return n;
        }
}