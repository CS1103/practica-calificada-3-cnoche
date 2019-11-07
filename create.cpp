#include <fstream>
#include <string>
#include <iostream>
#include <cstdlib>
using namespace std;


void create(ifstream files){
    ofstream archivo;
    string texto, name;
    
    getline(cin, name);

    archivo.open(name.c_str(), ios::out); //abriendo el archivo

    while(getline(cin,texto)){
        archivo << texto << endl;
    }

    if (archivo.fail()){
       std::cout << "No se pudo abrir archivo";
       exit(1);
    }

    archivo.close();

}