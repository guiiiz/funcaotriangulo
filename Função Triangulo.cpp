#include <iostream>
#include <math.h>
using namespace std;

//Calculo do parametro
double calcularAreaTriangulo(double a, double b, double c) {
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main() {
    double xa, xb, xc, ya, yb, yc;
    
    //Impressão para meu usuário colocar as medidas dos 3 lados do triangulo X
    cout << "Digite as medidas dos lados do triângulo x (separados por espaço): ";
    cin >> xa >> xb >> xc;
    
    //Impressão para meu usuário colocar as medidas dos 3 lados do triangulo Y
    cout << "Digite as medidas dos lados do triângulo Y (separados por espaço): ";
    cin >> ya >> yb >> yc;
    
    //Calculo da Área de X e Calculo da Área Y
    double areaX = calcularAreaTriangulo(xa, xb, xc);
    double areaY = calcularAreaTriangulo(ya, yb, yc);
    
    //Resultado das áreas de ambos os triangulos
    cout << "Área do triângulo X: " << areaX << endl;
    cout << "Área do triângulo Y: " << areaY << endl;
    
    //Mensagem para meu usuario  indicando se os triangulos são maiores um que o outro ou se tem o mesmo tamanho
    if (areaX > areaY) {
        cout << "O triângulo X tem a maior área." << endl;
    } else if (areaY > areaX) {
        cout <<"O triângulo Y tem a maior área." << endl;
    } else {
        cout << "Os triângulos têm a mesma área." << endl;
    }

    return 0;
}