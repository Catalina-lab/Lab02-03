/* 1. Se citeste de la tastatura un numar reprezentand temperatura masurata in Celsius / Fahrenheit/Kelvin. Convertiti numarul in cele 3 unitati de masura. (precizie 2 zecimale)
Input (tip u.m/valoare)         Output (Fahrenheit, Celsius, Kelvin)
C 0                             32.00 0.00 273.15
Input                           Output
K 42                            -384.07 -231.15 42.00
Input                           Output
F 0                             0.00 -17.78 255.37*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char tipul_unitatii;
    double tempK, tempC, tempF;

    tipul_unitatii = 'C';
    tipul_unitatii = 'K';
    tipul_unitatii = 'F';

    scanf("%c", &tipul_unitatii);
    scanf("%.2f", &tempC, &tempF, &tempK);

    if (tipul_unitatii = 'C') {
        printf("%.2f, %.2f, %.2f",  tempF = (9 / 5 * tempC + 32), tempC, tempK = (tempC + 273.15));
    } else if (tipul_unitatii = 'K') {
        printf("%.2f, %.2f, %.2f", tempF = (tempK * 9 / 5 - 459.67), tempC =(tempK - 273.15), tempK);
    } else if (tipul_unitatii = 'F') {
        printf("%.2f, %.2f, %.2f", tempF, tempC = ((tempF - 32) * 5 / 9), tempK = ((tempF + 459.67) * 5 / 9));
    }
    return 0;
}
