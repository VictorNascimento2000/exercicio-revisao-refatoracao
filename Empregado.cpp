#include "Empregado.hpp"
#define HORAS 8

void Empregado::setSalarioHora(double _salarioHora) {
    salarioHora = _salarioHora;
}

double Empregado::getSalarioHora() {
    return salarioHora;
}

void Empregado::setQuotaMensalVendas(double _quotaMensalVendas) {
    quotaMensalVendas = _quotaMensalVendas;
}

double Empregado::getQuotaMensalVendas() {
    return quotaMensalVendas;
}

double Empregado::pagamentoMes(double horasTrabalhadas) {

  double t = horasTrabalhadas;	  
  //Cálculo de hora extra (+50% se horasTrabalhadas > HORAS)
  if (horasTrabalhadas > HORAS) {
    double x = horasTrabalhadas - HORAS;
    t += x / 2;
  }
  return t * salarioHora;
}