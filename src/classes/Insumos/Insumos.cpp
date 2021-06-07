#include <iostream>
#include "Insumos.h"
#include <string>

Insumo::Insumo(){};

// SET Methods
void Insumo::setNome(std::string nomeInsumo) {
  this->nome = nomeInsumo;
};

void Insumo::setDataVencimento(std::string vencimento) {
  dataVencimento = vencimento;
};

void Insumo::setNomeFabricante(std::string fabricante) {
  nomeFabricante = fabricante;
};

void Insumo::setValorUnitario(double valorItem) {
  valorUnitario = valorItem;
};

void Insumo::setQuantidade(int quantidade) {
  quantidadeItem = quantidade;
};

// GET Methods
std::string Insumo::getDescricao() {
  // "Nome: " + "DataVencimento:" + "Fabricante: " + "Valor:" + "Quantidade (MS):"

  std::string descricao;
  descricao.append("Nome: ");
  descricao.append(this->nome);
  descricao.append("Data Vencimento: ");
  descricao.append(this->dataVencimento);
  descricao.append("Valor: ");
  descricao.append(std::to_string(this->valorUnitario));
  descricao.append("Quantidade: ");
  descricao.append(std::to_string(this->quantidadeItem));

  return descricao;
};

void Insumo::getNome(){
  std::cout << this->nome;
}