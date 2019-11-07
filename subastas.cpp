#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
#include <string>
#include <iterator>
#include <sstream>
#include <map>
#include "subastas.h"

using namespace std;

class Objetos{
  public:
    string name;
    
    Objetos() { name = "";}
    Objetos(string s) { name = s;}
};

class Ofertas{
    public:
    string alias;
    int precio;

    Ofertas() {alias = "";}
    Ofertas(string s, int n) {alias = s; precio = n;}
};

void ingresar_datos(){
    ifstream file;
    file.open("bid_example.txt");

    if (file.fail()){
        cerr << "No existe el archivo\n";
    }
    string archivo;
    string alias;
    //se asume que todos los bids son ints
    int precio;
    int cnt;
    istringstream values;
    //vector para objetos -> se utilizan vectores con el fin de poder enumerarlos de manera fácil
    vector<Objetos> object;
    //mapa para que cada objeto tenga un número
    map<int,Ofertas> offers;
    string txt = read();
    stringstream text(txt); 

    while(getline(file,archivo)){{
        if(isupper(archivo[0])){
            object.push_back(Objetos(archivo));
            cnt++;
        }
        else{
            int index = offers[archivo];
            if (index == 0){
                values.str(archivo);
                values >> alias;
                values >> precio;
            
            offers.insert(pair<int, Objetos>(cnt, Ofertas(alias,precio)));
            } else if(index != cnt && index > 0){
                //remove participant
            }
        }
    }
}

file.close();

}

int getmax(map<Objetos,int> offers, int n){
    map<int,Ofertas>::iterator it;
    vector<Objetos>::iterator vit;    
    int max = 0; 
    for (int i = 0; i < n; i++){
        for (it = offers.cbegin(); it < offers.cend(); it++){
            //for(todos los maps con key = 1)
        
            if (max < it->second.offers.precio){
                max = offers[].precio;
            }
        } 
    }
    return max;
}

double getprom(map<Objetos,int> offers, int n){
    double promedio;
    for (int i = 0; i < n; i++){
        for (auto it:offers){
            //for todos los que tienen key igual a i

        } 
    }
    return promedio;
}

int getmin(map<Objetos,int> offers, int n){
    int min = 900000000;
    for (int i = 0; i < n; i++){
        for (auto it:offers){
            //for todos los que tienen key igual a i
            if (min > offers[it].precio){
                min = offers[it].precio;
            }
        } 
    }
    return min;
}
