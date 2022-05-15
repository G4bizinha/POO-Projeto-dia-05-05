#include "Local.hpp"
#include "../Evento/Evento.hpp"
#include "../color.hpp"

Evento ClassEvento;

string ne ,u, le, r, b, c , e , p;
int n;

  void Local::set_rua(string r) {rua = r;}

  void Local::set_bairro(string b){bairro = b;}
	
  void Local::set_numero(int n){numero = n;}
	
  void Local::set_cidade(string c){cidade = c;}
	
  void Local::set_estado(string e){estado = e;}
	
  void Local::set_pais(string p){pais = p;}
  
  void Local::set_url(string u){url = u;} 

  string Local::get_rua(){return rua;}
	
  string Local::get_bairro(){return bairro;}
	
  int Local::get_numero(){return numero;}
	
  string Local::get_cidade(){return cidade;}
	
  string Local::get_estado(){return estado;}
	
  string Local::get_pais(){return pais;}
	
  string Local::get_url(){return url;}

  void Local::CriarLocal(){

   int opcao;
		
	do{
		cout << "O Evento é Presencial ou Online ? \n";
		cout << "1 - Presencial | 2 Online \n";
		cin >> opcao;
		switch (opcao){
      case 1://presencial
					
          cout << "Qual o endereço do evento? \n";
        	cout << "Digite a rua: ";
					cin.ignore();
    			getline( cin, r);
					rua = r;
          cout << "Digite o bairro: ";
					cin.ignore();
    			getline( cin, b);
					bairro = b;
          cout << "Digite a cidade: ";
          cin.ignore();
    			getline( cin, c);
          cidade = c;
          cout << "Digite o número do endereço: ";
          cin >> n;
					
					 if(n == 0 || 1 || 2 || 3 || 4 || 5 || 6 || 7 || 8 || 9 ){
						 numero = n;
					}else{
						 cout << "Digite novamente! , tipo de valor não aceito 😔 ";
					}
          cout << "Digite o estado onde vai ocorrer o evento: ";
					cin.ignore();
    			getline( cin, e);
					estado = e;
				//cria uma subcondição
       
        int soun;
				cout << "------------------------------------\n";
					cout << "O Evento é Internacional ? ";
					cout << "1 - Sim 🤩 | 2 - Não 🌍 \n";
          cin >> soun;
					
				cout << "------------------------------------\n";
					switch(soun)
						{
							case 1:
								cout << "Digite em qual país o evento vai ocorrer: ";
          			cin.ignore();
    						getline(cin, p);		
								pais = p;
							break;
							case 2:
								pais= "Brasil";
        			cout << color::green << " --------------- Sucesso! ------------ \n" << color::off;
							cout << " O Evento foi criado com Sucesso! 🤩 \n";
							cout << " ---------------------------------- \n \n";
							break;
							default:
							cout << color::red << " --------------- Erro ❗ ------------ \n" << color::off;
							cout << " Digite uma Opção valida! \n";
							cout << " ---------------------------------- \n";
						} break;
			
			case 2://Online
				cout << "Qual o link para acessar o evento: \n";
				cout << "Digite a URl: ";
				cin.ignore();
    		getline(cin, u);
				url = u;
				//localEvento = url;
				ClassEvento.set_local(u);
				cout << color::green << " --------------- Sucesso! ------------ \n" << color::off;
				cout << " O Evento foi criado com Exito 🤩 \n";
				cout << " ---------------------------------- \n \n";
			break;
			
			default:
			cout << color::red << " --------------- Erro❗ ------------ \n" << color::off;
			cout << " Digite uma Opção valida! \n";
			cout << " ---------------------------------- \n";
		}
	}while(opcao < 1 || opcao > 2);

	
}

 