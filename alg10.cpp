#include <iostream>
using namespace std;


/*Przedstaw na schemacie algorytm sortowania tablicy n elementowej jednowymiarowej.
Tablica zawiera elementy {28,11,1,8,10,5,9,20,9} zapisane na sztywno w kodzie programu.
Sortowanie wykonaj metodą porównania dwóch sąsiednich elementów aż do osiągniecia efektu porządku
rosnącego.

Wyświetl gotową tablice.*/

int main(){
    setlocale(LC_CTYPE, "Polish"); 
    int tab[9] = {28,11,1,8,10,5,9,20,9};
    


    // Wyświetlenie tablicy przed sortowaniem
    cout << "Przed: ";
     for(int i = 0; i<9; i++){
        cout << tab[i] << ", ";
    }
    cout << endl;



    //Pętla sortująca
    for(int i = 1; i<9; i++){
        for(int i = 1; i<9; i++)
            if(tab[i] < tab[i-1]){
                int first = tab[i];
                tab[i] = tab[i-1];
                tab[i-1] = first;
            }
    }

    cout << "Po: ";
    for(int i = 0; i<9; i++){
        cout << tab[i] << ", ";
    }
    cout << endl;
}