#include <iostream>
#include <locale.h>
using namespace std;

int main(){
    //Silnia
    setlocale(LC_CTYPE, "Polish"); 
    int a;
    int wynik = 1;
    cout << "\nPodaj liczbę a: ";
    cin >> a;
    int pierw = a;
    if(a==0) {
        wynik = 1;
        } else {
    
    while(a>0){
        wynik*=a;
        a--;
    };
    }
    cout << "Silnia z liczby " << pierw << " jest równa: " << wynik;
    


  
   

}