#include <iostream>
#include <sstream>

using namespace std;

bool eh_str(char n){
    if((n > 64 && n < 91) || (n > 96 && n < 123)){
        return true;
    }else {
        return false;
    }
}

int main() {
    string str, compara;
    stringstream ss;
    getline(cin, str);

    ss << str;

    while(ss >> compara){
        int letra {0};
        int ponto {0};

        for(int i {0}; i < compara.size(); i++){
            
            if(eh_str(compara[i]) == true){
                letra++;
            }else if(compara[i] == '.'){
                ponto++;
                cout << ponto;
            }
        }
        if(ponto == 1 && ponto == 0){
            cout << "float ";
        }else if(letra > 0){
            cout << "str ";
        }else {
            cout << "int ";
        }
    }
    return 0;
}