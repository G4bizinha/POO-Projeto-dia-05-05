#include <iostream>
using namespace std;

  class Dinheiro {
    public:
      void set_real(double real);
      void set_dolar(double dolar);
      void set_euro (double euro);
			void set_cartaoNumero(int c);
			void set_cartaoCodigoDeValidacao(int i);
			void set_cartaoNome(string n);
			void set_cartaoValidade(string validade);
			void set_pix(string p);
			void add_saldo(float s);
			void remove_saldo(float s);
      
			bool pagar(string pagar, string receber);
      int get_cartaoNumero();
			int get_cartaCodigoDeValidacao();
			string get_cartaoNome();
			string get_cartaoValidade();
			string get_pix();
      double get_real();
      double get_dolar();
      double get_euro ();
			float get_saldo();
			
    private:
      double real=0;
      double dolar=0;
      double euro=0;
		  int numero_cartao;
			int codigoValidacao_cartao;
      string nome_cartao;
      string validade_cartao;
      string pix;
			float saldo;
			
  };