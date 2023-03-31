#include <iostream>
#include <math.h>

using namespace std;

int main() {

    int primeiro {0};
    int segundo {0};
    int valor {0};

    cin >> valor;
    cin >> primeiro;
    cin >> segundo;

    primeiro = primeiro - valor;
    abs(primeiro);
    segundo = segundo - valor;
    abs(segundo);

    if(primeiro < segundo){
        cout << ("primeiro");
    } else{
        cout << ("segundo");
    }

    return 0;
}