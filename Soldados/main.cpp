#include <iostream>

using namespace std;

int main() {

    int tam1 {0};
    int tam2 {0};
    int contador {0};

    cin >> tam1 >> tam2;
    int matriz[tam1][tam2];

    for(int i {0}; i < tam1; i++){
        for(int j {0}; j < tam2; j++){
            cin >> matriz[i][j];
        }
    }

    for(int i {0}; i < tam1; i++){
        for(int j {0}; j < tam2; j++){
            cout << matriz[i][j] << endl;
        }
    }

    for(int i {0};i < tam1; i++){
        for(int j {tam2 - 1}; j >= 1; j--){
            if(matriz[j][i] > matriz[j - 1][i]){
                contador++;
            }
        }
    }

    cout << contador;

    return 0;
}
