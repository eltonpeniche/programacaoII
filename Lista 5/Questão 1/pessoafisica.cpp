#include "pessoafisica.h"

PessoaFisica::PessoaFisica(){}

PessoaFisica::PessoaFisica(string nome,int cpf):Pessoa(nome){
	this->cpf = cpf;
}

PessoaFisica::~PessoaFisica(){}

void PessoaFisica::setCpf(int cpf){
	this->cpf = cpf;
}	

int PessoaFisica::getCpf(){
	return this->cpf;
}
void PessoaFisica::classe(){
	cout<<"-------------------------------"<<endl;
	cout<<"--------- Pessoa Física--------"<<endl;
}
void PessoaFisica::print(){
	Pessoa::print();
	cout<<"CPF: "<<this->getCpf()<<endl;
}