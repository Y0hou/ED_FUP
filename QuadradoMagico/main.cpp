#include <iostream>

using namespace std;

int main() {

    int somaL [3];
    int somaC [3];
    int somaDp {0};
    int somaDs {0};

    int matriz [3][3];

    for(int i {0}; i < 3; i++){
        somaL[i] = 0;
        somaC[i] = 0;
    }

    for(int i {0}; i < 3; i++){
        for(int j {0}; j < 3; j++){
            cin >> matriz[i][j];
        }
    }
    
   for(int i {0}; i < 3; i++){
        for(int j {0}; j < 3; j++){
            somaL[i] = somaL[i] + matriz[i][j];
        }
   }

   for(int j {0}; j < 3; j++){
        for(int i {0}; i < 3; i++){
            somaC[j] = somaC[j] + matriz[i][j];
        }
   }

    for(int i {2}; i >= 0; i--){
        for(int j {2}; j >= 0; j--){
            if(i == j){
                somaDp = somaDp + matriz[i][j];
            }
        } 
    }

    somaDs = matriz[0][2] + matriz[1][1] + matriz[2][0];
cout << somaC[1];
    if(somaL[0] == somaL[1]){
        
        cout << somaL[1];
        if(somaL[1] == somaL[2]){
            somaL[0] = somaL[2];
        }
    }
    if(somaC[0] == somaC[1]){
        if(somaC[1] == somaC[2]){
            somaC[0] = somaC[2];
        }
    }

    if(somaL[0] == somaC[0]){
        if(somaC[0] == somaDp){
            if(somaDp == somaDs){
                cout << ("sim");
            }else {
                cout << ("nao");
            }
        }else {
            cout << ("nao");
        }
    }else {
        cout << ("nao");
    }



    return 0;
}