#include <iostream>
#include <string>

using namespace std;

int pow(int bas, int n) 
{ 
    if (n == 0) 
        return 1; 
    else if (n % 2 == 0) 
        return pow(bas, n / 2) * pow(bas, n / 2); 
    else
        return bas * pow(bas, n / 2) * pow(bas, n / 2); 
}  
  

int main() 
{ 
    cout<<pow(2, 5); 
    return 0; 
} 
