#include <iostream>
#include <map>

using namespace std;

int main() {

	map<int,string>prod;
//		chave|valor
	prod[0] = "Mouse";
	prod[1] = "Teclado";
	prod[2] = "Monitor";
	prod[3] = "Cx.Som";

	for(int i=0; i<4; i++){
		cout <<prod[i] << endl;
	}
	return 0;
}
