#include <iostream>
using namespace std;


/*Zawartość tablicy wprowadź na sztywno w programie. Użyj jednej linii kodu i instrukcji set
[5,7,13,22,
88,100,3,2,
33,7,2,3
7,3,15,2]

Przeszukiwania dokonaj sekwencyjnie na zadanym przez użytkownika obszarze prostokątnym.
np.
[0,0,0,0,
0,*,*,*,
0,*,*,*,
0,0,0,0]
gdzie sprawdzone zostaną tylko pola wskazane jako *

Szukaj klucza – wynikiem są wszystkie wartości w tablicy odpowiadające kluczowi i ich
indeksy.*/

int main(){
    cout << "<----------ALGORYTM 9---------->\n";
    int poprawne_wprowadzenie = 1;
    int tab[4][4]={{5,7,13,22},
                   {88,100,3,2},
                   {33,7,2,3},
                   {7,3,15,2}};

    
    int klucz,x,y,m_max,y2,wynik = 0;
    
    cout << "Wprowadź początkowy indeks wiersza 0-3\n";
    cin >> y;
    cout << "Wprowadź początkowy indeks kolumny 0-3\n";
    cin >> x;
    cout << "Wprowadź końcowy indeks wiersza 0-3\n";
    cin >> y2;
    cout << "Wprowadź końcowy indeks kolumny 0-3\n";
    cin >> m_max;
    cout << "Wprowadź klucz\n";
    cin >> klucz;
    
    if(x>=4 || x<0 || y>=4 || y<0 || m_max>=4 || m_max<0 || y2>=4 || y2<0){
        cout << "Podany zakres nie istnieje, tablica jest kwadratem 4x4 a indeks zaczyna się od 0\nSpróbuj ponownie\n";
        main();
    } 
    

    
    for(int i = y; i<=y2; i++){
        for(int j = x; j<=m_max; j++){
           //cout << tab[i][j] << ", "; Wypisanie wszystkich elementów tablicy
           if(tab[i][j]==klucz){
           cout << "Dla zakresu [" << y << "," << x <<  "] [" << y2 << "," << m_max << "] klucz znajduje się w indeksie [" << i << "," << j <<"]\n";
           wynik = 1;}
        }
        //cout << endl;
    }
    if(wynik==false){
        cout << "Klucz nie znajduje się w podanym zakresie tablicy";
    }
}