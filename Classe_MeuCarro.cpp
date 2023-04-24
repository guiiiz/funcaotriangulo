#include <iostream>
using namespace std;
//Classe com suas variáveis
class Carro
{
    public:
    
    string Cor;
    string Modelo;
    float VelMax;
    void Buzinar ();
    
};
//Iniciando meu programa, diretrizes das minhas varivais e modulo
int main()
{
    Carro MeuCarro;
    
    MeuCarro.Cor = "Azul";
    MeuCarro.Modelo = "Fusca";
    MeuCarro.VelMax = 150.0f;
    
    MeuCarro.Buzinar();
    cout << MeuCarro.Cor << endl;
    cout << MeuCarro.VelMax << endl;
    cout << MeuCarro.Modelo << endl;
    
}
//Impressão para meu usuário, a ação buzinar Bi Bi !!!.
void Carro::Buzinar(){
    cout << "Bi, Bi!!!" << endl;
    
}
