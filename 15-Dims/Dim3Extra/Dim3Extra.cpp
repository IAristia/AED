#include <fstream>
#include <iostream>
#include <array>

using std::array;

using Total = array<array<array<unsigned,12>,3>,4>;

struct Meses {array <unsigned,144> a;
    unsigned n{};
    void Agregar (unsigned);
    void Imprimir(std::ostream &out);
};

unsigned GetPromedio (const Total&);




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
}

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
//Devuelve el/los meses con mayor venta
Meses GetMesesConMayorVentas (const Total& total){

    Meses mesesconmayorventa = GetMesesConMontoIgualA(total, GetMayorMonto(total));

    return mesesconmayorventa;
}

// Agrega el valor m a la posicion n dentro del array a del tipo de dato Meses
void Meses::Agregar (unsigned m){
    a.at(n) = m, n++;
}

//Muestra por el stream salida contenido del dato del tipo Meses
void Meses::Imprimir (std::ostream &salida){
    for (unsigned i{}; i < n ; i++)
        salida << a.at(i) << ' ';
    salida<<'\n';
}
