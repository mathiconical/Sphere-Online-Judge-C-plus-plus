/*
A Copa do Mundo de 2010 será realizada na áfrica do Sul. Bolas de futebol são muito fáceis de transportar, 
já que elas saem das fábricas vazias e só são enchidas somente pelas lojas ou pelos consumidores finais.

Infelizmente o mesmo não pode ser dito das bolas de boliche. Como elas são completamente sólidas,
elas só podem ser transportadas embaladas uma a uma, em caixas separadas.

A SBC - Só Boliche Cascavel - é uma fábrica de bolas de boliche que trabalha somente através de encomendas
e envia todas as bolas por SEDEX. Como as bolas têm tamanhos diferentes, a SBC tem vários tamanhos de caixas diferentes
para transportá-las

* Tarefa
Escreva um programa que, dado o diâmetro de uma bola e as 3 dimensões de uma caixa (altura, largura e profundidade), 
diz se a bola de boliche cabe dentro da caixa ou não.

* Entrada
A primeira linha da entrada contém um inteiro N (1 ≤ N ≤ 10.000) que indica o diâmetro da bola de boliche. 
A segunda linha da entrada contém 3 números inteiros separados por um espaço cada: a altura A (1 ≤ A ≤ 10.000), 
seguida da largura L (1 ≤ L ≤ 10.000) e da profundidade P (1 ≤ P ≤ 10.000).

* Saída
Seu programa deve imprimir uma única linha, contendo a letra 'S' caso a bola de boliche caiba dentro da caixa ou 'N' caso contrário
*/


#include <iostream>
using namespace std;
int main(void){

// se o diametro da esfera for maior que
// algum dos lados da caixa, ela não entra.
// então só resta comparar o diametro com
// cada lado e teremos o resultado.

	int diam, altura, largura, profundidade;
  
	cin >> diam >> altura >> largura >> profundidade;
  
	if((diam <= altura and diam <= largura) and diam <= profundidade) // compara diametro com cada dimensão da caixa
		cout << "S";  // caso a esfera caiba
	else
		cout << "N";  // caso a esfera nao caiba
	return 0;
}