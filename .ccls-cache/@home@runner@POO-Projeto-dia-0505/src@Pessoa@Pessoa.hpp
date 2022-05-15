#include <iostream>
#include <vector>
using namespace std;

  class Pessoa {
    public:
			void set_nome(string nome);
			void set_email(string email);
			void set_senha(string senha);
			void is_produtor(bool p);
      string get_nome();
			string get_email();
			string get_senha();
			bool get_isprodutor();
			void CriarPerfil();

    private:
			string nome;
			string senha;
			string email;
      bool isProdutor;
		
  };