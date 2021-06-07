#include "Medicamentos.h"
#include <iostream>
#include <string>

// CONSTRUTOR
Medicamentos::Medicamentos()
{
  dosagemMedicamentos = 0;
  formaAdministracao = "";
  formaDisponibilizacao = "";
}

// MÉTODOS PARA MODIFICAÇÃO DE DADOS
void Medicamentos::setDosagem(int dosagem)
{
  this->dosagemMedicamentos = dosagem;
}

void Medicamentos::setAdministracao(std::string administracao)
{
  this->formaAdministracao = administracao;
}

void Medicamentos::setDisponibilizacao(std::string disponibilizacao)
{
  this->formaDisponibilizacao = disponibilizacao;
}

// MÉTODOS PARA CONSULTA
void Medicamentos::getDosagem()
{
  std::cout << "Dosagem de medicação: " << this->dosagemMedicamentos << std::endl;
}

void Medicamentos::getAdministracao()
{
  std::cout << "Forma de administração: " << this->formaAdministracao << std::endl;
}

void Medicamentos::getDisponibilizacao()
{
  std::cout << "Forma de disponibilização: " << this->formaDisponibilizacao << std::endl;
}