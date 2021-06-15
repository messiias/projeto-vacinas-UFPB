#include <string>
#include "../Insumos/Insumos.h"

Insumo::Insumo(){}

//SET Methods
void Insumo::setNome(std::string nome) {
  this->nome = nome;
};

void Insumo::setQuantidadeItem(int quant) {
  this->quantidadeItem = quant;
};

void Insumo::setValorUnitario(int valor) {
  this->valorUnitario = valor;
};

void Insumo::setDataVencimento(std::string dataVenc) {
  this->dataVencimento = dataVenc;
};

void Insumo::setFabricante(std::string fabricante) {
  this->nomeFabricante = fabricante;
};

void Insumo::setTipoInsumo(int tipoInsumo) {
  this->tipoInsumo = tipoInsumo;
};

// GET Methods
std::string Insumo::getDescricao() {
  
  std::string descricao;
  
  descricao.append("Nome: ");
  descricao.append(this->nome);
  descricao.append("\nData Vencimento: ");
  descricao.append(this->dataVencimento);
  descricao.append("\nFabricante: ");
  descricao.append(this->nomeFabricante);
  descricao.append("\nValor: ");
  descricao.append(std::to_string(this->valorUnitario));
  descricao.append("\nQuantidade: ");
  descricao.append(std::to_string(this->quantidadeItem));

  return descricao;
}

int Insumo::getQuantidade() {
  return this->quantidadeItem;
}

int Insumo::getTipoInsumo() {
  return this->tipoInsumo;
}

std::string Insumo::getNome() {
  return this->nome;
}

// Clone Method
Insumo* Insumo::clone(int quantidade) {
  return 0;
}