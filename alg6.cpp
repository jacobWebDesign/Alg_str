#include <iostream>
#include <locale.h>
using namespace std;



void dodaj_wartosci(float t[], int rozmiar){
    for(int i = 0; i < rozmiar; i++){
        float el;
        cout << "Podaj wartość dla indeksu " << i << " elementu tablicy\n";
        cin >> el;
        t[i] = el;
}}

void pierwszy_element(float t[]){
    cout << "Pierwszy indeks tej funkcji ma wartość: " << t[0] << endl;
}

void zawartosc_tablicy(float t[], int wielkosc){
    int i = 0;
    cout << "Zawartość tablicy: (";
    if(wielkosc>1){
    do
    {
        cout << t[i] << ", ";
        i++;
    } while(i<wielkosc-1);
    cout << t[wielkosc-1] << ").\n";
    } else {
        cout << t[0] << ").\n";
    }
}

void roznica(float t[], int rozmiar){
    if(rozmiar>1){
    cout << "Różnica między ostatnim, a pierwszym elementem w tablicy: " << t[rozmiar-1]-t[0] << endl;
    } else {
        cout << "Tablica posiada tylko jeden element, nie da się wyliczyć różnicy";
    }
}

void suma(float t[], int wielkosc){
    float suma = 0;
    for(int i=0; i< wielkosc; i++){
        suma+= t[i];
    }
    cout << "Suma wszystkich elementów tablicy jest równa: " << suma << endl;
}

void wyswietl(float t[], int wielkosc){
    cout << "Który indeks elementu tablicy chcesz wyświetlić? (indeks zaczyna się od 0)" << endl;
    int el;
    cin >> el;
    if(el<0){
        cout << "Indeks nie może być mniejszy od 0\nSpróbuj jeszcze raz\n";
        wyswietl(t, wielkosc);
    } if (el>wielkosc-1) {
        cout << "Wybrany indeks wykracza poza ilość elementów w tablicy\nSpróbuj jeszcze raz\n";
        wyswietl(t, wielkosc);
    } else {
        cout << "Element pod indeksem: " << el << " jest równy: " << t[el] << endl;
    }
}

int main(){

    setlocale(LC_CTYPE, "Polish"); //
    cout << "Podaj wielkość tablicy\n";
    int n;
    cin >> n;
    float tablica[n];
    dodaj_wartosci(tablica, n);
    pierwszy_element(tablica);
    zawartosc_tablicy(tablica, n);
    roznica(tablica, n);
    suma(tablica, n);
    wyswietl(tablica, n);

    //Jeśli sprawdza pan ten kod, podczas wyświetlania elementu pod indeksem, proszę wybrać liczbę, która jest <0.
    //Dlaczego po ponownej próbie, polecenie nadal się wykonuje i po daje liczbę pod niestniejącym indeksem?
    
}
