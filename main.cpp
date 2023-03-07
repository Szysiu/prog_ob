#include <iostream>

using namespace std;

int main() {
    int w,k;
    cout<<"Liczba wierszy: ";
    cin>>w;
    cout<<"Liczba kolumn: ";
    cin>>k;
    int tab[w][k];

    ::srand(time(NULL));
    for(int i=0;i<w;i++){
        for(int j=0;j<k;j++){
            tab[i][j]=::rand()%10+1;
        }
    }
    for(int i=0;i<w;i++){
        for(int j=0;j<k;j++){
            cout<<tab[i][j]<<" ";
        }
        cout<<endl;
    }

    int suma_gora=0;
    for(int i=0;i<w;i++){
        for(int j=i+1;j<k;j++){
            suma_gora+=tab[i][j];
        }
    }
    cout<<"suma gora: "<<suma_gora;
}
