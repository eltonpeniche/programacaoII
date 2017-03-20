#include "pessoa.h"	
	
Pessoa::Pessoa(){}

Pessoa::Pessoa(string nome){
	this->nome = nome;
}

Pessoa::~Pessoa(){}

void Pessoa::setNome(string nome){
	this->nome = nome;
}	

string Pessoa::getNome(){
	return this->nome;
}
void Pessoa::classe(){
	cout<<"-------------------------------"<<endl;
	cout<<"--------- PESSOA----------------"<<endl;
}
void Pessoa::print(){
	cout<< "NOME: " << this->getNome() <<endl;
}
