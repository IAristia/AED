# 16 Enumeraciones & Estructuras —Plano y Punto
## 16.1. Objetivos
• Demostrar capacidad básica de construcción de tipos compuestos basados
en tipos existentes y simples, es decir, no compuestos.
## 16.2. Temas

• Tipo de dato definido por el usuario (programador).

• Definición de conjunto de valores con struct.

• Definición de conjunto de valores con enum struct.

## 16.3. Problema
Dado un punto determinar en qué parte en del plan está:

• Cuadrante I, II, II, IV.

• Eje X o Eje Y.

• Origen (en los dos ejes).

## 16.3.1. Analizar y Comparar
• Las diferentes formas matemáticas de definir puntos en el plano y las
diferentes formas de representarlos en memoria.

## 16.4. Restricciones
• La solución debe ser una función que reciba un valor del tipo Punto y retorne
un valor del tipo ParteDelPlano. Posibles nombres de la función:

◦ DóndeEstá

◦ GetParteDelPlano

◦ DondeEnElPlanoEstá

• Punto debe implementarse con struct.

• ParteDelPlano debe implementarse con enum struct.

## Crédito Extra
Especificar e implementar las operaciones distancia entre
dos puntos y distancia al origen.
Analizar ventajas y desventajas de definir una operación
en función de la otra.

## 16.5. Tareas
1. Especificar matemáticamente el tipo en ParteDelPlano.md:

    a. Especificar el conjunto de operaciones.

    b. Especificar el conjunto de valores.

2. Especificar matemáticamente el tipo en Punto.md:

    a. Especificar el conjunto de operaciones.

    b. Especificar el conjunto de valores.

3. Diseñar y codificar las pruebas en main.

4. Declarar los prototipos de las operaciones antes de main.

5. Declarar Punto y ParteDelPlano antes de los prototipos las operaciones.

6. Compilar: Luego de finalizar tareas anteriores, estamos en condiciones de
compilar. Deberíamos obtener error de linkeo (i.e., vinculación) pero no de
compilación.

7. Codificar las definiciones de las operaciones, luego de main.

8. Probar: Luego de las definiciones, deberíamos poder realizar el proceso de
traducción completo (i.e., compilación y linkeo) sin errores. Una vez obtenido
el programa ejecutable, deberíamos poder ejecutarlo sin errores.

## 16.6. Productos
DD-Plano
 |-- readme.md
 |-- ParteDelPlano.md // Especificación
 |-- Punto.md // Especificación
 `-- Plano.cpp // Implementación y pruebas

