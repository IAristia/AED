#include <iostream>
#include <cassert>
#include <array>
#include <string>

enum struct Formato{formato_correcto,formato_incorrecto};
struct Header{
    bool input_binary=true;
    bool output_binary=true;
    void load_header(std::istream&);
    bool input_is_binary();
    bool output_is_binary();
    Formato status;
};

void Header::load_header(std::istream &in){


    std::string aux;

    status=Formato::formato_correcto;
    in>>aux;

    if(aux=="binary")
        input_binary=true;
    else if(aux=="text")
        input_binary=false;
    else{
        status=Formato::formato_incorrecto;
    }

    in>>aux;
    if(aux=="binary")
        output_binary=true;
    else if(aux=="text")
        output_binary=false;
    else{
        status=Formato::formato_incorrecto;
    }

}
bool Header::input_is_binary(){
    return input_binary;
}

bool Header::output_is_binary(){
    return output_binary;
}
