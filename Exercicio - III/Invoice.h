#ifndef INVOICE_H
#define INVOICE_H
#include <string>


using namespace std;


class Invoice{
	
public:
	
	Invoice();	
	Invoice(int numero, string desc,int quantidade,double preco);
	
	int getNum();
	void setNum(int numero);
	
	string getDesc();
	void setDesc(string desc);
	
	int getQtd();
	void setQtd(int quantidade);
	
	double getPreco();
	double getInvoiceAmount();
	
	

private:
	
	int numero;
	string desc;
	int quantidade;
	double preco;



};

#endif
