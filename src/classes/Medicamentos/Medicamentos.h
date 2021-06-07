#ifndef MEDICAMENTOS_H_
#define MEDICAMENTOS_H_
#include <string>
#include "../Insumos/Insumos.h"

class Medicamentos : public Insumo
{
private:
  //Atributos

  int dosagemMedicamentos;
  std::string formaAdministracao;
  std::string formaDisponibilizacao;

public:
  // Construtor
  Medicamentos();

  // Metodos

  // Métodos para modificação de dados
  void setDosagem(int);
  void setAdministracao(std::string);
  void setDisponibilizacao(std::string);

  // Métodos para consulta
  void getDosagem();
  void getAdministracao();
  void getDisponibilizacao();
};

#endif