#include <bits/stdc++.h>

using namespace std;

int main() {

    int a, b, c;
    int maior;
    cin >> a >> b >> c ;

    if(a > b){
       maior = a;
    }else{
       maior = b;
    }

    if(maior > c){
        maior = maior;
    }else{
        maior = c;
    }
    cout << maior << " eh o maior"  << endl;

    return 0;
}
