#include <iostream>
using namespace std;

int N;
string str[109];

int main(){

    cin >> N;

    for (int i=1; i<=N; i++) cin >> str[i];

    for (int i=1; i<=N; i++){
        if(str[i] == "and" || str[i] == "not" || str[i] == "that" || str[i] == "the" || str[i] == "you" ){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}