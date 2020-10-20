#ifndef VENDEDOR_H
#define VENDEDOR_H

#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado { 

	 public:
    double getQuotaTotalAnual();
	  void setNome(std::string _nome);
	  std::string getNome();

  private:
    std::string nome; 
};

#endif
