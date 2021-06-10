#include <iostream>
#include <string>
#include "Vacina.h"

Vacina::Vacina(){
  this->tipoInsumo = 1;
}

// SET Methods
void Vacina::setTipoVacina(std::string tipo) {
  this->tipoVacina = tipo;
}

void Vacina::setDose(int doses) {
  this->dosePaciente = doses;
}

void Vacina::setIntervalo(int intervalo) {
  this->intervaloDose = intervalo;
}

// GET Methods
std::string Vacina::getDescricao() {
  std::string descricao;

  descricao.append("\n");
  descricao.append(Insumo::getDescricao());
  descricao.append("\nTipo: ");
  descricao.append(this->tipoVacina);
  descricao.append("\nDose: ");
  descricao.append(std::to_string(this->dosePaciente));
  descricao.append("\nIntervalo: ");
  descricao.append(std::to_string(this->intervaloDose));

  return descricao;
}