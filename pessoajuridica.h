#ifndef PESSOAJURIDICA_H_
#define PESSOAJURIDICA_H_

#include "pessoa.h"

class PessoaJuridica:public Pessoa{
	private:
		int cnpj;
		string razaoSocial;
		string nomeFantasia;	
	public:
		PessoaJuridica();
		PessoaJuridica(string,int,string,string);
		virtual~PessoaJuridica();
		void setCnpj(int);	
		void setRazaoSocial(string);
		void setNomeFantasia(string);
		int getCnpj();
		string getRazaoSocial();
		string getNomeFantasia();
		virtual void classe();
		virtual void print();
};

#endif