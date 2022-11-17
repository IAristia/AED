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
