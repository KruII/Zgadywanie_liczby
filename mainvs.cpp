#include "icludy.h" //Biblioteka includów.

using namespace std; //Uzupełnienie std.

int najmniejsza,najwieksza,liczba,odpowiedz;

int main(){
    srand( time( NULL ) );
    setlocale(LC_CTYPE, "Polish");
    cout<<"Z jakiego przedziału chcesz wylosować liczbę: ";
    cin>>najmniejsza;
    cin>>najwieksza;
    if (najmniejsza>najwieksza)
    {
        cout<<"Coś nie tak";
        exit(0);
    }
    liczba=najmniejsza+rand()%(najwieksza-najmniejsza+1);
    cout<<liczba;
    while (liczba!=odpowiedz)
    {
        cout<<"Podaj liczbę: ";
        cin>>odpowiedz;
        if (odpowiedz>liczba)
        {
            cout<<"Za dużo\n";
        }
        if (odpowiedz<liczba)
        {
            cout<<"Za mało\n";
        }
        
    }
    cout<<"Gratulację udało Ci się";
    Sleep(3000);
    return 0;
} 