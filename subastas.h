#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Objetos{
  public:
    string name;
    int cant_objetos;
    
    Objetos();
    Objetos(string s);
};
class Ofertas{
    public:
    string alias;
    int precio;

    Ofertas();
    Ofertas(string s, int n);
};

    void ingresar_datos();
    int getmax(map<Objetos,int> offers, vector<Objetos>);
    double getprom(map<Objetos,int> offers, vector<Objetos> object);
    int getmin(map<Objetos,int> offers, vector<Objetos>);
