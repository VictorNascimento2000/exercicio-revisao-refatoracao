#include <string>
#include <iostream>
#include "Engenheiro.hpp"

void Engenheiro::setProjetos(int _projetos){
    projetos = _projetos;
}

void Engenheiro::setNome(std::string _nome){
    nome = _nome;
}

std::string Engenheiro::getNome(){
  return nome;
}

int Engenheiro::getProjetos(){
  return projetos;
}
