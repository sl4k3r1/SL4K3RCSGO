#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

  cout << "===================================\n" ;
  cout << "           CFB-Cursos\n" ;
  cout << "===================================\n" ;
  
  float n1, n2;
  float valor;
  char opc;

  inicio:
  
  system("clear");
  
  cout << "Por favor escolha um numero para ser multiplicado\n";
  cin >> n1;
  
  cout << "Por favor escolha outro numero para ser multiplicado\n";
  cin >> n2;

  valor=n1*n2;

  cout <<valor << endl;

  cout << "continuar multiplicando?(S/N)\n";
  cin >> opc;
  
  if(opc == 'S' or opc == 's'){
    goto inicio;
  }else{
    return 0;
  }
}