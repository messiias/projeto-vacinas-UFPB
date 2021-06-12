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

// Clone Method
Insumo* Vacina::clone(int quantidade) {
  // Altera a quantidade da atual instancia
  this->quantidadeItem -= quantidade;

  // Cria nova instância com os mesmos atributos, porém com a nova quantidade
  Vacina *novoInsumo = new Vacina();

  // Define os atributos
  novoInsumo->nome = this->nome;
  novoInsumo->quantidadeItem = quantidade;
  novoInsumo->valorUnitario = this->valorUnitario;
  novoInsumo->dataVencimento = this->dataVencimento;
  novoInsumo->nomeFabricante = this->nomeFabricante;
  novoInsumo->tipoInsumo = this->tipoInsumo;
  novoInsumo->tipoVacina = this->tipoVacina;
  novoInsumo->dosePaciente = this->dosePaciente;
  novoInsumo->intervaloDose = this->intervaloDose;

  return novoInsumo;
}