#include <iostream>
using namespace std;
// nCr= iCj 

int fact(int num){
    int fac=1;
    for(int i=1; i<=num; i++){
        fac*=i;
    }
    return fac;
}

int main(){
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<fact(i)/(fact(i-j)*fact(j))<<" ";
        }
        cout<<endl;
    }
    return 0;
}