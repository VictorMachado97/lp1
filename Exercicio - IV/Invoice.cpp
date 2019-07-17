#include "Invoice.h"
#include <string>


using namespace std;


Invoice::Invoice(){}


Invoice::Invoice(int numero ,string desc,int quantidade,double preco){
	this-> numero = numero;
	this-> desc = desc;
	
	if(quantidade < 0 ){
		this-> quantidade =0;
	}else{
		this-> quantidae = quantidade;	
	}
	if (preco < 0){
		this-> preco = 0.00;
	}else{
		this-> preco = preco;
	}
}

int Invoice::getNum(){
	return numero;
}

string Invoice::getDesc(){
	return desc;
}

int Invoice::getQtd(){
	return qtd;
}

double Invoice::getPreco(){
	return preco;
}

void Invoice::setNum(int num){
	this->num=num;
}

void Invoice::setDesc(string desc){
	this->desc=desc;
}

void Invoice::setQtd(int quantidade){
	this-> quantidade = quantidade;
}

void Invoice::setPreco(double preco){
	this->preco=preco;
}

double Invoice::getInvoiceAmount(){
	return getQtd() * getPreco();
}
