#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(){
    string NomeVendedor;
    double SalarioFixo, TotalVenda, SalarioTotal;
    cin >> NomeVendedor >> SalarioFixo >> TotalVenda;
    cout << fixed << setprecision(2);
    SalarioTotal = SalarioFixo+((TotalVenda * 15) /100);
    cout << "TOTAL = R$ " << SalarioTotal << endl;

    return 0;
}
