#ifndef PESSOA_H_
#define PESSOA_H_

#include <iostream>
#include <string>
using namespace std;

class Pessoa{
	protected:
		string nome;
	
	public:
		Pessoa();
		Pessoa(string);
		virtual~Pessoa();
		void setNome(string);	
		string getNome();
		virtual void classe();
		virtual void print();
};
#endif