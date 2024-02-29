#include <iostream>
using namespace std;
main(){
	
	/*
	int i = 5;
	while(i<5){
		cout<<"While: "<<i<<endl; 
		i++;
	}*/
	
	char respuesta='s';
	
	while(respuesta=='s' || respuesta=='S'){
		cout<<"Desea ingresar otro valor (s/n)";
		cin>>respuesta;
	}
	
	
	/*
	do{
		cout<<"Desea ingresar otro valor (s/n) ";
		cin>>respuesta;
		
		}while(respuesta=='s' || respuesta=='S');
	*/
	
	system("pause");
}
