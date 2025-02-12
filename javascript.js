const { performance } = require('perf_hooks');

function fibonacci(n) {
    if (n < 0) return -1; // Código de error
    if (n === 0) return 0;
    if (n === 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

const n = 40; // Número a calcular

const inicio = performance.now();
const resultado = fibonacci(n);
const fin = performance.now();

console.log(`Fibonacci(${n}) = ${resultado}`);
console.log(`Tiempo de ejecución: ${(fin - inicio) / 1000} segundos`);
