#include <iostream>

#include "classes/Insumos/Insumos.h"

int main() {

  Insumo *teste = new Insumo();
  
  teste->setNome("Teste");
  teste->setNomeFabricante("Aleatorio");
  teste->setDataVencimento("03/05/2021");
  teste->setValorUnitario(3.5);
  teste->setQuantidade(100);


  std::cout << teste->getDescricao();
}
