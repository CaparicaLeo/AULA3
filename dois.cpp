#include <iostream>
using namespace std;
void funcaoDois(int ano);
int main(){
    int ano;
    cout << "Insira um ano: ";
    cin >> ano;
    funcaoDois(ano);
}

void funcaoDois(int ano){
    if(ano%4==0){
        if(ano%100==0){
            if(ano%400==0){
                cout << "O ano " << ano
                << " eh bissexto." << endl;
            }
            else{
                cout << "O ano " << ano
             << " NAO eh bissexto." << endl;
            }
        }
        else{
            cout << "O ano " << ano
             << " eh bissexto." << endl;
        }
    }
    else{
        cout << "O ano " << ano
             << " NAO eh bissexto." << endl;
    }
}