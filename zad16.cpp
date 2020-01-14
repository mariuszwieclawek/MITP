#include<iostream>
#include<cstdlib>
#include<cstring>
#include<string>
#include"sortint.h"

using namespace std;

int main(int argc, char *argv[]){
    if(strcmp(argv[2],"bubble")==0 || strcmp(argv[2],"insert")==0){

    int wybor;

    if(strcmp(argv[2],"bubble")==0){
	cout<<endl<<"Wybrales sortowanie babelkowe"<<endl<<endl;
	wybor=1;
    }
    else{
	cout<<endl<<"Wybrales sortowanie przez wstawianie"<<endl<<endl;
	wybor=2;
    }

    int *tab,n;
    cout<<"Podaj ile liczb chcesz posortowac"<<endl;
    cin>>n;

    tab=new int[n];

    cout<<endl<<"Podaj liczby do posortowania"<<endl;

    for(int i=0;i<n;i++){
	cin>>tab[i];
    }

    cout<<endl<<"Podane liczby przed sortowaniem:"<<endl;

    for(int i=0;i<n;i++){
	cout<<tab[i]<<" ";
    }

    switch(wybor){
	case 1:
		bubble(tab,n);
		break;
	case 2:
		insert(tab,n);
		break;
    }

    cout<<endl<<"Podane liczby po sortowaniu:"<<endl;

    for(int i=0;i<n;i++){
		cout<<tab[i]<<" ";
    }
    cout<<endl<<endl;

    delete []tab;
    tab=NULL;

}
else{
     cout<<endl;
     cout<<"Prawidlowe uzycie: zad16 -n Nazwa algorytmu sortujacego"<<endl;
     cout<<endl<<"Dostepne algorytmy:"<<endl;
     cout<<"bubble-Sortowanie babelkowe"<<endl;
     cout<<"insert-Sortowanie przez wstawianie"<<endl;
}
return 0;
}
