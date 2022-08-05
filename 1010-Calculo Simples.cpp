#include <bits/stdc++.h>

using namespace std;

int main(){
    int CodigoPeca1 , NumeroPeca1, CodigoPeca2, NumeroPeca2;
    double ValorUnitario1, ValorUnitario2, ValorPagar;
    cin >> CodigoPeca1 >> NumeroPeca1 >> ValorUnitario1 >> CodigoPeca2 >> NumeroPeca2 >> ValorUnitario2;
    cin >> fixed >> setprecision(2);
    ValorPagar = (NumeroPeca1 * ValorUnitario1) + (NumeroPeca2 * ValorUnitario2);
    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << ValorPagar << endl;


    return 0;
}
