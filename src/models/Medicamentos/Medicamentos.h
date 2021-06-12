#pragma once
#include <string>
#include "../Insumos/Insumos.h"

class Medicamentos : public Insumo {
  private:
    std::string dosagemMedicamentos;
    std::string formaAdministracao;
    std::string formaDisponibilizacao;

  public: 
    Medicamentos();

    //SET Methods
    void setDosagem(std::string);
    void setFormaAdmin(std::string);
    void setDisponibilizacao(std::string);

    // GET Methods
    std::string getDescricao();

    // Clone Method
    Insumo* clone(int);
};