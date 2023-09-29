#include <iostream>
#include <ctime>

using namespace std;

void calcular(int& x, int& y) {
   int somar = x + y;
   int subtrar = x - y;

   x = somar;
   y = subtrar;
    
}


int main() {
    int x, y;

    cout << "\nFavor digitar 02 números inteiros: \n";
    cin >> x >> y;

    calcular(x, y);

    cout << "Esses são os valores de X e Y: " << endl;
    cout << "A soma de (X + Y) é: "<< x << endl;
    cout << "A subtração de (X - Y) é: " << y << endl;
 
    return 0;
}