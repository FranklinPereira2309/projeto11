#include <iostream>
#include <ctime>

using namespace std;

void maxmin(int vetor[], int n, int &maximo, int &minimo) {
    
    maximo = minimo = vetor[0];

    for(int i=1 ; i<n ; i++) {
        if(vetor[i] > maximo) {
            maximo = vetor[i];
        }else {
            if(vetor[i] < minimo) {
                minimo = vetor[i];
            }
        }
    }
        cout << "Valor Mínimo: " << minimo << endl;
        cout << "Valor Máximo: " << maximo << endl;
}

void print_vetor(int vetorTeste[], int tamanhdoVetor) {
    cout << "Vetor" << endl;
    for(int i=0; i < tamanhdoVetor; i++) {
        cout << vetorTeste[i] << ", ";
    }
    cout << endl;
}

int main() {
    int tamanhoVetor = 10;
    int maximo;
    int minimo;
    int vetorTeste[tamanhoVetor] = {0};

    srand(time(nullptr));

    for(int i=0; i < tamanhoVetor; i++) {
        vetorTeste[i] = rand()%43;
    }

    cout << "--------------------------------------" << endl;
    maxmin(vetorTeste, tamanhoVetor, maximo, minimo);
    print_vetor(vetorTeste, tamanhoVetor);

    return 0;
}