/*2. Se dau doua intervale orare specificate prin ore, minute si secunde (hh:mm:ss). Determinati numarul de ore, minute si secunde dintre cele doua intervale. Se considera timpul de la primul interval la al doilea.
Input                    Output
23:00:00 01:00:00        h=2
                         m=0
                         s=0
                         */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void)
{
    int h1, m1, s1; //primul interval orar
    int h2, m2, s2; //al doilea interval orar
    int h, m, s; //output-ul final

    scanf("%d:%d:%d", &h1, &m1, &s1);
    scanf("%d:%d:%d", &h2, &m2, &s2);

    h = (h2 + 24) - h1;

    m = abs(m2 - m1);

    s = abs(s2 - s1);

    printf("h=%d\n m=%d\n, s=%d", h, m, s);

    return 0;
}
