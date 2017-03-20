#include "pessoajuridica.h"

PessoaJuridica::PessoaJuridica(){}
		
PessoaJuridica::PessoaJuridica(string nome, int cnpj,string razaoSocial,string nomeFantasia):Pessoa(nome){
	this->cnpj = cnpj;
	this->razaoSocial = razaoSocial;
	this->nomeFantasia = nomeFantasia;
}
		
PessoaJuridica::~PessoaJuridica(){}
		
void PessoaJuridica::setCnpj(int cnpj){
	this->cnpj = cnpj;
}	

void PessoaJuridica::setRazaoSocial(string razaoSocial){
	this->razaoSocial = razaoSocial;
}

void PessoaJuridica::setNomeFantasia(string nomeFantasia){
	this->nomeFantasia  = nomeFantasia;
}

int PessoaJuridica::getCnpj(){
	return this->cnpj;
}

string PessoaJuridica::getRazaoSocial(){
	return this->razaoSocial;
}

string PessoaJuridica::getNomeFantasia(){
	return this->nomeFantasia;
}

void PessoaJuridica::classe(){
	cout<<"-------------------------------"<<endl;
	cout<<"-------Pessoa Juridica---------"<<endl;
}
void PessoaJuridica::print(){
	Pessoa::print();
	cout<< "CNPJ: " << this->getCnpj() <<endl;
	cout<< "RAZÃO SOCIAL: " << this->getRazaoSocial() <<endl;
	cout<< "NOME FANTASIA: " << this->getNomeFantasia() <<endl;
}