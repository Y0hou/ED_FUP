#include <iostream>
#include <string>


using namespace std;

int main() {

string str;

getline(cin, str);

for(int i {0}; i < str.size(); i++ ){

    if(str[i + 1] == ' '){
        if(str[i] != str[i + 2]){
            cout << str[i];
        }else {
            cout << str[i];
            i += 2;
        }
    }else if(str[i] == ' '){  
        if(str[i - 1] != str[i + 1]){
            cout << str[i];
        }
    }else if(str[i - 1] == ' '){
        if(str[i] != str[i - 2]){
            cout << str[i]
        }
    }else { 
        cout << str[i];
    }
}



    return 0;
}