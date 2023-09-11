#include <iostream>

using namespace std;

void maxmin(int vetor[], int n, int *maximo, int *minimo) {
    cout << n << endl;
    cout << *maximo << endl;
    cout << *minimo << endl;
}

int main() {
    int tamanhoVetor = 10;
    int maximo = 5;
    int minimo = 1;
    int vetorTeste[tamanhoVetor] = {0};

    maxmin(vetorTeste, tamanhoVetor, &maximo, &minimo);

    return 0;
}