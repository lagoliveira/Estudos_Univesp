#include <iostream>
using namespace std; //Evita ter que escrever o std:: antes de cada nome como std::cout

int main(){
    // Usando o manipulador endl, para gerar nova linha e descarregar o buffer de saída
    cout << "Hello, world!" << endl;
    // Caso não estiver usando o endl, é necessário usar o \n para gerar nova linha
    cout << "Hello, world!\n";
    
    return 0;
}