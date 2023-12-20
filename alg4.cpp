#include <iostream>
#include <locale.h>
using namespace std;

void podatek1(double rw){
    float podatek = rw*0.19;
    float wynik = rw-podatek;
    cout << "Twoje wynagrodzenie jest równe " << rw << "\nPodlega 19 procentowej stawce podatkowej więc zapłaciłeś: " << podatek << " podatku\n";
    cout << "Oznacza to, że twoje wynagrodzenie po odtrąceniu podatku wynosi: \n" << wynik;
    
};

void podatek2(double rw){
    float podatek = 20000*0.19 + ((rw-20000)*0.21);
    float wynik = rw-podatek;
    cout << "Twoje wynagrodzenie jest równe " << rw << "\nPodlega 21 procentowej stawce podatkowej więc zapłaciłeś: " << podatek << " podatku\n";
    cout << "Oznacza to, że twoje wynagrodzenie po odtrąceniu podatku wynosi: \n" << wynik;
    
};

void podatek3(double rw){
    float podatek = 20000*0.19 + (10000*0.21) + ((rw-30000)*0.28);
    float wynik = rw-podatek;
    cout << "Twoje wynagrodzenie jest równe " << rw << "\nPodlega 28 procentowej stawce podatkowej więc zapłaciłeś: " << podatek << " podatku\n";
    cout << "Oznacza to, że twoje wynagrodzenie po odtrąceniu podatku wynosi: \n" << wynik;
    
};


int main(){
    //Silnia
    cout << "<-------------Obliczanie wynagrodzenia-------------------->\n";
    cout << "Podaj liczbę godzin przepracowanych w ciągu tygodnia\n";
    int LG;
    cin >> LG;
    cout << "Podaj stawkę godzinową\n";
    float SG;
    cin >> SG;
    float PL;

    if(LG > 40){
        PL = 40*SG+((LG-40)*SG)*2;

    } else {
        PL = LG*SG;
    };

    cout << "\nTwoje tygodniowe wynagrodzenie wynosi\n" << PL;
    cout << "\nCzy chcesz obliczyć swoje roczne wynagrodzenie wraz z podatkami?\nWpisz 1 jeśli tak\n";
    int wybor;
    cin >> wybor;

    if(wybor==1){
        float roczne= 52*PL;
        if(roczne<20000){
            podatek1(roczne);
        } if(roczne<30000) {
            podatek2(roczne);
        } if(roczne>30000) {
            podatek3(roczne);
        }

    } else {
        cout << "Miłego dnia!";
    }
   


  
   

}