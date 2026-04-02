# Estructura de control `for` en C

La estructura `for` en C se utiliza para repetir un bloque de código una cantidad determinada de veces.

## Sintaxis general

```c
for (inicialización; condición; actualización) {
    // bloque de código
}
```

---

## Partes del `for`

### 1. Inicialización

* **Finalidad:** declarar e inicializar variables de control.
* **Ejemplo:** `int i = 0`
* **Cuándo se ejecuta:** una sola vez, antes de comenzar el bucle.
* **¿Es obligatoria?:** no.

---

### 2. Condición

* **Finalidad:** determina si el bucle continúa o finaliza.
* **Ejemplo:** `i < 10`
* **Cuándo se evalúa:** antes de cada iteración.
* **Resultado:**

  * `true` → se ejecuta el bloque.
  * `false` → termina el bucle.
* **¿Es obligatoria?:** no

  * Si se omite → se considera siempre verdadera (bucle infinito).

---

### 3. Bloque de código

* **Finalidad:** contiene las instrucciones a repetir.
* **Cuándo se ejecuta:** cada vez que la condición es verdadera.
* **¿Es obligatoria?:** sí (aunque puede estar vacío `{}`).

---

### 4. Actualización

* **Finalidad:** modifica la variable de control.
* **Ejemplo:** `i++`
* **Cuándo se ejecuta:** después de cada iteración.
* **¿Es obligatoria?:** no.

---

## Orden de ejecución

1. Se ejecuta la inicialización (una sola vez).
2. Se evalúa la condición.
3. Si la condición es verdadera:

   * Se ejecuta el bloque de código.
   * Se ejecuta la actualización.
4. Se repite desde el paso 2.
5. Si la condición es falsa → el bucle termina.

---

## Ejemplo

```c
#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        printf("%d\n", i);
    }
    return 0;
}
```

---

## Casos especiales

### Bucle infinito

```c
for (;;) {
    // bucle infinito
}
```

---

### Múltiples expresiones

```c
for (int i = 0, j = 10; i < j; i++, j--) {
    // código
}
```

---

## Resumen

| Parte          | Finalidad           | Cuándo se ejecuta         | Obligatoria |
| -------------- | ------------------- | ------------------------- | ----------- |
| Inicialización | Preparar variables  | Una vez (inicio)          | No          |
| Condición      | Controlar el bucle  | Antes de cada iteración   | No          |
| Bloque         | Código a repetir    | Si condición es verdadera | Sí          |
| Actualización  | Modificar variables | Después de cada iteración | No          |
