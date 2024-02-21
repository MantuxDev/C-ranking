#include<iostream>

using namespace std;


//prototipi
int menu();
void inserimento(string v[], int &x, bool &ver);
void visualizza( string v[], int x,bool ver);
void trova(string v[],int x, bool ver);


int main(){

    int n, scelta;
    const int max_vet=100;
    string classifica[max_vet]; 

    bool verifica=false;


    do
    {
        scelta=menu();

        switch (scelta)
        {
            case 1:{
                inserimento(classifica,n,verifica);
                break;
            }

            case 2:{
                visualizza(classifica,n,verifica);
                break;
            }

            case 3:{
                trova(classifica,n,verifica);
                break;
            }

            case 0:{
                cout<<"Sei uscito dal programma"<<endl;
                break;
            }

            default:{
                cout<<"Attenzione, scelta sbagliata"<<endl;
                break;
            }
            
        }

    } while (scelta);
    


    system("pause");
    return 0;
}

int menu(){

    int s;

    do
    {
        cout<<"\t -----Menu'-----"<<endl;
        cout<<"1) Inserisci i partecipanti"<<endl;
        cout<<"2) Visuallizza la classifica"<<endl;
        cout<<"3) Cerca un partecipante"<<endl;
        cout<<"0) Esci"<<endl;

        cout<<endl;

        cout<<"Scegli un opzione: ";
        cin>>s;
        
    } while (s<0 || s>3);

    return s;
    
}

void inserimento(string v[], int &x, bool &ver){

    cout<<"Quanti concorenti hanno partecipato alla gara? ";
    cin>>x;


    for(int i=0; i<x; i++){
        cout<<"Inserisci il nome del "<<i+1<<" classificato: ";
        cin>>v[i];
    }

    ver=true;
    cout<<endl;

}

void visualizza( string v[], int x, bool ver){

    if(ver==true){
        cout<<"-----Classiffica-----"<<endl;

        for(int i=0; i<x;i++){

            cout<<i+1<<")"<<v[i]<<endl;

        }

        cout<<endl;
    }
    else{
        cout<<"Attenzione, Inserisci prima la classifica"<<endl;
    }

}

void trova(string v[],int x, bool ver){
    
    bool trovato=false;
    string nome;
    int j;

    cout<<"Inserisci il nome del partecipante da cercare: ";
    cin>>nome;

    cout<<endl;


    if(ver==true){

        for(int i=0;i<x;i++){

            if(v[i]==nome){
                trovato=true;
                j=i;
            }

        }

        if(trovato==true){
            cout<<"Concorente trovato: "<<endl;
            cout<<j+1<<")"<<v[j]<<endl;
        }

        if(trovato==false){
            cout<<"Concorente non trovato"<<endl;
            cout<<endl;
        }

        cout<<endl;
    }
    else{
        cout<<"Attenzione, Inserisci prima la classifica"<<endl;
        cout<<endl;
    }
}