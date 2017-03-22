#include <iostream>
#include <locale.h>
#include "pessoa.h"
#include "pessoajuridica.h"
#include "funcionario.h"
#include "cliente.h"
#include "empresa.h"

using namespace std;
	
void avaliar(Pessoa *p){
	p->print();
}

int main(){
	setlocale(LC_ALL,"portuguese");
	PessoaJuridica pj("aaaaa",12313,"bbbbb","ccccc");
	cout << "Pessoa Juridica" << endl;
	avaliar(&pj);
	
	Funcionario f("aaaaa",11111,22222,33333,4444);
	cout << "Funcionario" << endl;
	avaliar(&f);
	
	Cliente c("aaaaa", 99999, 32344444, "asdasdasdasd");
	cout << "Cliente" << endl;
	avaliar(&c);
	
	Cliente cliente2("Elton", 35, 988, "UFPA");

	cout << "\nEmpresa" << endl;
	Empresa e("Prog2All", 494, "Program", "Programming2", cliente2, f);
	avaliar(&e);

	return 0;       
}
