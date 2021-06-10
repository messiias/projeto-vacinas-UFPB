#include <iostream>
#include <string>
#include "../../models/Insumos/Insumos.h"
#include "../../models/Medicamentos/Medicamentos.h"
#include "../../models/Vacina/Vacina.h"
#include "../../models/EPI/Epi.h"

Insumo* cadastroDeInsumoMS(int userValue){

  // Insumos
  std::string nome;
  int quantidadeItem;
  int valorUnitario;
  std::string dataVencimento;
  std::string fabricante;
  int tipoInsumo;

  // Vacinas
  std::string tipoVacina;
  int dose;
  int intervaloDose;

  // Medicamentos
  std::string dosagemMedicamentos;
  std::string formaAdministracao;
  std::string formaDisponibilizacao;
  
  // EPI
  std::string tipoEpi;
  std::string infoEpi;
  
  // Variavel
  Vacina *vac = new Vacina();
  Medicamentos *med = new Medicamentos;
  Epi *epi = new Epi;

  switch (userValue){
    case 1:
      system("clear");
      std::cout << "Digite o nome da vacina: ";
      std::cin >> nome;
      vac->setNome(nome);
      
      std::cout << "Quantidade de itens: ";
      std::cin >> quantidadeItem;
      vac->setQuantidadeItem(quantidadeItem);

      std::cout << "Valor unitario: ";
      std::cin >> valorUnitario;
      vac->setValorUnitario(valorUnitario);

      std::cout << "Data de vencimento: ";
      std::cin >> dataVencimento;
      vac->setDataVencimento(dataVencimento);

      std::cout << "Fabricante: ";
      std::cin >> fabricante;
      vac->setFabricante(fabricante);

      vac->setTipoInsumo(1);

      std::cout << "Tipo da vacina: ";
      std::cin >> tipoVacina;
      vac->setTipoVacina(tipoVacina);

      std::cout << "Doses:  ";
      std::cin >> dose;
      vac->setDose(dose);

      std::cout << "Intervalo: ";
      std::cin >> intervaloDose;
      vac->setIntervalo(intervaloDose);

      return vac;
      
    case 2:
      system("clear");
      std::cout << "Digite o nome da vacina: ";
      std::cin >> nome;
      med->setNome(nome);
      
      std::cout << "Quantidade de itens: ";
      std::cin >> quantidadeItem;
      med->setQuantidadeItem(quantidadeItem);

      std::cout << "Valor unitario: ";
      std::cin >> valorUnitario;
      med->setValorUnitario(valorUnitario);

      std::cout << "Data de vencimento: ";
      std::cin >> dataVencimento;
      med->setDataVencimento(dataVencimento);

      std::cout << "Fabricante: ";
      std::cin >> fabricante;
      med->setFabricante(fabricante);

      med->setTipoInsumo(2);

      std::cout << "Dosagem: ";
      std::cin >> dosagemMedicamentos;
      med->setDosagem(dosagemMedicamentos);

      std::cout << "Forma de administração: ";
      std::cin >> formaAdministracao;
      med->setFormaAdmin(formaAdministracao);
      
      std::cout << "Forma de disponibilização: ";
      std::cin >> formaDisponibilizacao;
      med->setDisponibilizacao(formaDisponibilizacao);

      return med;
    
    case 3:
      system("clear");
      
      std::cout << "Digite o nome da vacina: ";
      std::cin >> nome;
      epi->setNome(nome);
      
      std::cout << "Quantidade de itens: ";
      std::cin >> quantidadeItem;
      epi->setQuantidadeItem(quantidadeItem);

      std::cout << "Valor unitario: ";
      std::cin >> valorUnitario;
      epi->setValorUnitario(valorUnitario);

      std::cout << "Data de vencimento: ";
      std::cin >> dataVencimento;
      epi->setDataVencimento(dataVencimento);

      std::cout << "Fabricante: ";
      std::cin >> fabricante;
      epi->setFabricante(fabricante);

      epi->setTipoInsumo(3);

      std::cout << "Tipo de Epi: ";
      std::cin >> tipoEpi;
      epi->setTipoEpi(tipoEpi);

      std::cout << "Informação sobre a Epi: ";
      std::cin >> infoEpi;
      epi->setInfoEpi(infoEpi);

      return epi;
    }

    return 0;
}