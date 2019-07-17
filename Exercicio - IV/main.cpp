#include <iostream>
#include <string>
#include "Invoice.h"


using namespace std;

int main(){
	
	Invoice mouse=Invoice(2,"Pen Drive",5,10);
	Invoice teclado=Invoice();

	teclado.setNum(3);
	teclado.setDesc("Pen Drive");
	teclado.setQtd(7);
	teclado.setPreco(60.5);

	cout << mouse.getNum() << endl << mouse.getDesc() << endl << mouse.getQtd() << endl << mouse.getPreco() << endl <<mouse.getInvoiceAmount() << endl << endl;
	cout << teclado.getNum() << endl << teclado.getDesc() << endl << teclado.getQtd() << endl << teclado.getPreco() << endl << teclado.getInvoiceAmount() << endl;



	return 0;
}
