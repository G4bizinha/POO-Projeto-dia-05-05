#include "Ingresso.hpp"

  void Ingresso::set_proprietario(string p){proprietario = p;}

  void Ingresso::set_evento(string e){evento = e;}

	string Ingresso::get_evento(){return evento;}

  string Ingresso::get_proprietario(){return proprietario;}

  void Ingresso::remover_proprietario(string p){ proprietario = '\0'; }
