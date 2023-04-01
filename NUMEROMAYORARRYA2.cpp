//PROGRAMA 2 YARA ALINE GUZMÁN GARCÍA 0909-22-1792

#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	int numeros [6],n,mayor=0;
	
	cout<<"INGRESE EL NUMERO DE ELEMENTOS DEL ARRAY:   ";
	cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<i+1<<"INGRESE UN NUMERO: "<<endl;
		cin>>numeros[i];
		
		if(numeros[i]>mayor){
			mayor = numeros[i];
		}
    }  
    
    cout<<"\nEL ELEMENTO MAYOR ES:  "<<mayor<<endl;
    
    getch();
    return 0;
}
