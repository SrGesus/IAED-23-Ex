/*
Conversão de Temperaturas

Programa que escreve uma tabela de conversão de temperaturas da escala Fahrenheit para escala Celsius
*/

#include <stdio.h>
#include <unistd.h>

#define INF 0
#define SUP 300
#define INC 20

int main() {
    float fahr, celsius;
    for(fahr = INF; fahr <= SUP; fahr += INC) {
        /*Celsius-Fahrenheit conversion formula*/
        celsius = 5*(fahr-32)/9;
        printf("F: %3.0f\tC: %5.1f\n", fahr, celsius);
        sleep(1);
    }
    return 0;
}