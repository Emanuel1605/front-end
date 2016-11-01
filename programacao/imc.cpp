#include <iostream>

using namespace std;

int main() {

  float peso,altura,imc;
  
  cout << "Digite seu peso\n" << endl;
  cin >> peso;
  cout << "Digite sua altura\n" << endl;
  cin >> altura;

  imc = peso /(altura*altura);
 
  cout << "O indice de massa é Igual: " << imc << endl;

 return 0;

}
