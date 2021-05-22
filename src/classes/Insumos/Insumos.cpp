#include <fmt/core.h>
#include "Insumos.h"

Insumo::Insumo(){
  nome = "teste";
};

using namespace std;

// SET Methods
void Insumo::setNome(string nomeInsumo) {
  nome = nomeInsumo;
};

void Insumo::setDataVencimento(string vencimento) {
  dataVencimento = vencimento;
};

void Insumo::setNomeFabricante(string fabricante) {
  nomeFabricante = fabricante;
};

void Insumo::setValorUnitario(double valorItem) {
  valorUnitario = valorItem;
};

void Insumo::setQuantidade(int quantidade) {
  quantidadeItem = quantidade;
}

// GET Methods
string Insumo::getDescricao() {
  string descricao = fmt::format(
    "Nome: {}\nData Vencimento: {}\nFabricante: {}\nValor: {}\nQuantidade (MS): {}",
    nome, dataVencimento, nomeFabricante, valorUnitario, quantidadeItem
  );

  return descricao;
}