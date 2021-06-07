#include "Epi.h"
#include <iostream>
#include <string>
#include "../Insumos/Insumos.h"

// CONSTRUTOR
Epi::Epi(): Insumo() {
  tipoEpi = "";
  infoEpi = "";
}

// MÉTODOS PARA MODIFICAÇÃO DE DADOS
void Epi::setDescricaoTipoEpi(std::string tipoDescricao)
{
  this->tipoEpi = tipoDescricao;
}

void Epi::setDescricaoInfoEpi(std::string infoEpi)
{
  this->infoEpi = infoEpi;
}

// MÉTODOS PARA CONSULTA
void Epi::getDescricaoTipoEpi()
{
  std::cout << "Tipo de Epi: " << this->tipoEpi << std::endl;
}

void Epi::getDescricaoInfoEpi()
{
  std::cout << "Informação da Epi: " << this->infoEpi << std::endl;
}