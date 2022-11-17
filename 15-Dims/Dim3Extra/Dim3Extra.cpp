
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
