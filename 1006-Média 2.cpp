#include <bits/stdc++.h>

using namespace std;


int main() {
double x1, y1, x2 , y2, distancia;
cin >> x1 >> y1 >> x2 >> y2;
distancia = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
cout << sqrt(pow(x2-x1,2) + pow(y2-y1,2)) <<fixed << setprecision(4) << endl;
return 0;

}
