//PROGRAMA 3 YARA ALINE GUZMÁN GARCÍA 0909-22-1792

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int n[8] = {1,2,3,4,32,12,9,10}; 
	int d;
	cout << "Arreglo original: "<<endl; 
	for (int d = 0; d < 8; d++) { 
		cout << n[d] << " "; 
	}
	cout << endl;
	for (d = 0; d < 4; d++) { 
		int temp = n[d]; 
		n[d] = n[7 - d]; 
		n[7 - d] = temp; 
	}
	cout << "Arreglo invertido: "; 
	for (d = 0; d < 8; d++) { 
		cout << n[d] << " ";
	}
	cout << endl;
	
	getch();
	return 0;
}
