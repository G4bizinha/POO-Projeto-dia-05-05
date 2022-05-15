#include "Pessoa.hpp"
#include "../color.hpp"

void Pessoa::set_email(string e){email = e;}
void Pessoa::set_nome(string n){nome = n;}
void Pessoa::set_senha(string s){senha = s;}
void Pessoa::is_produtor(bool p){isProdutor = p;}
bool Pessoa::get_isprodutor() {return isProdutor;}
string Pessoa::get_nome(){return nome;}
string Pessoa::get_email(){return  email;}
string Pessoa::get_senha(){return senha;}


void Pessoa::CriarPerfil(){
	string n, e, s;
	int p;
	cout << color::yellow << "------ Criar Perfil 🙋🏻‍♀️🙋🏻‍♂️ ------- \n" << color::off;
	cout << "Qual o seu nome:\n";
	cin.ignore();
	getline(cin ,n);
	nome = n;
	cout << "Qual o seu e-mail:\n";
  cin >> e;
	email = e;
	cout << "Qual a sua senha:\n";
	cin >> s;
	senha = s;
	cout << "Criar perfil como produtor?\n";
	cout << "1 - Sim | 2 - Não \n";
	cin >> p;

	if(p == 1){
		isProdutor=1;
	}else if(p==2){
		isProdutor=0;
	}

	
	cout << color::green << "------------- Sucesso ! ------------ \n" << color::off;
	cout << "Perfil criado com sucesso! 🤩 \n";
	cout << "------------------------------------ \n \n";
}

