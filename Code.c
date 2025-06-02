#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Função recursiva para resolver o problema da Torre de Hanói
void hanoi(int n, char origem, char destino, char auxiliar) {
    if (n == 1) {
        printf("Mova o disco 1 da haste %c para a haste %c\n", origem, destino);
        return;
    }
    
    // Move n-1 discos da haste de origem para a haste auxiliar
    hanoi(n - 1, origem, auxiliar, destino);
    
    // Move o disco restante da haste de origem para a haste de destino
    printf("Mova o disco %d da haste %c para a haste %c\n", n, origem, destino);
    
    // Move os n-1 discos da haste auxiliar para a haste de destino
    hanoi(n - 1, auxiliar, destino, origem);
}

int main() {
    int n;
    setlocale(LC_ALL, "Portuguese");

    // Entrada: numero de discos
    printf("Digite o numero de discos: ");
    scanf("%d", &n);
    
    // Chamando a função para resolver o problema da Torre de Hanói
    hanoi(n, 'A', 'C', 'B');

    return 0;
}

