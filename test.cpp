#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int N,J=0;
    int num;
    cin>>N>>num;

    for(int i=0; i<N; i++){
        num/=pow(10,N-1);
        J+=num;
        cout<<"J : "<<J<<endl;
        N=N-1;

    }

    cout<<"J : "<<J<<endl;



    return 0;

}