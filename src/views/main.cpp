#include <iostream>
#include <string>
#include "../models/Insumos/Insumos.h"
#include "../models/EPI/Epi.h"
#include "../models/Medicamentos/Medicamentos.h"
#include "../models/Vacina/Vacina.h"

/**
 * 1 - Vacina
 * 2 - Medicamento
 * 3 - EPI
*/

int main(void){

  Vacina *teste = new Vacina();
  Insumo *testeArray[1];
  
  teste->setNome("Ivermectina");
  teste->setQuantidadeItem(100);
  teste->setValorUnitario(20);
  teste->setDataVencimento("21/06/2021");
  teste->setFabricante("ERM");
  teste->setTipoVacina("RNA Mensageiro");
  teste->setDose(2);
  teste->setIntervalo(28);

  std::cout << teste->getDescricao() << std::endl;

  testeArray[0] = teste;

  std::cout << testeArray[0]->getTipoInsumo() << std::endl;
  
  return 0;
}
