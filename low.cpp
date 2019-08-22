#include <iostream>
#include <string>

using namespace std;

int Low (int *A, int si, int i, int n) {

    if(si == 1){
        if(A[i] <= n){
            return A[i];
        }
        return n;
    }else{
        if(A[i] <=  A[i+1] && A[i] <= n){
            return Low(A,si-1, i+1, A[i]);
        }else{
            return Low(A,si-1, i+1, n);
        }
    }
}
int main() {
    int array[5] = {1,2,3,4,-10};
    cout<<Low(array, 5,0,0);
    return 0;
}
