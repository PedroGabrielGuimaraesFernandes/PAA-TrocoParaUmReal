#include <stdio.h>

int troco(int valor, int cont) {
    int moedas = 0;
    if (valor >= 50) {
        moedas = valor / 50;
        valor -= moedas * 50;
        cont += moedas;
        printf("Foram usadas %d moedas de 50 centavos\n", moedas);
        return troco(valor, cont);
    } else if (valor >= 25) {
        moedas = valor / 25;
        valor -= moedas * 25;
        cont += moedas;
        printf("Foram usadas %d moedas de 25 centavos\n", moedas);
        return troco(valor, cont);
    } else if (valor >= 10) {
        moedas = valor / 10;
        valor -= moedas * 10;
        cont += moedas;
        printf("Foram usadas %d moedas de 10 centavos\n", moedas);
        return troco(valor, cont);
    } else if (valor >= 5) {
        moedas = valor / 5;
        valor -= moedas * 5;
        cont += moedas;
        printf("Foram usadas %d moedas de 5 centavos\n", moedas);
        return troco(valor, cont);
    } else if (valor >= 1) {
        moedas = valor;
        valor -= moedas;
        cont += moedas;
        printf("Foram usadas %d moedas de 1 centavo\n", moedas);
        return troco(valor, cont);
    }
    
    printf("Foram usadas no total %d moedas\n", cont);
    return cont;
}

int troco_direto(float valor) {
    int centavos = (int)(valor * 100 + 0.5); // converte para centavos arredondando
    return troco(centavos, 0);
}

int main() {
    float valor_troco;
    printf("De o valor do troco:\n");
    scanf("%f", &valor_troco);
    troco_direto(valor_troco);
    return 0;
}
