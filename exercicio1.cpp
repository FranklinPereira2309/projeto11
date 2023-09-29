#include <iostream>
#include <ctime>

using namespace std;

void maxmin(int vetor[], int n, int &maximo, int &minimo) {
    
    //maximo = vetor[0];
    //minimo = vetor[0];

    minimo = maximo = vetor[0];

    for(int i=1 ; i<n ; i++) {
        if(vetor[i] > maximo) {
            maximo = vetor[i];
        }else {
            if(vetor[i] < minimo) {
                minimo = vetor[i];
            }
        }
    }
        cout << "Esse é o valor Mínimo: " << minimo << endl;
        cout << "Esse é o Valor Máximo: " << maximo << endl;
}

void imprimir(int vetor[], int tamVetor) {
    cout << "\nValores do Vetor: " << endl;
    for(int i=0; i < tamVetor; i++) {
        cout << vetor[i] << ", ";
    }
    cout << endl;
}

int main() {
    int tamVetor = 10;
    int maximo;
    int minimo;
    int vetorPadrao[tamVetor];

    srand(time(nullptr));

    for(int i=0; i < tamVetor; i++) {
        vetorPadrao[i] = rand()%43;
    }

    cout << "===========================================\n";
    maxmin(vetorPadrao, tamVetor, maximo, minimo);
    imprimir(vetorPadrao, tamVetor);

    return 0;
}