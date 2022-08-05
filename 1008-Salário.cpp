#include <bits/stdc++.h>

using namespace std;

int main(){
    int Number , HoraTrabalhada;
    double ValorXHora, Salary;
    cin >> fixed >> setprecision(2);
    cin >> Number >> HoraTrabalhada >> ValorXHora;
    Salary = HoraTrabalhada * ValorXHora;
    cout << "NUMBER = " << Number << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << Salary << endl;

    return 0;

}
