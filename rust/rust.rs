
use std::time::Instant;

fn fibonacci(n: i32) -> i32 {
    if n < 0 {
        return -1; // Código de error
    } else if n == 0 {
        return 0;
    } else if n == 1 {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

fn main() {
    let n = 40; // Número a calcular

    // Medición del tiempo
    let inicio = Instant::now();
    let resultado = fibonacci(n);
    let fin = Instant::now();

    println!("Fibonacci({}) = {}", n, resultado);
    println!("Tiempo de ejecución: {:.6} segundos", fin.duration_since(inicio).as_secs_f64());
}
