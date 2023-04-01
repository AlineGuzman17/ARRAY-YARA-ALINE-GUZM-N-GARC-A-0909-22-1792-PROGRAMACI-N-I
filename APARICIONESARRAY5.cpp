De//PROGRAMA 5 YARA ALINE GUZMÁN GARCÍA 0909-22-1792

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	string frutas[9] = { "fresa", "sandia", "melon", "fresa", "naranja", "melon", "mango", "naranja", "fresa" }; 
	int d,contador[5] = { 0, 0, 0, 0 }; 

	for (d = 0; d < 9; d++) { 
		if (frutas[d] == "fresa") { 
			contador[0]++;
		}
		else if (frutas[d] == "sandia") { 
			contador[1]++;
		}
		else if (frutas[d] == "melon") { 
			contador[2]++;
		}
		else if (frutas[d] == "naranja") { 
			contador[3]++;
	    }
                 else if (frutas[d] == "mango") { 
			contador[4]++;
	    }
		
	}

	cout << "Cantidad de frutas:" << endl;
	cout << "Fresas: " << contador[0] << endl; 
	cout << "Sandias: " << contador[1] << endl; 
	cout << "Melones: " << contador[2] << endl; 
	cout << "Naranjas: " << contador[3] << endl; 
	cout << "Mango: " << contador[4] << endl;
	
return 0;
}
