#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    float q;

    cin >> t >> q;

    if(t == 1){
        q *= 4.0;
    }
    else if(t == 2){
        q *= 4.5;
    }
    else if(t == 3){
        q *= 5.0;
    }
    else if(t == 4){
        q *= 2.0;
    }
    else{
        q *= 1.5;


    }
    cout << fixed << setprecision(2);
    cout << "Total: R$ " << q   << endl;

    return 0;
}
