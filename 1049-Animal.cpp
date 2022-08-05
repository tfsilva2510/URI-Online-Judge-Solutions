#include <bits/stdc++.h>

using namespace std;

int main(){
    string animal;

    cin >> animal;
    if(animal == "vertebrado"){

        cin >> animal;
        if(animal == "ave"){

            cin >> animal;
            if(animal == "carnivoro"){
                cout << "aguia" << endl;
            }else{
                cout << "pomba" << endl;
            }
        }
        else{

            cin >> animal;
            if(animal == "onivoro"){
                cout << "homem" << endl;
            }else{
                cout << "vaca" << endl;
            }
        }
    }
    else{

        cin >> animal;
        if(animal == "inseto"){

            cin >> animal;
            if(animal == "hematofago"){
                cout << "pulga" << endl;
            }else{
                cout << "lagarta" << endl;
            }
        }else{

            cin >> animal;
            if(animal == "hematofago"){
                cout << "sanguessuga" << endl;
            }else{
                cout << "minhoca" << endl;
            }
        }
    }
    return 0;
}
