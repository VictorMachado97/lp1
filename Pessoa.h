#ifndef PESSOA_H
#define PESSOA_H
#include <string>


using namespace std;
	
class Pessoa{
	
	public:
		
		Pessoa(string nome);
		Pessoa(string nome, int idade, string telefone);
		
		string getNome();
		int getIdade();
		string getTelefone();
		
		void setNome(string nome);
		void setIdade(int idade);
		void setTelefone(string telefone);
	
	private:
		
		string nome;
		int idade;
		string telefone;

};


#endif
