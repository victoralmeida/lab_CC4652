#include<cstdlib>
#include<iostream>

#include"ldde.h"
//#include"no.h"

using namespace std;

int main() {

	Ldde<int> lista;
	lista.insere(10);
	lista.insere(9);
	lista.insere(180);
	lista.insere(184);
	lista.insere(165);
	lista.insere(2);
	lista.insere(1);
	
	lista.remove(184);
	lista.remove(165);
	lista.remove(7);
	lista.remove(1);

	lista.imprime();
	

	return 0;
}
