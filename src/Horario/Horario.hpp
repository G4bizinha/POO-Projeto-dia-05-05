#include <iostream>
using namespace std;

  class Horario {
    public:
			void set_hora(int hora);
			void set_minuto(int minuto);
			int get_hora();
			int get_minuto();
			void CriarHorario();

    private:
			int hora;
			int minuto;

  };