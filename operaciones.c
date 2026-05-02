#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */

//Fue añadido en un solo el const porque me olvide
int sumar(const int a, const int b) {
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(const int a, const int b) {
    return a - b;
}

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */
// Esta funcion realiza la multiplicacion de dos enteros
// recibiendo un entero y otro entero se multiplica el primer elemento por el segundo
int multiplicar(int a, int b) {
    return a * b;
}

/* ── esPar ────────────────────────────────────────────────────────────────── */

int esPar(int n) {
    return (n % 2) == 0;
}
