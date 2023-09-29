#include <iostream>

using namespace std;


int* intercala(const int *vet1, int tam1, const int *vet2, int tam2) {
    int novoTamanho = tam1 + tam2;
    int *vetorIntercalado = new int[novoTamanho]; 

    int index1 = 0;
    int index2 = 0;

    for (int i = 0; i < novoTamanho; i++) {
        if (index1 < tam1) {
            vetorIntercalado[i] = vet1[index1];
            index1++;
        } else {
            vetorIntercalado[i] = vet2[index2];
            index2++;
        }
    }

    return vetorIntercalado;
}

int main() {
    int vetor1[] = {1, 3, 5};
    int tamanho1 = 3;

    int vetor2[] = {2, 4, 6};
    int tamanho2 = 3;

   
    int *vetorIntercalado = intercala(vetor1, tamanho1, vetor2, tamanho2);

    int novoTamanho = tamanho1 + tamanho2;

    
    cout << "Vetor intercalado: ";
    for (int i = 0; i < novoTamanho; i++) {
        cout << vetorIntercalado[i] << " ";
    }
    cout << std::endl;

    
    delete[] vetorIntercalado;

    return 0;
}

    

    
    