// Tabella da cui pescare i valori
unsigned int tabella[90] = {
    ['I'] = 1,
    ['V'] = 5,
    ['X'] = 10,
    ['L'] = 50,
    ['C'] = 100,
    ['D'] = 500,
    ['M'] = 1000
};

int romanToInt(char * s){
    int ris = 0;
    char next;
    while (*s != '\0') {
        next = *(s+1);
        if (tabella[*s] < tabella[next])
            ris -= tabella[*s];
        else
            ris += tabella[*s];
        s++;
    }
    return ris;
}