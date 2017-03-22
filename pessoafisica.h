#ifndef PESSOAFISICA_H_
#define PESSOAFISICA_H_

#include "pessoa.h"
#include <iostream>

using namespace std;

class PessoaFisica : public Pessoa{
	private:
		int cpf;
	
	public:
		PessoaFisica();
		PessoaFisica(string,int);
		virtual~PessoaFisica();
		void setCpf(int);	
		int getCpf();
		virtual void classe();
		virtual void print();
};

#endif