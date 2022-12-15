<h2 align=center>Universidad Tecnólogica Nacional</h2>

<h2 align=center>Facultad Regional Buenos Aires </h2>

<h2 align=center>Ingeniería en Sistemas de la Información</h2>
<p align="center">
<img  src="utn_logo.jpg" width="50%" height="50%" />
</p>







|Materia:   | Algoritmos y estructura de Datos |
|:---------|:---------------------------------|
| Curso:    | K1051                            |
| Año:      | 2022                             |
| Legajo:   | /2038870                         |
| Apellido: | Luberto    / Mosquera Alfaro     |
| Nombre:   | Ezequiel Antonio    / Francisco  |

## Problema: 
El problema establecido es la necesidad de poder leer tanto archivos de texto como binarios, que a estos puedan correrlos el programa y mostrarlo en salida con las dos formas pedidas para así poder ver en pantalla lo deseado por el usuario.

## Objetivo: 
Crear un código el cual, ya sea mediante un archivo binario o de texto que se le envíe, este entregue como salida el total de ventas que tiene cada vendedor de cada región en cada mes en los dos tipos de salida mencionados anteriormente.

## Resolución: 
A partir de la necesidad impuesta, se realizó un programa el cual pueda levantar los datos de ambas manera, ya sea utilizando ReadBlock (para binario) o a partir de un for clásico (para texto), y este luego de realizar todas las operaciones indicadas salga como se indicó previamente utilizando WriteBlock(para binario) o un for each (para texto).

## Funcionamiento:

## DIM3

Ejecutable: **dim3.exe**
### Modos de ejecución

**Entrada con formato texto:**

Modo de ejecución: **.\dim3.exe < muestra.txt**

**Descripción**
El programa dim3.exe recibe por flujo de entrada standard un archivo de texto con el siguiente formato:

MONTO1 MES1 VENDEDOR1 REGION1
MONTO2 MES2 VENDEDOR2 REGION2
.
.
MONTON MESN VENDEDORN REGIONN

**Entrada binaria:**

Modo de ejecución: Estos archivos se procesan denominandolos inputB.bin y se tienen que ubicar en la misma carpeta que el ejecutable.

**Descripción**
Tambien este programa puede procesar archivos tipo binario que respeten la siguiente estructura:

MONTO1 MES1 VENDEDOR1 REGION1 MONTO2 MES2 VENDEDOR2 REGION2... MONTON MESN VENDEDORN REGIONN

Estos archivos se procesan denominandolos inputB.bin y se tienen que ubicar en la misma carpeta que el ejecutable.

## Text to binary

Ejecutable: **text_to_binary.exe**

Modo de ejecución: **.\text_to_binary.exe<input.txt**

**Descripción**
El progrma text_to_binary.exe recibe por flujo de entrada un archivo con formato de texto y lo convierte en binario. Para poder utilizar de forma conjunta este programa con dim3.exe se debe respetar el siguiente formato:

MONTO1 MES1 VENDEDOR1 REGION1 MONTO2 MES2 VENDEDOR2 REGION2... MONTON MESN VENDEDORN REGIONN

## Binary to text

Ejecutable: **binary_to_text.exe**
Modo de ejecución:**.\text_to_binary.exe<input.bin**

**Descripción**
El progrma text_to_binary.exe recibe por flujo de entrada un archivo binario y lo convierte en formato texto. La salida que se obtendrá tendrá el siguiente formato:

MONTO1 MES1 VENDEDOR1 REGION1 MONTO2 MES2 VENDEDOR2 REGION2... MONTON MESN VENDEDORN REGIONN
