#include <iostream>
using namespace std;
  class Data {
    public:
			void set_dia(int dia);
			void set_mes(int mes);
			void set_ano(int ano);
			int get_dia();
			int get_mes();
			int get_ano();
			void formatar(); 
			string get_dataFormatada(); 
			void CriarData();
			
    private:
      int dia;
      int mes;
      int ano;
      string dataFormatada;
  };