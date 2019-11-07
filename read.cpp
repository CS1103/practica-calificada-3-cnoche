#include <fstream>
#include <string>
#include <iostream>
using namespace std;

string read(){
    ifstream file;
    file.open("bid_example.txt");

    if (file.fail()){
        cerr << "No existe el archivo\n";
    }
    string archivo;

    while(getline(file,archivo)){
        cout << archivo <<endl;
    }

    return archivo;
    file.close();
}
