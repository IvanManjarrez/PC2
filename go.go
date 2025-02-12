package main

import (
	"fmt"
	"time"
)

func fibonacci(n int) int {
	if n < 0 {
		return -1 // Código de error
	}
	if n == 0 {
		return 0
	}
	if n == 1 {
		return 1
	}
	return fibonacci(n-1) + fibonacci(n-2)
}

func main() {
	n := 40 // Número a calcular

	inicio := time.Now()
	resultado := fibonacci(n)
	duracion := time.Since(inicio)

	fmt.Printf("Fibonacci(%d) = %d\n", n, resultado)
	fmt.Printf("Tiempo de ejecución: %.6f segundos\n", duracion.Seconds())
}
