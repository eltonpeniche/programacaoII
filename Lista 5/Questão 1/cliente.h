#ifndef CLIENTE_H_
#define CLIENTE_H_

#include "pessoafisica.h"
#include <iostream>
#include <string>
using namespace std;

class Cliente : public PessoaFisica{
	private:
		int telefone;
		string endereco;
	
	public:
		Cliente();
		Cliente(string,int, int, string);
		virtual~Cliente();
		void setTelefone(int);	
		void setEndereco(string);
		int getTelefone();
		string getEndereco();
		virtual void classe();
		void print();
};

#endif