#pragma once
#include <string>
#include "../Insumos/Insumos.h"

class Vacina : public Insumo{
  private:
    std::string tipoVacina;
    int dosePaciente;
    int intervaloDose;
  
  public:
    Vacina();

    // SET Methods
    void setTipoVacina(std::string);
    void setDose(int);
    void setIntervalo(int);

    // GET Methods
    std::string getDescricao();

    // Clone Method
    Insumo* clone(int);
};