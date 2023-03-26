# include <iostream>
#include <set>
#include <map>
using namespace std;

int N, A[500009];

int main(){

    int ret=0;
    map <int, int> mp;
    cin >> N;
   
    for(int i=1; i<=N; i++) {
        cin >> A[i];
        auto itr = mp.find(A[i]); 
        if(itr != mp.end()){
            mp[A[i]] = mp[A[i]] + 1;
        }else {
            mp[A[i]] = 1;

    }
}

for(auto x : mp) {
        int tmp = x.second, count = 0;
        while(tmp > 1){
            tmp -= 2;
            count++;
            }
        ret += count;
    }
cout << ret <<endl;

return 0;
}