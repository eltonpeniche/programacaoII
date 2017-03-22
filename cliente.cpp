#include "cliente.h"	
	
Cliente::Cliente(){}

Cliente::Cliente(string nome,int cpf, int telefone, string endereco):PessoaFisica(nome,cpf){
	this->telefone = telefone;
	this->endereco = endereco;
}

Cliente::~Cliente(){}
		
void Cliente::setTelefone(int telefone){
	this->telefone = telefone;
}	

void Cliente::setEndereco(string endereco){
	this->endereco = endereco;
}

int Cliente::getTelefone(){
	return this->telefone;
}

string Cliente::getEndereco(){
	return this->endereco;
}

void Cliente::classe(){
	cout<<"-------------------------------"<<endl;
	cout<<"--------- CLIENTE--------------"<<endl;
}
void Cliente::print(){
	PessoaFisica::print();
	cout<<"TELEFONE: "<<this->getTelefone()<<endl;
	cout<<"ENDEREÇO: "<<this->getEndereco()<<endl;
}