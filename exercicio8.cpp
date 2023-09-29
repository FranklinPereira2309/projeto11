#include <iostream>
#include <vector>

using namespace std;


bool validarPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}


int conta_primos(const vector<int>& vet) {
    int qtd = 0;
    for (int numero : vet) {
        if (validarPrimo(numero)) {
            qtd++;
        }
    }
    return qtd;
}

int main() {
    vector<int> vetorBase = {0, 2, 3, 8, 9, 10, 11, 12, 22 , 33 , 45, 66, 72, 88, 7, 99};

    
    int qtdNumPrimos = conta_primos(vetorBase);

    cout << "Quantidade de números: " << qtdNumPrimos << endl;

    return 0;
}
