#pragma once
#include <string>
#include "../Insumos/Insumos.h"

class Medicamentos : public Insumo
{
  private:
    //Atributos
    std::string dosagemMedicamentos;
    std::string formaAdministracao;
    std::string formaDisponibilizacao;

  public: 
    // Construtor
    Medicamentos();
};