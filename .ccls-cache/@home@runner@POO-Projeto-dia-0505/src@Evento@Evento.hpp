#include <iostream>
#include <vector>

using namespace std;

  class Evento{
    public:
			void set_qtdEventos();
			void set_produtor(string produtor);
      void set_nomeEvento(string nomeEvento);
			void set_dia(int dia);
			void set_mes(int mes);
			void set_ano(int ano);
			void set_hora(int hora);
			void set_minuto(int minuto);
			void set_local(string local);
			void set_qtdIngresso(int qtdIngresso);
			void set_vliIngresso(float vlIngresso);
      int get_hora();
      int get_minuto();
      string get_local();
      int get_qtdIngresso();
      float get_vlIngresso();
      string get_produtor();
      string get_nomeEvento();
      int get_dia();
      int get_mes();
      int get_ano();
      int get_qtdEventos();
			
	    private:
  			vector <string> nomeEvento;
  			vector <string> nomeProdutor;
        vector <int> dia;
        vector <int> mes;
        vector <int> ano;
				vector <string> local;
				vector <int> hora;
				vector <int> minuto;
				vector <int> qtdIngresso;
				vector <int> vlIngresso;
				vector <int> qtdEventos;
  };