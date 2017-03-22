# Programação II - Lista 5

## Questão 1
Crie uma classe chamada Pessoa que tenha como atributo protegido o nome da
pessoa. Em seguida, crie duas outras classes chamadas PessoaFisica e
PessoaJuridica que herdem da classe Pessoa.

A classe PessoaFisica terá como atributo privado o CPF, enquanto a classe
PessoaJuridica terá como atributos privados o CNPJ, a razão social e o nome
fantasia. Crie métodos get, set e print para todos os atributos das três classes.

Crie uma classe chamada Funcionario que herda da classe PessoaFisica. Essa
classe deverá ter como atributos privados a matrícula, o salário base do
funcionário e a quantidade de horas trabalhadas no mês. Além disso, a classe terá
um método público chamado calculaSalarioBruto que não terá nenhum
parâmetro e deverá ser capaz de calcular e retornar o salario bruto através da
seguinte equação: salarioBase x quantidadeHorasTrabalhadas. Por fim, crie
métodos get, set e print para os atributos.

Crie uma classe chamada Cliente herdeira da classe PessoaFisica. Essa classe
deverá ter atributos privados que armazenem um telefone e um endereço. Crie
métodos get, set e print para esses atributos.

Crie uma classe chamada Empresa herdeira da classe PessoaJuridica. Essa classe
deverá ter uma lista de funcionários e outra lista de clientes (pode ser vetor). Crie
métodos para adicionar funcionários e clientes. Crie um método para imprimir
matrícula, nome e salário bruto dos funcionários e outro para imprimir nome,
telefone e endereço dos clientes. Crie também um método chamado
calcularFolhaDePagamento que deverá calcular o salário bruto de todos os
funcionários e retornar o total a ser pago aos funcionários.
