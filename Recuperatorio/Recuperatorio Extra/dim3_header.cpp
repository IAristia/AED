/*
TP: Dim 3 extra.
Alumnos: Juan Pablo Galgano 
         Iñaki Aristia 
         Francisco Mosquera 
         Ezequiel Luberto
*/

#include <iostream>
#include "BlockStream.h"
#include <cassert>
#include <array>
#include "header.h"

using std::array;
using Total = array<array<array<unsigned,12>,3>,4>;


/*
Creamos estructura que es una venta mensual, asociada a un vendedor, región y mes.
Esta estructura la vamos a utilizar para leer y también la utilizamos para la construcción
de las muestras para las pruebas
*/
struct Venta{
        unsigned monto;
        unsigned mes;
        unsigned vendedor;
        unsigned region;
    };


struct Meses {
    array <unsigned,144> a;
    unsigned n{};
    void Agregar (unsigned);
    void Imprimirf(std::ofstream&);
    void Imprimirb(std::ofstream&);
};


unsigned GetPromedio (const Total&);

Meses GetMesesConMontoIgualA (const Total&, unsigned);

Meses GetMesesConMayorVentas (const Total&);

unsigned GetMayorMonto (const Total&);

unsigned GetMenorMonto (const Total&);

Meses GetMesesConMenorVentas (const Total&);
   

int main(){
    Total total{};
    Header header;
  

    header.load_header(std::cin);

    if(header.status==Formato::formato_incorrecto){
        constexpr auto filename_output("Outputerror.txt");
        std::ofstream out_total(filename_output);
        out_total<<"Formato incorrecto, recomendamos leer readme";
        out_total.close();
        return 0;
    }
    
   
 
    // Carga de datos en modo binario
   
    if(header.input_is_binary()){
        
        std::cin.get();//Quitamos el \n del stream por manejar cin con operador <<
       
        for (Venta aux; ReadBlock(std::cin, aux);)
           total.at(aux.region).at(aux.vendedor).at(aux.mes) += aux.monto;
           
        
    }    //Carga de datos en modo texto
    else{
        for (Venta aux; std::cin >> aux.monto >> aux.mes >> aux.vendedor >> aux.region;)
            total.at(aux.region).at(aux.vendedor).at(aux.mes) += aux.monto;
    }// Impresión en modo binario
    
    if(header.output_is_binary()){
        constexpr auto filename_output("outputB.bin");
        std::ofstream out_total(filename_output);
        WriteBlock(out_total, total);
        WriteBlock(out_total, GetPromedio(total));
        WriteBlock(out_total, GetMayorMonto(total));
        WriteBlock(out_total, GetMenorMonto(total));
        GetMesesConMayorVentas(total).Imprimirb(out_total);
        GetMesesConMenorVentas(total).Imprimirb(out_total);
        out_total.close();
    }
//Impresión formato texto
    else {
        constexpr auto filename_output("outputT.txt");
        std::ofstream out_total(filename_output);
        for (auto region : total){
            for (auto vendedor : region) {
                for (auto totaldelmes: vendedor)
                    out_total << totaldelmes << '\t';
                out_total << '\n';
            }
            out_total << "---------------------------------------------------------\n";
        }

        out_total << GetPromedio(total) << '\n';
        out_total << GetMayorMonto(total)<< '\n';
        out_total<< GetMenorMonto(total)<< '\n';
        GetMesesConMayorVentas(total).Imprimirf(out_total);
        GetMesesConMenorVentas(total).Imprimirf(out_total);
        out_total.close();
    }
}



unsigned GetPromedio (const Total& total){

    unsigned sumatotal{};

    for (auto region : total)
        for (auto vendedor : region)
            for (auto totaldelmes: vendedor)

                sumatotal += totaldelmes;

    return sumatotal/(total.size()*total.at(0).size()*total.at(0).at(0).size());
}
Meses GetMesesConMontoIgualA (const Total& total, unsigned monto){

    Meses meses{};

    for (unsigned  r{}; r<total.size(); r++) // 4
        for (unsigned  v{}; v<total.at(0).size(); v++) // 3
            for (unsigned  m{}; m<total.at(0).at(0).size(); m++) // 12

                if(monto == total.at(r).at(v).at(m))
                    meses.Agregar(m);

    return meses;
}
unsigned GetMayorMonto (const Total& total){

    unsigned mayormonto{};

    for (unsigned  r{}; r<total.size(); r++) // 4
        for (unsigned  v{}; v<total.at(0).size(); v++) // 3
            for (unsigned  m{}; m<total.at(0).at(0).size(); m++) // 12

                if(total.at(r).at(v).at(m) > mayormonto)
                    mayormonto = total.at(r).at(v).at(m);

    return mayormonto;
}
//Obtiene el menor monto
unsigned GetMenorMonto (const Total& total){

    unsigned menormonto{};

    for (unsigned  r{}; r<total.size(); r++) // 4
        for (unsigned  v{}; v<total.at(0).size(); v++) // 3
            for (unsigned  m{}; m<total.at(0).at(0).size(); m++) // 12

                if(total.at(r).at(v).at(m) < menormonto)
                    menormonto = total.at(r).at(v).at(m);

    return menormonto;
}
//Devuelve el/los meses con mayor venta
Meses GetMesesConMayorVentas (const Total& total){

    Meses mesesconmayorventa = GetMesesConMontoIgualA(total, GetMayorMonto(total));

    return mesesconmayorventa;
}
//Devuelve el/los meses con menores ventas
Meses GetMesesConMenorVentas (const Total& total){

    Meses mesesconmenorventa = GetMesesConMontoIgualA(total, GetMenorMonto(total));

    return mesesconmenorventa;
}


// Agrega el valor m a la posicion n dentro del array a del tipo de dato Meses
void Meses::Agregar (unsigned m){
    a.at(n) = m, n++;
}
//Muestra por el stream salida contenido del dato del tipo Meses
void Meses::Imprimirf (std::ofstream &salida){
    for (unsigned i{}; i < n ; i++)
        salida << a.at(i) << ' ';
    salida<<'\n';
}
void Meses::Imprimirb(std::ofstream &salida){
    for (unsigned i{}; i < n ; i++)
        WriteBlock(salida, a.at(i));
    
}

  /*
    Mejora armar funcion para imprimir la salida con estructura predetrminada
    */
    /*
    Para la muestra dada el tamaño del archivo es el siguiente:
    total: 144 * 4BYTES= 576 bytes
    promedio: 4 bytes
    mayormonto: 4 bytes
    menormonto: 4 bytes
    Meses con mayor venta son 2: 2 * 4bytes = 8bytes
    Meses con menor venta son 115: 115 * 4bytes = 460 bytes
    Total= 1056 bytes 
     */
    