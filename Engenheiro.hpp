#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H
#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado{

    public:
      void setProjetos(int _projetos);
      void setNome(std::string _nome);
	    std::string getNome();
	    int getProjetos();

    private:
      int projetos;
      std::string nome;
};

#endif