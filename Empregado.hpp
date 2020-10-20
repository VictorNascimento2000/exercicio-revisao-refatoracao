#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

    class Empregado {

      public:
        void setSalarioHora(double _salarioHora);
        double getSalarioHora();
        void setQuotaMensalVendas(double _quotaMensalVendas);
        double getQuotaMensalVendas();
        double pagamentoMes(double _horasTrabalhadas); 

      private:    
        double salarioHora;
        double quotaMensalVendas;
  };


#endif
