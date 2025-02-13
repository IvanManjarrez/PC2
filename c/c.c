#include <stdio.h>
#include <time.h>

int fibonacci(int n) {
    if (n < 0) return -1; // Código de error
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n = 40; // Número a calcular

    clock_t inicio = clock();
    int resultado = fibonacci(n);
    clock_t fin = clock();

    double tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;
    
    printf("Fibonacci(%d) = %d\n", n, resultado);
    printf("Tiempo de ejecución: %.6f segundos\n", tiempo);

    return 0;
}
