#include <iostream>
#include <locale.h>
using namespace std;

/*Nadaj dwuwymiarowej tablicy m,n-elementowej, z klawiatury, wartości elementów w pętli.
Wyprowadź:
a) zawartość tablicy,
b) sumę wszystkich elementów w tablicy,
c) dowolny wybrany przez użytkownika element [m,n].

Odpowiedź odeślij w postaci 2 plików alg(magiczne bloczki) oraz cpp (C++) spakowanych w archiwum zip.*/





int main(){
     
    int m;
    cout << "Podaj liczbe kolumn\n";
    cin >> m;
    int n;
    cout << "Podaj liczbę wierszy\n";
    cin >> n;
    float tab[m][n];

    //Zapełnianie tablicy przez użytkownika z klawiatury
    for(int i = 0; i<m; i++){
        for(int j =0; j<n; j++){
            cout << "Podaj wartości tablicy dla " << "tab[" << i << "]" << "[" << j << "]" << endl ;
            cin >> tab[i][j];
        }
    }

    //Suma wszystkich elementów tablicy oraz jej zawartość
    float suma;
     for(int k = 0; k < m; k++){
        for(int l = 0; l < n; l++){
            suma+= tab[k][l];
            cout << "Wartość tablicy dla " << "tab[" << k << "]" << "[" << l << "]" << "to " << tab[k][l] <<endl ;
        }
    }
    cout << "Suma wszystkich elementów tablicy to " << suma <<endl;

    //Wyświetlanie konkretnego elementu z tablicy wybranego przez użytkownika;

    int col;
    int row;

    cout << "Wybierz pierwszy indeks\n";
    cin >> col;
    if(col > m-1){
        cout << "Nie ma takiego indeksu\n";
        return 0;
    }
    cout << "Wybierz drugi indeks\n";
    
    cin >> row;
    if(row > n-1){
       cout << "Nie ma takiego indeksu\n"; 
       return 0;
    }

    cout << "Wartość tablicy dla " << "tab[" << col << "]" << "[" << row << "]" << "to " << tab[col][row] <<endl ;

    system("pause");

    

    

}