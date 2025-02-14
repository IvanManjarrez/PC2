# 🚀 Prueba de Rendimiento usando Docker en 5 Lenguajes de Programación 😎

Este proyecto realiza una prueba de rendimiento comparando distintos lenguajes de programación. Para ello, utilizamos benchmarks basados en el tiempo de ejecución de un algoritmo recursivo ampliamente conocido: **Fibonacci**.

## 📁 Estructura del Proyecto

- **Repositorio con los scripts**: Contiene los scripts que resuelven el problema en diferentes lenguajes. Cada lenguaje tiene su propia carpeta junto con su respectivo `Dockerfile`.
- **Repositorio del Docker base**: Contiene el `Dockerfile` encargado de ejecutar cada script.

## 🛠️ Tecnologías Necesarias

### Locales:
- Docker
- Docker Compose

### Lenguajes Utilizados:
- Python
- C
- Java
- JavaScript
- Rust

## ⚙️ Instalación y Uso

Para instalar y ejecutar correctamente este proyecto, sigue estos pasos:

1. Descarga el archivo `docker-compose.yml` desde el repositorio: [PC2-parte1](https://github.com/IvanManjarrez/PC2-parte1/).
2. Crea una carpeta vacía y coloca dentro el archivo descargado.
3. Abre la terminal en la carpeta creada (clic derecho → "Abrir terminal").
4. Clona el repositorio con los scripts ejecutando:
   ```sh
   git clone https://github.com/IvanManjarrez/PC2/
   ```
5. Para construir las imágenes y ejecutar los contenedores, usa:
   ```sh
   docker-compose up --build
   ```
6. Espera los resultados y ¡listo! 🚀

## 👥 Autores
- **Jhonayker Echeverría**
- **Iván Manjarrez**

---

Si tienes alguna sugerencia o mejora, no dudes en contribuir. 😃
