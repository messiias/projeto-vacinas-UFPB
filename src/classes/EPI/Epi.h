#ifndef EPI_H_
#define EPI_H_
#include <string>
#include "../Insumos/Insumos.h"

class Epi : public Insumo {
  private:
    // Atributos
    std::string tipoEpi;
    std::string infoEpi;

  public:
    // Construtor
    Epi();

    // Métodos para modificação de dados
    void setDescricaoTipoEpi(std::string);
    void setDescricaoInfoEpi(std::string);

    // Métodos para consulta
    void getDescricaoTipoEpi();
    void getDescricaoInfoEpi();
};

#endif