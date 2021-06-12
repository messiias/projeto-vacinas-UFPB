#include <string>
#include <vector>
#include "Local.h"
#include "../Insumos/Insumos.h"

Local::Local() {}

// SET Methods

void Local::setNomeEstado(std::string localNome){
  this->localNome = localNome;
}

void Local::setInsumoParaLocal(Insumo *novoElemento) {
  this->insumosDoLocal.push_back(novoElemento);
}

// GET Methods
std::string Local::getNomeEstado(){
  return this->localNome;
}

std::vector < Insumo* > Local::getInsumos() {
  return this->insumosDoLocal;
}

std::vector < std::string > Local::getInsumosNome() {
  std::vector < std::string > auxVector;

  for(auto elem: this->insumosDoLocal) auxVector.push_back(elem->getNome());
  
  return auxVector;
}