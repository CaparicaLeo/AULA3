#include <iostream>
using namespace std;

int n;
int funcaoUm(int n);
int main(){
    cout << "Insira um numero POSITIVO (n>=0): ";
    cin >> n;
    cout << "A soma da sequencia de 0 ate " << n 
         << " eh igual a " << funcaoUm(n) << endl;
}
int funcaoUm(int n){
    int soma=0;
    for(int i=1;i<=n;i++){
        soma+=i;
    }
    return soma;
}
