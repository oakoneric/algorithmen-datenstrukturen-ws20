/*
------------------------------------------------------------------------------
ALGORITHMEN & DATENSTRUKTUREN
Eric Kunze
Github: https://github.com/oakoneric/algorithmen-datenstrukturen-ws20
Website: https://oakoneric.github.io/aud20.html
------------------------------------------------------------------------------
Aufgabe 1 d
------------------------------------------------------------------------------
*/

#include <stdio.h>

int main(){
    for (int i = 2; i <= 1000; i++) {
        int j = 2, prime = 1;
        while (j*j <= i) {
            if (i%j == 0) {
            prime = 0;
            break; // nicht notwendig
            }
        j++;
        }
        if (prime == 1)
        printf("%d ist prim\n", i);
    }

    return 0;
}