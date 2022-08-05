#include <bits/stdc++.h>

using namespace std;

int main(){
    int hora, minutos, segundos;
    cin >> segundos;

    hora = segundos/3600;
    segundos = segundos%3600;

    minutos = segundos/60;
    segundos = segundos%60;

    cout << hora << ":" << minutos  << ":" << segundos <<endl;

return 0;
}
