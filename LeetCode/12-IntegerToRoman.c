char * intToRoman(int num)
{
    // Tutti i simboli dispobibili
    char simboli[4][10][5] = {
                {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"},
                {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"},
                {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"},
                {"", "M", "MM", "MMM"}};
    char *res = calloc(1, 16);
    int m;

    for (m = 0; num > 0; num = num / 10, m++) {
        int d = num % 10;
        char *tmp = strdup(res);
        sprintf(res, "%s%s", simboli[m][d], tmp);
        free(tmp);
    }

    return res;
}