 #include <iostream>
using namespace std;

  class Ingresso {
    public:
			void set_proprietario(string pessoa);
			void set_evento(string evento);
			void remover_proprietario(string p);
			string get_proprietario();
			string get_evento();
				
    private:
			string proprietario;
			string evento;

  };