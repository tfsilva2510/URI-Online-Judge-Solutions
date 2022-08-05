#include <bits/stdc++.h>

using namespace std;

int main(){
    double salario;
    cin >> salario ;

    cout << fixed << setprecision(2);
    if ( salario >= 0 && salario <= 400.00 ){
        cout << "Novo salario: " << salario + (salario * 15) /100 << endl;
        cout << "Reajuste ganho: " << (salario * 15) /100 << endl;
        cout << "Em percentual: 15 %" << endl;
    }
    else if (salario >= 400.01 && salario <= 800 ){
        cout << "Novo salario: " << salario + (salario * 12) /100 << endl;
        cout << "Reajuste ganho: " << (salario * 12) /100 << endl;
        cout << "Em percentual: 12 %" << endl;
    }
    else if (salario >= 800.01 && salario <= 1200.00 ){
        cout << "Novo salario: " << salario + (salario * 10) /100 << endl;
        cout << "Reajuste ganho: " << (salario * 10) /100 << endl;
        cout << "Em percentual: 10 %" << endl;
    }
    else if (salario >= 1200.01 && salario <= 2000.00 ){
        cout << "Novo salario: " << salario + (salario * 7) /100 << endl;
        cout << "Reajuste ganho: " << (salario * 7) /100 << endl;
        cout << "Em percentual: 7 %" << endl;
    }
    else {
        cout << "Novo salario: " << salario + (salario * 4) /100 << endl;
        cout << "Reajuste ganho: " << (salario * 4) /100 << endl;
        cout << "Em percentual: 4 %" << endl;

    }

}
