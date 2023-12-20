#include <iostream>
#include <locale.h>
using namespace std;

void zmienne(){
    

}
int main(){

    setlocale(LC_CTYPE, "Polish"); //
   

    int wybor;
    cout << "Wybierz działanie\n";
    cout << "1. Suma\n";
    cout << "2. Suma kwadratów\n";
    cout << "3. Średnia arytmetyczna\n";
    cout << "4. Zakończ działanie programu\n";
    cin >> wybor;

    int a, b;
    cout << "Podaj liczbe a: ";
    cin >> a;
    cout << "podaj liczbe b: ";
    cin >> b;
    if(a>b) {
    int a1 = b;
    int b1 = a;
    a = a1;
    b = b1;
    };
    
    if(wybor==1){
        
        int wynik = a;
        while(a<b){
            a++;
            wynik += a;
            

        }
        cout << "wynik: " << wynik << endl;
        main();
    } if(wybor==2) {
        int wynik = a*a;
        while(a<b){
            a++;
            wynik += a*a;
        } 
        cout << "wynik: " << wynik << endl;
        main();
    } if(wybor==3){
        double wynik = a;
        int i = 1;
        while (a<b){
            i++;
            a++;
            wynik += a;
        } wynik = wynik/i;
        cout << "Średnia arytmetyczna: " << wynik << endl;
        
        main();
    } if(wybor==4) {
        system("pause");
        
    } else {
        cout << "Błędna dana\n";
        main();
    };


  
   

}
