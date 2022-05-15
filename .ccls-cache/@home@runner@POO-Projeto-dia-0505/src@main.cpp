#include <iostream>
#include <string>
#include <locale>
#include <vector>
#include "color.hpp"
using namespace std;

//sistema de sleep
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

// includes
#include "./Pessoa/Pessoa.hpp" 
#include "./Ingresso/Ingresso.hpp"
#include "./Evento/Evento.hpp"
#include "./Data/Data.hpp"
#include "./Local/Local.hpp"
#include "./Horario/Horario.hpp"
#include "./Carteira/Carteira.hpp"

// cria a invocação para chamar a classe
Pessoa pessoa;
Evento evento;
Ingresso ingresso;
Data data;
Local local;
Horario horario;
Carteira carteira;

// variaveis globais
	int controlemenu = 0, controle=1;
	string NomeEvento;

void Menu();

void CriarEvento(){

	setlocale (LC_ALL,"portuguese");
  cout << color::purple << "------------- Criar Evento ------------ \n" << color::off;
	cout << "Qual o nome do Evento? \n";
	cout << "Digite o nome do Evento: ";
	cin.ignore();
	getline(cin ,NomeEvento);
	evento.set_nomeEvento(NomeEvento);
	evento.set_produtor(pessoa.get_nome());
	cout << "------------------------------------\n";
	data.CriarData(); 
	cout << "\n";
	horario.CriarHorario();
	cout << "\n";
	local.CriarLocal();
	evento.set_qtdEventos();

	if(pessoa.get_isprodutor()==0){
		controlemenu=3;
	}else if(pessoa.get_isprodutor()==1){
		controlemenu=2;
	}
}

void ListarEvento () {
  cout << color::cyan << "------------- Listar Eventos ------------ \n" << color::off;
	if(evento.get_qtdEventos() == 0){
		cout << color::yellow << "------------- Alerta ❗ ------------ \n";
		cout << "Nenhum Evento foi encontrado! 😥 \n";
		cout << "------------------------------------ \n \n" << color::off;
	}else{
		for (int i=0 ; i< evento.get_qtdEventos();i++){
			cout << color::cyan << "------------- Evento 🥳 ------------ \n" << color::off;
			cout << i+1;
			cout << " - Nome do Evento: ";
			cout << evento.get_nomeEvento() << endl;
			cout << " - Artista: ";
			cout << evento.get_produtor() << endl;
			cout << " - Data: ";
		  cout << data.get_dataFormatada() << endl;
			cout << color::cyan << "------------- Bom  Evento 🥳 ------------ \n" << color::off;
		}
	}
}

void ComprarIngresso(){ // Comprar Ingresso
	string i;
  cout << color::green << "------------- Comprar Ingresso ------------ \n" << color:: off;
		if(evento.get_qtdEventos() == 0){
			cout << color::yellow << "------------- Alerta ❗ ------------ \n";
			cout << "Nenhum Evento esta vendendo ingresso no momento\n";
			cout << "------------------------------------ \n \n"  << color::off;
		}else{

			cout << "Para qual Evento você deseja comprar um ingresso?\n";
			cout << "digite o nome do evento: \n";
			cin >> i;

			if(i == evento.get_nomeEvento()){
				 string proprietario = pessoa.get_nome();
				ingresso.set_proprietario(proprietario);
				ingresso.set_evento(i);
			}
     }
}

void PedirReembolso() { // Pedir Reembolso
	string nomeevento;
	bool achou = 0;
		do{
			cout << color::green << "------------- Pedir Reembolso ------------ \n" << color::off;
			cout << "Para qual Evento você deseja pedir reembolso?\n";
			cout << "digite o nome do evento: ";
			cin >> nomeevento;
			cout << "------------------------------------ \n \n";
				if(evento.get_nomeEvento() != nomeevento){
					cout << color::redn << "------------- Erro! ------------ \n";
					cout << "Nenhum Evento foi encontrado com esse nome, tente novamente\n";
					cout << "------------------------------------ \n \n" << color::off;
				}else{
				achou =1;
				ingresso.remover_proprietario(pessoa.get_nome());
			}
	}while(achou == 0);
}

// -- Menu para produtor
void MenuProdutor(){
	do{
	int i;
	cout << color::blue << "----------------------------------------------------- \n" << color::off;
  cout << color::blue << " 👋 Olá " << color::off;
	cout << pessoa.get_nome() << endl;
	cout << " \n";
	cout << "Painel de Produtor.\n \n";
	cout << "Escolha uma das opções abaixo:\n";
	cout << "1 - Criar evento\n";
	cout <<	"2 - Listar Eventos \n";
	cout << "3 - Ver a Carteira \n";
	cout << "4 - Deslogar \n";
	cin >> i;
	cout << color::blue << "----------------------------------------------------- \n" << color::off;

	switch(i){
		case 1:
			CriarEvento();
			controlemenu=2;
		break;
		case 2:
			ListarEvento();
			controlemenu=2;
		break;
		case 3:
		carteira.Show();
		controlemenu=2;
		break;
		case 4:
			controlemenu=0;
			Menu();
		break;
	}
	}while(controlemenu==2);
	controlemenu=2;
}
// ---- menu do usuario
void MenuUsuario(){
  int e;
    do{
		cout << color::blue << "----------------------------------------------------- \n" << color::off;
		cout << color::blue << " 👋 Olá " << color::off;
		cout << pessoa.get_nome() << endl;
		cout << " \n";
		cout << "Escolha uma das opções abaixo:\n";
  	cout <<	"1 - Listar Eventos | Comprar ingressos \n";
		cout << "2 - Ver a Carteira \n";
		cout << "3 - Ver meus ingressos \n";
		cout << "4 - Pedir Reembolso \n";
    cout << "5 - Deslogar \n";
    cin >> e;
		cout << color::blue << "----------------------------------------------------- \n" << color::off;
      switch (e){
        case 1:
          ListarEvento();
					ComprarIngresso();
          controlemenu=3;
        break;
        
        case 2:
					carteira.Show();
					controlemenu=3;
				break;
				
				case 3:
					cout << ingresso.get_evento();
					controlemenu=3;
				break;

        case 4:
          PedirReembolso();
					controlemenu=3;
				break;
				
        case 5:
			    controlemenu=0;
					Menu();
		    break;
        
      }
      }while(controlemenu==3);
	controlemenu=3;
  }
//sistema para logar o usuario no sistema
void Logar(){
	string email;
	string senha;
	cout << "Entrar no sistema...\n";
	sleep(1);
	cout << "digite o seu e-mail \n";
	cin >> email;
	cout << "digite a sua senha \n";
	cin >> senha;

	if(email == pessoa.get_email() && senha == pessoa.get_senha()){
		if(pessoa.get_isprodutor() == 0){
			MenuUsuario();
			controlemenu = 3;
		}else if(pessoa.get_isprodutor() == 1){
			MenuProdutor();
			controlemenu = 2;
		}
	}else{
		cout << color::red << "E-mail ou senha incorretos \n";
	}
	
}

// ----------- Menu da aplicação -----------
void Menu(){ // Menu 
	do{
  int op;
			cout << color::purple << " 👋 Bem vindo ao Comprar Ingressos.com 🤩🥳 \n" << color::off;
			cout << "Aqui você encontra os melhores preços para os Melhores eventos! \n";
			cout << "Escolha uma das opções abaixo.. \n \n";
			cout << color::blue << " ----------- Menu ------- \n" << color::off;
			cout << "1 - Cadastrar | Criar perfil \n";
			cout << "2 - Logar \n";
			cout << "---------------------------------------------\n";
			cin >> op;
		switch(op)
			{
				case 1:
					pessoa.CriarPerfil();
				break;
				case 2://Criar evento
					Logar();
				break;
				default:
				cout << color::redn << "--------------------- Erro ❗ -----------------------\n" << color::off;
				cout << "Opção inválida , tente novamente\n";
				cout << "---------------------------------------------\n";
			} //switch
	}while(controlemenu == 0);
}

// ----------- Main -----------
int main() { //Main
	setlocale (LC_ALL,"portuguese");
	Menu();
}