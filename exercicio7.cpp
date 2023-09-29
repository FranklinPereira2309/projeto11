#include <iostream>
#include <vector>

using namespace std;

void multiplica_por_n(vector<int> &vet, int n) {
    for (int &elemento : vet) {
        elemento *= n;
    }
}

int main() {
    vector<int> vetorBase = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int fatorMultiplicador = 3;

    
    multiplica_por_n(vetorBase, fatorMultiplicador);

   
    cout << "Vetor após a multiplicação por " << fatorMultiplicador << " ==> ";
    for (const int &elemento : vetorBase) {
        cout << elemento << " ";
    }
    cout << endl;

    return 0;
}
