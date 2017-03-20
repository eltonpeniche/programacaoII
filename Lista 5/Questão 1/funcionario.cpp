#include "funcionario.h"

Funcionario::Funcionario(){}

Funcionario::Funcionario(string nome,int cpf,int matricula,int salBase,int hrsTrabalho):PessoaFisica(nome,cpf){
	this->matricula = matricula;
	this->salBase = salBase;
	this->hrsTrabalho = hrsTrabalho;
}
Funcionario::~Funcionario(){}

void Funcionario::setMatricula(int matricula){
	this->matricula = matricula;
}   	
void Funcionario::setSalBase(int salBase){
	this->salBase = salBase;
}
void Funcionario::setHrsTrabalho(int hrsTrabalho){
	this->hrsTrabalho = hrsTrabalho;
}
int Funcionario::getMatricula(){
	return this->matricula;
}   	
int Funcionario::getSalBase(){
	return this->salBase;
}
int Funcionario::getHrsTrabalho(){
	return this->hrsTrabalho;
}

void Funcionario::classe(){
	cout<<"-------------------------------"<<endl;
	cout<<"--------Funcionario------------"<<endl;
}
void Funcionario::print(){
	Pessoa::print();
	cout<<"MATRICULA: "<<this->getMatricula()<<endl;
	cout<<"SALARIO BASE: "<<this->getSalBase()<<endl;
	cout<<"QUANTIDADE DE HORAS TRABALHADAS: "<<this->getHrsTrabalho()<<endl;
}