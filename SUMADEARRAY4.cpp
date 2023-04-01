//PROGRAMA 4 YARA ALINE GUZMÁN GARCÍA 0909-22-1792

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int n[10] = {1,2,3,4,5,6,7,8,9,10}; 
	int suma = 0, d; 
	for (d = 0; d < 10; d++) { 
		suma += n[d];
	}
	cout << "La suma de todos los numeros es: " << suma << endl; 
	
getch ();	
return 0;
}
