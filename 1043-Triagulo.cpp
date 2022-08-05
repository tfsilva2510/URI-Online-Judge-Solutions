#include <bits/stdc++.h>

using namespace std;

int main() {

    float a, b, c, area;
    cin >> a >> b >> c;

    if (a<(b+c) && b<(a+c) && c<(a+b)){
        cout << "Perimetro = " << a + b + c << endl;

    }
    else {
        area = ((a + b )*2)/2 ;
        cout << fixed << setprecision(1);
        cout << "Area = " << area << endl;
    }

 }
