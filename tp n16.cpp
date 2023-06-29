#include<bits/stdc++.h>
using namespace std;
 
string InsertarCaracter(string palabra, char caracter){
	
	int cont=0;
	string palabraCambiada;
	for(int i=0; i<palabra.size(); i++){
		cont++;
	    palabraCambiada = palabraCambiada + palabra[i];
		if(cont != 0 && cont %3 == 0){
			palabraCambiada = palabraCambiada + caracter;
     	}
    }
	return palabraCambiada;
}

int main(){
	string Palabra;
	char Caracter;
	
	cout<<"ingrese una palabra : ";
	cin>>Palabra; 
	
	cout<<"ingrese un caracter para usar como separador : ";
	cin>>Caracter;
	
	string InserCaracter = InsertarCaracter(Palabra,Caracter);
	
	cout<<InserCaracter<<endl;
	
	return 0;
}
