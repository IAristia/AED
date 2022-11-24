#include <fstream>
#include <iostream>
#include <array>
#include <cassert>

using std::array;

using Total = array<array<array<unsigned,12>,3>,4>;

struct Meses {array <unsigned,144> a;
    unsigned n{};
    void Agregar (unsigned);
    void Imprimir(std::ofstream&);
};
//Prototipo
unsigned GetPromedio (const Total&);

Meses GetMesesConMontoIgualA (const Total&, unsigned);

Meses GetMesesConMayorVentas (const Total&);

unsigned GetMayorMonto (const Total&);

void CargarDatos(Total&, std::ifstream&);

void printTotalf(const Total&, std::ofstream&);

unsigned GetMenorMonto (const Total&);

Meses GetMesesConMenorVentas (const Total&);

int main () {

    Total total{};

    constexpr auto filename_out{"totales.txt"};
    constexpr auto filename_in{"Test3oficial.txt"};

    {//Carga de datos desde un archivo
        std::ifstream in (filename_in, std::ios::binary);
        CargarDatos(total, in);
    }

    {//Impresion de salida requerida a un archivo
        std::ofstream out (filename_out, std::ios::binary);
        printTotalf(total, out);
    }
    //Pruebas
    assert ( total.at(0).at(0).at(0) == 10000);
    assert ( total.at(0).at(0).at(1) == GetMayorMonto(total));
    assert ( total.at(0).at(0).at(1) == total.at(2).at(2).at(10));
    assert ( total.at(2).at(1).at(11) == 0);
    assert ( total.at(1).at(2).at(3) == GetMenorMonto(total));
    assert ( total.at(3).at(1).at(11) == total.at(3).at(2).at(6));
    assert ( total.at(1).at(2).at(5) != GetPromedio(total));
    assert ( total.at(3).at(1).at(11) < total.at(2).at(2).at(10));
    assert ( GetMayorMonto(total) > total.at(2).at(2).at(11));
    
}
//Lee los datos de un stream y los coloca en la estructura de datos tipo Total
void CargarDatos(Total& total, std::ifstream &in){
    for (unsigned venta, mes, vendedor, region; in >> venta >> mes >> vendedor >> region;)
        total.at(region).at(vendedor).at(mes) += venta;

}

//Imprime los datos en el archivo "Totales.txt" y les aplica el formato
void printTotalf(const Total& total, std::ofstream &out){

    out <<"Tabla de ventas totales" << '\n';
    out << '\n';


    for (auto region : total){ // extrae una region del array total.
        for (auto vendedor : region) { // extrae un vendedor del array region.
            for (auto totaldelmes: vendedor) // extrae el total de un mes del array vendedor.
                out << totaldelmes << '\t';
                out << '\n';
        }
        out<< "----------------------------------------------------------------\n";
    }
    out << "El promedio de todas las ventas es: "  << GetPromedio(total) << "\n";
    out << "El valor de la mayor venta es: "  << GetMayorMonto(total) << "\n";
    out << "El menor monto es: " << GetMenorMonto(total) << "\n";
    out << "El/Los mes/es con mayor venta son/es: ";  GetMesesConMayorVentas(total).Imprimir(out); /*out << "\n";*/
    out << "El/Los mes/es con menores ventas son/es: ";  GetMesesConMenorVentas(total).Imprimir(out); out << "\n";

}
//Implementación

//Suma el total de las ventas y las divide por el tamaño del array
unsigned GetPromedio (const Total& total){

    unsigned sumatotal{};

    for (auto region : total)
        for (auto vendedor : region)
            for (auto totaldelmes: vendedor)

                sumatotal += totaldelmes;

    return sumatotal/(total.size()*total.at(0).size()*total.at(0).at(0).size());
}

//Obtiene los meses con el monto igual 
Meses GetMesesConMontoIgualA (const Total& total, unsigned monto){

    Meses meses{};

    for (unsigned  r{}; r<total.size(); r++) // 4
        for (unsigned  v{}; v<total.at(0).size(); v++) // 3
            for (unsigned  m{}; m<total.at(0).at(0).size(); m++) // 12

                if(monto == total.at(r).at(v).at(m))
                    meses.Agregar(m);

    return meses;
}

//Obtiene el mayor monto
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
void Meses::Imprimir (std::ofstream &salida){
    for (unsigned i{}; i < n ; i++)
        salida << a.at(i) << ' ';
    salida<<'\n';
}
