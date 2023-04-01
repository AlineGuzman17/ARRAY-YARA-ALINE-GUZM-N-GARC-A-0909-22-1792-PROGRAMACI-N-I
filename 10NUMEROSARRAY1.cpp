// PROGRAMA 1 YARA ALINE GUZMÁN GARCÍA 0909-22-1792 

#include <iostream>
#include <conio.h>


using namespace std;
int main(){
	
	int numeros [] = {1,2,3,4,5,11,12,13,14,15};
	int suma = 0;
	
	for (int i=0;i<10;i++){
		suma += numeros[i];
	}
	
	cout<<"LA SUMA DE LOS NUMEROS ES IGUAL A=  "<<suma <<endl;
	
	getch();
	return 0;
}
