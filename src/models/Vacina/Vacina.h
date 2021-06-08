#ifndef VACINA_H_
#define VACINA_H_
#include<string>
#include "../Insumos/Insumos.h"

class Vacina : public Insumo{
  private:
    std::string tipoVacina;
    int dosePaciente;
    int intervaloDose;
  
  public:
    Vacina();
};

#endif