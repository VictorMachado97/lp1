#include <iostream>
#include "Pessoa.h"
#include <string>


using namespace std;


int main(){
	Pessoa p1=Pessoa("Victor");
	Pessoa p2=Pessoa("Machado",22,"83 9 96270922");
	
	p1.setIdade(43);
	p1.setTelefone("83 55899021");

	cout << p1.getNome() << endl << p1.getIdade() << endl << p1.getTelefone() << endl << endl;
	cout << p2.getNome() << endl << p2.getIdade() << endl << p2.getTelefone() << endl;
	

	return 0;
}
