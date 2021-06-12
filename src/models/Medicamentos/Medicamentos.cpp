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

// Clone Method
Insumo* Medicamentos::clone(int quantidade) {
  // Altera a quantidade da atual instancia
  this->quantidadeItem -= quantidade;

  // Cria nova instância com os mesmos atributos, porém com a nova quantidade
  Medicamentos *novoInsumo = new Medicamentos();

  // Define os atributos
  novoInsumo->nome = this->nome;
  novoInsumo->quantidadeItem = quantidade;
  novoInsumo->valorUnitario = this->valorUnitario;
  novoInsumo->dataVencimento = this->dataVencimento;
  novoInsumo->nomeFabricante = this->nomeFabricante;
  novoInsumo->tipoInsumo = this->tipoInsumo;
  novoInsumo->dosagemMedicamentos = this->dosagemMedicamentos;
  novoInsumo->formaAdministracao = this->formaAdministracao;
  novoInsumo->formaDisponibilizacao = this->formaDisponibilizacao;

  return novoInsumo;
}