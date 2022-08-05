#include <cstdio>
int fatorial(int valor) {
    if (valor != 1) {
        return valor * fatorial(valor - 1);
    } else {
        return valor;
        printf("%d", valor);
    }
}