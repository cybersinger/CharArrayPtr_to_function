#include <stdio.h>
#include <string.h>

// Poenta programa: user unosi pet slova, main poziva funkciju da ih sortira, prima i prikazuje niz
// Korisno:
// 1. Unos karaktera u char array, i prosledjivanje pointera na prvo mesto tog niza funkciji
// 2. Funkcija prima pointer, premesta mesta varijabli u memoriji na osnovu vrednosti koje su uskladistene na tim lokacijama, i vraca Main-u pointer na pocetak tog sortiranog niza.

char* sortStr(char* ptr)
{
    int t, i, j;
    for (j = 0; j < 5; j++)
    {
        for (i = 0; i < 5; i++)
        {
            if (ptr[i] > ptr[j])
            {
                t = ptr[j];
                ptr[j] = ptr[i];
                ptr[i] = t;
            }
        }
    }
    return ptr;
}

main() {
    int n, i;
    char str[5];
    printf("Unesi niz od 5 slova: \n");
    for (n=0; n<5; n=n+1) // nisam nasao nacin da koristim strlen(str) ovde, davao mi je prevelike vrednosti...
        scanf_s(" %c", &str[n]); // white space pre %c. Objasnjenje: The %c conversion specifier won't automatically skip any leading whitespace, so if there's a stray newline in the input stream (from a previous entry, for example) the scanf call will consume it immediately.
    char* retStr = sortStr(str);
    printf("\nSortirani niz:\n");
    for (i = 0; i < 5; i++)
        printf("%c", retStr[i]);
}