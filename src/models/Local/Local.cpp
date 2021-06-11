#include <string>
#include <vector>
#include "Local.h"

Local::Local() {}

// SET Methods

void Local::setNomeEstado(std::string localNome){
  this->localNome.push_back(localNome);
}

// GET Methods
std::string Local::getNomeEstado(){
  std::string descricao;
  
  for(int i = 0; i < this->localNome.size(); i++){
    descricao.append("\n");
    descricao.append(this->localNome.at(i));
  }
  descricao.append("\n: TESTE PRA VER SE TA RODANDO\n");

  return descricao;
}



