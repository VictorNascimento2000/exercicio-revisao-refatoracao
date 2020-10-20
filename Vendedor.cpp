#include <string>
#include "Empregado.hpp"
#include "Vendedor.hpp"
#define MESES 12

double Vendedor::getQuotaTotalAnual() {
	return getQuotaMensalVendas() * MESES;
}

std::string Vendedor::getNome() {
	return nome;
}

void Vendedor::setNome(std::string _nome) {
	nome = _nome;
}


