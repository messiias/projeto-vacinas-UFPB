#include <string>
#include <vector>
#include "Medicamentos.h"
#include "../Insumos/Insumos.h"

Medicamentos::Medicamentos() {
  this->tipoInsumo = 2;
}

//SET Methods
void Medicamentos::setDosagem(std::string dosagem) {
  this->dosagemMedicamentos = dosagem;
}

void Medicamentos::setFormaAdmin(std::string formaAdmin) {
  this->formaAdministracao = formaAdmin;
}

void Medicamentos::setDisponibilizacao(std::string formaDisp) {
  this->formaDisponibilizacao= formaDisp;
}

// GET Methods
std::string Medicamentos::getDescricao() {
  std::string descricao;

  descricao.append("\n");
  descricao.append(Insumo::getDescricao());
  descricao.append("\nDosagem: ");
  descricao.append(this->dosagemMedicamentos);
  descricao.append("\nAdministração: ");
  descricao.append(this->formaAdministracao);
  descricao.append("\nDisponibilização: ");
  descricao.append(this->formaDisponibilizacao);

  return descricao;
}