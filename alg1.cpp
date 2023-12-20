#include <iostream>
#include <locale.h>
using namespace std;

int main(){

    setlocale(LC_CTYPE, "Polish"); 
    int a,b;
    a=1;

    cout << "Podaj liczbę b: ";
    cin >> b;
    int wynik = a;
    while(a!=b) {
        a++;
        wynik = wynik + a;
        
    }

    cout << "suma liczb jest równa: " << wynik << endl;
    system("pause");


  
   

}