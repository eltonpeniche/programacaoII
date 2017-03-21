#include "empresa.h"
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
	cout << "lalala" << endl;
}

void Empresa::addLista(Funcionario &func){
	listaFunc.push_back(func);
}   	

void Empresa::addLista(Cliente &cliente){
	listaCliente.push_back(cliente);
}   	

void Empresa::print(){
	for (int i; i < listaCliente.size(); i++)
		listaCliente[i].print();
	
	for (int i; i < listaFunc.size(); i++)
		listaFunc[i].print();
}
