#include "empresa.h"
#include "cliente.h"
#include <iostream>
using std::cout;
using std::endl;

Empresa::Empresa(){}

Empresa::Empresa(string nome,int cnpj,string razaoSocial,string nomeFantasia,Cliente &cliente, Funcionario &func)
:PessoaJuridica(nome ,cnpj, razaoSocial, nomeFantasia)
{
	this->listaCliente.push_back(cliente);
	this->listaFunc.push_back(func);
}

Empresa::~Empresa(){
}

void Empresa::addLista(Funcionario &func){
	listaFunc.push_back(func);
}   	

void Empresa::addLista(Cliente &cliente){
	listaCliente.push_back(cliente);
}   	

void Empresa::print(){
	for (int i; i < this->listaCliente.size(); i++)
		this->listaCliente[i].print();
	
	for (int i; i < listaFunc.size(); i++)
		this->listaFunc[i].print();
}
