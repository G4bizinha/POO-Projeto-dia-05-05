#include "Evento.hpp"
using namespace std;

void Evento::set_produtor(string produtor){
	nomeProdutor = produtor;
	}

void Evento::set_nomeEvento(string ne){nomeEvento = ne;}

void Evento::set_dia(int d){dia.push_back(d);}

void Evento::set_mes(int m){mes.push_back(m);}

void Evento::set_ano(int a){ano.push_back(a);}

void Evento::set_hora(int h) {hora = h;}

void Evento::set_minuto(int m) {minuto = m;}	

void Evento::set_local(string l) {local = l;}
			
void Evento::set_qtdIngresso(int qtdi){qtdIngresso = qtdi;}
			
void Evento::set_vliIngresso(float vli){vlIngresso = vli;}

int Evento::get_hora(){return hora;}

int Evento::get_minuto(){return minuto;}

string Evento::get_local(){return local;}
      
int Evento::get_qtdIngresso(){return qtdIngresso;}
      
float Evento::get_vlIngresso(){return vlIngresso;}
      
string Evento::get_produtor(){return nomeProdutor;}
      
string Evento::get_nomeEvento(){return nomeEvento;}
      
int Evento::get_dia(){return dia.size();}
      
int Evento::get_mes(){return mes.size();}
      
int Evento::get_ano(){return ano.size();}

void Evento::set_qtdEventos(){qtdEventos = qtdEventos+1;}
	    
int Evento::get_qtdEventos() {return qtdEventos;}
