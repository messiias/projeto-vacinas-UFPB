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
