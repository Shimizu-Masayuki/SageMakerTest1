# include <iostream>
#include <string>
using namespace std;

int R, C, c[409], d[409];
char B[29][29];

int main(){

    cin >> R >> C;

    int s=1;

    for (int i=1; i<=R; i++){
        for (int j=1; j<=C; j++) cin >> B[i][j];
    }

    for (int i=1; i<=R; i++){
        for (int j=1; j<=C; j++) {
            if(B[i][j] == '.' || B[i][j] == '#') continue;
            else{
                c[s] = i;
                d[s] = j;
                s++;
                for (int x=1; x<=R; x++){
                    for (int y=1; y<=C; y++) {
                            if (B[x][y] == '.' || B[x][y] == '#'){
                                if ((abs(x-i)+abs(y-j)) <= int(B[i][j] - '0')) B[x][y] = '.';
                            }
                    }
                }
            }
        }
    }
    for (int i=1; i<s; i++) B[c[i]][d[i]] = '.';

    for (int i=1; i<=R; i++){
            for (int j=1; j<=C; j++){
                cout << B[i][j];
            }
            cout << endl;
            }

    return 0;
}
