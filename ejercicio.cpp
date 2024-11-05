#include <iostream>
#include <vector>
#include <string>
#include <cstdlib> // exit
using namespace std;

// caracteres especiales
vector<char> sChars = {'+','-','*','/','%','_',',','.',';',':','!','?','\\',' '};

// Declaracion de funciones
string inData(string mss);
void error(string mss);
bool isSChar(char a);
void printA ( vector <char> arr );

// FUNCION PRINCIPAL
int main() {
    
 // entrada de datos
 string in;
 in = inData("un texto de mínimo 20 caracteres");
 // condicional 
 if ( in.size() < 20 ) 
  error("la cadena proporcionada no posee la extensión requerida");
 
 // inversion e intercambio
 vector<char> rta;
 
 for (int i = in.size() - 1; i >= 0; i--) {
  char temp = in[i];
  rta.push_back(isSChar(temp) ? '@' : temp);
 }

 // out
 printA( rta );
 return 0;
}

// funciones-----------------------------------------

// manejo de errores
void error(string mss) {
 cout << "----------------------------------------------------------\n";
 cout << "!!!Error " << mss << "!!!" << endl;
 exit(0);
}

//Ingreso de data
string inData(string mss) {
 string r;
 cout << "Ingrese " << mss << "\n >";
 getline(cin, r);
 return r;
}

// condicional de si es un caracter especial
bool isSChar(char a) {
 for (size_t i = 0; i < sChars.size(); i++)
  if (a == sChars[i]) return true;
 return false;
}

void printA ( vector <char> arr ) {
 cout << "\n - out: ";
 for (char c : arr )
  cout << c;
}