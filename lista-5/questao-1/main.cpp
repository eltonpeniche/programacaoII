#include <iostream>
#include <locale.h>
#include "pessoa.h"
#include "pessoajuridica.h"
#include "funcionario.h"
#include "cliente.h"
#include "empresa.h"

using namespace std;
	
void avaliar(Pessoa *p){
	p->classe();
	p->print();
}

int main(){
	setlocale(LC_ALL,"portuguese");
	PessoaJuridica pj("aaaaa",12313,"bbbbb","ccccc");
	avaliar(&pj);
	
	Funcionario f("aaaaa",11111,22222,33333,4444);
	avaliar(&f);
	
	Cliente c("aaaaa", 99999, 32344444, "asdasdasdasd");
	avaliar(&c);
	
	Cliente cliente2("Elton", 35, )

	Empresa
	cout << "Hello world!\n";
	return 0;       
}
