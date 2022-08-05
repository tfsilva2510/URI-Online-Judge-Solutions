#include <bits/stdc++.h>

using namespace std;

int main(){
    double intervalo;
    cin >> intervalo;

    if (intervalo >= 0 && intervalo <= 25.0000){
        cout << "Intervalo [0,25]" << endl;
    }
    else if (intervalo > 25.00001 && intervalo <= 50.0000000) {
        cout << "Intervalo (25,50]" << endl;
    }

    else if (intervalo > 50.00000001 && intervalo <= 75.00000000) {
        cout << "Intervalo (50,75]" << endl;
    }

    else if (intervalo > 75.000000001 && intervalo <= 100.0000000000) {
        cout << "Intervalo (75,100]" << endl;
    }
    else {
        cout << "Fora de intervalo" << endl;
    }
}
