#include "Horario.hpp"

int h1 , m1;

  void Horario::set_hora(int h){ hora = h;}
  void Horario::set_minuto(int m){minuto = m;}
  int Horario::get_minuto(){return minuto;}
  int Horario::get_hora(){return hora;}

void Horario::CriarHorario(){ // Criar Horario
  cout << "------------------------------------\n";
	cout << "Qual o horario do evento 🕐? \n";
  cout << "Digite a hora: ";
  cin >> h1;
	hora = h1;
  cout << "Digite o minuto: ";
  cin >> m1;
	minuto = m1;
	cout << "------------------------------------\n";
}