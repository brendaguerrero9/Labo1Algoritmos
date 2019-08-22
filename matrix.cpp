#include <iostream>
#include <string>

using namespace std;

int Sum (int *A, int *B, int *C, int n) {
    if(n<=-1){
        return 0;
        }
        else{
            C[n] = A[n]+B[n];            
            return  C[n] + Sum(A, B, C, n-1);
        } 
}

int main() {
    int f = 3;
    int c = 3;
    int t = c*f;

    int A[t] = {2,1,1,2,1,1,4,1,1};
    int B[t] = {1,2,1,1,3,1,1,2,3};
    int C[t]; 
    int i = 1;
    Sum(A,B,C, t-1);


    for(int j = 0; j<9 ; j++){
        cout << C[j];
        if(i==3){
            cout<<endl;
            i=0;
            }
            i+=1;
        }
    return 0;
}