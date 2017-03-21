#ifndef EMPRESA_H_
#define EMPRESA_H_

#include "pessoajuridica.h"
#include "cliente.h"
#include "funcionario.h"
#include <vector>

class Empresa:public PessoaJuridica {
	private:
		vector <Cliente> listaCliente;
		vector <Funcionario> listaFunc;	
	public:
		Empresa();
		Empresa(string,int,string,string, Cliente &, Funcionario &);
		virtual ~Empresa();
		void addLista(Cliente &);
		void addLista(Funcionario &);   	
		virtual void print();
};

#endif
