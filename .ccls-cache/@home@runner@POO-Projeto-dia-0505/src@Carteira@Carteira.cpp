#include <iostream>
using namespace std;

#include "Carteira.hpp"
#include "../color.hpp"
#include "../Dinheiro/Dinheiro.hpp"

Dinheiro dinheiro;
int menu =1;

void Carteira::Show(){
	int i;
	float valor;
	do{
	cout << color::green << "------ Carteira 🤑 ----- \n" << color::off;
	cout << "1 - Adicionar Saldo \n";
	cout << "2 - Ver Saldo \n";
	cout << "3 - Sair \n";
	cin >> i;
	cout << color::green << "------------------------- \n" << color::off;
		switch(i){
			case 1:
				cout << color::green << "------ Carteira 🤑 ----- \n" << color::off;
				cout << "Quanto você deseja adicionar a sua conta? \n";
				cout << "digite o valor a ser depositado: ";
				cin >> valor;
				dinheiro.add_saldo(valor);
				cout << color::green << "Saldo adicionado com sucesso! \n" << color::off;
				cout << color::green << "------------------------- \n" << color::off;
			break;
			case 2:
				cout << color::green << "------ Carteira 🤑 ----- \n" << color::off;
				cout << color::green << "Saldo em conta: R$ \n" << color::off;
				cout<< dinheiro.get_saldo();
				cout << color::green << " \n ------------------------- \n" << color::off;
			break;
			case 3:
				menu=2;
			break;
		}
	}while(menu==1);
}






