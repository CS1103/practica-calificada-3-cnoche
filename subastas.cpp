#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
#include <string>
#include <iterator>
#include <sstream>
#include "read.h"

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
    string line;
    string alias;
    //se asume que todos los bids son ints
    int precio;
    int cnt;
    istringstream values;
    //vector para objetos -> se utilizan vectores con el fin de poder enumerarlos de manera fácil
    vector<Objetos> object;
    //mapa para que cada objeto tenga un número
    map<Ofertas,int> offers;

    while (line) {
        if(isupper(line[0])){
            object.push_back(Objetos(line));
            cnt++;
        }
        else{
            int index = offers[line];
            if (index == 0){
                values.str(line);
                values >> alias;
                values >> precio;
                Ofertas(alias,precio);

            } else if(index != cnt && index > 0){
                //remove participant
            }
        }
    map<int,Ofertas>::iterator it;
    vector<Objetos>::iterator vit;    
    //get the maximum
    for (int i = 0; i < object.size(); i++){
        for (it.begin(); it.end(); it++){
            int max = 0;
            //para todos los que tengan el key de i
            //if (max<precio[it]){
                max = offers.second.precio[it]
            }
        } 
    }
    //promedio

    //minimum
    }
}

