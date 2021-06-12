#include <string>
#include "Epi.h"
#include "../Insumos/Insumos.h"
 
Epi::Epi() {
  this->tipoInsumo = 3;
}

//SET Methods
void Epi::setTipoEpi(std::string tipo) {
  this->tipoEpi = tipo;
}

void Epi::setInfoEpi(std::string info) {
  this->infoEpi = info;
}

//GET Methods
std::string Epi::getDescricao() {
  std::string descricao;

  descricao.append("\n");
  descricao.append(Insumo::getDescricao());
  descricao.append("\nTipo: ");
  descricao.append(this->tipoEpi);
  descricao.append("\nInfo: ");
  descricao.append(this->infoEpi);
  
  return descricao;
}

int Epi::getTipoInsumo() {
  return this->tipoInsumo;
}

// Clone Method
Insumo* Epi::clone(int quantidade) {
  // Altera a quantidade da atual instancia
  this->quantidadeItem -= quantidade;

  // Cria nova instância com os mesmos atributos, porém com a nova quantidade
  Epi *novoInsumo = new Epi();

  // Define os atributos
  novoInsumo->nome = this->nome;
  novoInsumo->quantidadeItem = quantidade;
  novoInsumo->valorUnitario = this->valorUnitario;
  novoInsumo->dataVencimento = this->dataVencimento;
  novoInsumo->nomeFabricante = this->nomeFabricante;
  novoInsumo->tipoInsumo = this->tipoInsumo;
  novoInsumo->tipoEpi = this->tipoEpi;
  novoInsumo->infoEpi = this->infoEpi;

  return novoInsumo;
}