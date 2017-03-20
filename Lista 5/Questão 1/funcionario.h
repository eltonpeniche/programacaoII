#ifndef FUNCIONARIO_H_
#define FUNCIONARIO_H_

#include <iostream>
#include "pessoafisica.h"
using namespace std;

class Funcionario: public PessoaFisica{
	protected:
		int matricula;
		int salBase;
		int hrsTrabalho;
	
	public:
		Funcionario();
		Funcionario(string,int,int,int,int);
		virtual~ Funcionario();
		void setMatricula(int);   	
		void setSalBase(int);
		void setHrsTrabalho(int);
		int getMatricula();   	
		int getSalBase();
		int getHrsTrabalho();
		virtual void classe();
		void print();
};
#endif