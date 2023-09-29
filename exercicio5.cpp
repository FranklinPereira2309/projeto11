#include <iostream>
#include <ctime>

using namespace std;

int insere_meio(int *vetor, int &qtd, int elemento) {
    int posicao = qtd / 2;
    
    if(qtd % 2 == 0) {
        for(int i = qtd; i > posicao; i--) {
            vetor[i] = vetor[i -1];

        }
        vetor[posicao] = elemento;
    }else {
        
        for(int i = qtd; i > posicao; i--) {
            vetor[i] = vetor[i -1];

        }
        vetor[posicao] = elemento;
    }
    qtd++;

    return qtd;
}


int main() {
    
    int elemento;
    int qtd = 6;
    int vetor[qtd];

    srand(time(nullptr));

    cout << "Favor informar qual o tamanho do vetor? ";
    cin >> qtd;
    cout << "Informar qual o elemento a ser inserido: ";
    cin >> elemento;

    cout << "\nVetor original sem atualização: \n" << endl;

    for(int i = 0; i < qtd; i++) {
        vetor[i] = rand() %99 +1;
        cout << vetor[i] << " ";
    }

    cout << "\n\n-------------------------------------\n";

    int novaQtd = insere_meio(vetor,qtd,elemento);

    cout << "\nVetor atualizado: \n" << endl;

    for(int i= 0; i < novaQtd; i++) {
        cout << vetor[i] << " ";
    }

    cout << endl;

    

    return 0;
}