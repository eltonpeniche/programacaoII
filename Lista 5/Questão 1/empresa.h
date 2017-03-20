#ifndef EMPRESA_H_
#define EMPRESA_H_

#include "pessoajuridica.h"
#include "cliente.h"
#include "funcionario.h"
#include <vector>

class Empresa:public PessoaJuridica{
	private:
	vector <Cliente> listaCliente;
	vector <Funcionario> listaFunc;	
	
	public:
		Empresa();
		Empresa(string,int,string,string,string,string);
		virtual~Empresa();
		void setListaCliente(string);
		void setListaFunc(string);
		string getListaCliente();
		string getListaFunc();
		void addLista(Cliente);
		void addLista(Funcionario);   	
		virtual void classe();
		virtual void print();
};

#endif