#include <iostream>
#include <ctime>

using namespace std;

void ordCrescente(float& a, float& b, float& c, float& d) {
    if(a > b) {swap(a,b);}
    if (a > c) {swap(a,c);}
    if (a > d) {swap(a,d);}
    if (b > c) {swap(b,c);}
    if (b > d) {swap(b,d);}
    if (c > d) {swap(c,d);}
    
}


int main() {
    float numA, numB, numC, numD;

    cout << "\nFavor digitar 04 números: \n";
    cin >> numA >> numB >> numC >> numD;

    ordCrescente(numA, numB, numC, numD);

    cout << "Números ordenados - Ascendente: " << endl;
    cout << numA << " "  <<  numB << " " << numC << " " << numD << endl;

    return 0;
}