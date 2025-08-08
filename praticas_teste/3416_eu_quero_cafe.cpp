#include <bits/stdc++.h>

using namespace std;

int main(){
    long long N,L,D;

    cin >> N >> L >> D;

    if(N < 1 || N > 1e4)
        return 0;
    
    if(L < 1 || L > 1e4)
        return 0;

    if(D < 1 || D > 1e4)
        return 0;

    double num_ml = (N*D)/1e3;

    if( (num_ml) <= L){
        cout << L << endl;
    }else{
        while ((num_ml) >= L)
        {
            L = L + L;
        }

        cout << L << endl;
        
    }


    return 0;
}