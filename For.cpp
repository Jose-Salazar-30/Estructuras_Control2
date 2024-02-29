#include<iostream>
using namespace std;
main(){
	
	int inicio = 0,fin = 0, res = 0;
	
	cout<<"Ingrese Tabla Inicial:";
	cin>>inicio;
	cout<<"Ingrese Tabla Final:";
	cin>>fin;
	for (int rango=inicio;rango<=fin;rango++){
	cout<<"Tabla del: "<<rango<<endl;
		for (int i=1;i<=10;i++){
			res = rango * i;
			cout<<rango<< " X " << i <<" = "<<res<<endl;
		}
		
	}
	
	
	
	/*
	// i++ , i+=1 , i=i+1
	
	// int 4 bytes
	
	//int tam = 0;
	int datos[] = {10,40,100,250};
	//tam = sizeof(datos) / sizeof(datos[0]);
	 for (int i : datos){
	 	cout<<i<<endl;
	 }
	
	for(int i=0;i<tam;i++){
		cout<<datos[i]<<endl;
	}
	
	
	for (int i=0;i<10;i++){ // 4 hasta 7 ; 4 hasta 8
		
		if(i==5){
		cout<<"if"<<endl;
		continue;
	}
		
		cout<<i<<endl;
	
	}
	
	cout<<"Fuera del for"<<endl;
	*/
	system("pause"); 
}
