
## 15 Arreglos & Dimensiones — Total de Ventas
## 15.1. Objetivos
• Demostrar capacidad de construcción de tipos compuestos mediante la aplicación sucesiva de producto cartesiano.

• Aplicación de ciclos for clásicos y for de intervalos (for-range).

• Aplicación de redireccionamiento de los flujos estándar.
## 15.2. Temas
• Producto cartesiano.

• Secuencias finitas.

• Tipos std::array<T,N>.

• Inferencia de tipo con auto.

• Streams (flujos).

• Redirección de entrada y salida.

• Interfaz fluida.

• for clásico: for ( sentencia-inic condiciónopc ; expresiónopc ) sentencia

• for intervalo: for ( sentencia-inicopc declaración-for-intervalo : inicializadorfor-intervalo ) sentencia

## 15.3. Problema
Esta es una serie de problemas que parten de una necesidad general: “Dado los importes, mostrar las ventas totales”, y que después se particulariza en
necesidades puntuales:

• Necesidad #1: Dado los importes, mostrar ventas totales.

• Necesidad #2: Dado los importes y meses (de 0 a 11), mostrar ventas totales
por mes.

• Necesidad #3: Dado los importes, meses, y números de los tres vendedores
(0, 1, 2), mostrar total de ventas por mes y vendedor.

• Necesidad #4: Dado los importes, meses, números de los tres vendedores, y
números de las cuatro regiones (0, 1, 2, 4), mostrar total de ventas por mes,
vendedor, y región.

## 15.4. Restricciones

• Se deben crear archivos con set de datos de diferentes para cada solución:

◦ Test0.txt

◦ Test1.txt

◦ Test2.txt

◦ Test3.txt

• Los datos se extraen de cin, no vienen en ningún orden en particular, los importes son enteros, el resultado se envía a cout

• Aplicar std::array<T,N> y no T[N].

• Aplicar operación •.at(•) y no •[•].

• Total de importes: Las cuatro necesidades rondan en presentar el total de importes, hay varias soluciones posibles, las que se deben implementar son las que usan una única variable de múltiples dimensiones, son las que están marcadas con una estrella (★) a continuación.

◦ Soluciones posibles a la necesidad #1:

▪ ★ 1 variable entera (cero dimensiones)

◦ Soluciones posibles a la necesidad #2:

▪ 12 variables enteras (cero dimensiones, no aprovecha patrón)

▪ ★ 1 variable arreglo de 12 enteros (una dimensión, aprovecha patrón)

◦ Soluciones posibles a la necesidad #3:

▪ 6 variables enteras

▪ 3 variables arreglos de 12 enteros

▪ ★ 1 variable arreglo de 3 arreglos de 12 enteros (dos dimensiones)

◦ Soluciones posibles a la necesidad #4:

▪ 144 variables enteras

▪ 12 variables arreglo de 12 enteros

▪ 4 variables arreglos de 3 arreglos de 12 enteros

▪ ★ 1 variable arreglo de 4 arreglos de 3 arreglos de 12 enteros (tres dimensiones)

• Cada solución debe estar en archivos fuente diferentes:

◦ Dim0.cpp

◦ Dim1.cpp

◦ Dim2.cpp

◦ Dim3.cpp

## Crédito Extra
Los siguientes son ítems opcionales que se basan en la necesidad #4, y deben resolverse en Dim3Extra.cpp:

• Implementar las funciones que permitan representar a los vendedores con strings y las regiones con enum (Norte, Sur, Este, y Oeste), en vez de representarlos con números.

• Implementar las funciones LeerDatos y MostrarTotales

• Presentar las tablas lo más claro posible con formato, alineación numérica y con títulos.

• Agregar estadísticas, por lo menos una que aplique máximo, otra mínimo, y otra promedio. Por ejemplo: GetVendedorConMasVentas(mes, región).

• Describir en readme.md las ventajas y desventajas de aplicar:

◦ for-intervalo en vez de for clásico.

◦ std::array<T,N> en vez de T[N].

◦ •.at(•) en vez de •[•].

## 15.5. Tareas

Por cada necesidad:
1. Diseñar el set de datos para la prueba.
2. Implementar la solución.
3. Ejecutar la solución con redirección de la entrada para que lea del set de
datos de prueba. Por ejemplo: ./Dim0 < Test0.txt
## 15.6. Productos
```
22-051-03
 - 15-Dims
 |-- readme.md
 |-- Dim0.cpp
 |-- Dim1.cpp
 |-- Dim2.cpp
 |-- Dim3.cpp
 |-- Dim3Extra.cpp
 ```
