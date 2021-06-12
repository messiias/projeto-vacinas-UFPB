#include <iostream>
#include <string>
#include "Menu.h"
#include "cadastraInsumosMSFunction.cpp"
#include "../../controller/Controller.h"
#include "../../models/Local/Local.h"
#include "../../models/Insumos/Insumos.h"
#include "../../models/Medicamentos/Medicamentos.h"
#include "../../models/Vacina/Vacina.h"
#include "../../models/EPI/Epi.h"

void Menu::Menu1(){
  Controller *instControl = new Controller();
  Local *instLocal = new Local();

  int userValue = 0;
  std::string userValueIn, userValueES;
  bool loop = true;
  std::string arrayEstados[] = {
    "AC", "AL", "AP", "AM", "BA", "CE", "DF", "ES", "GO", "MA", "MT", "MS", "MG", "PA", "PB", "PR", "PE", "PI", "RJ", "RN", "RS", "RO", "RR", "SC", "SP", "SE", "TO"
  };

  while(loop){
    std::cout << "=====================================\n\tMinisterio da saúde\t\n=====================================" << std::endl << std::endl;

    std::cout << "1 - Cadastrar insumo no MS\n2 - Consulta insumos disponiveis no MS\n" << std::endl;
    std::cout << "3 - Distribui insumos pros estados\n4 - Consulta insumos disponiveis em um estado\n5 - Descrição dos insumos em um estado\n6 - Sair\n: ";
    std::cin >> userValue;
    
    switch (userValue) {
      case 1:
        system("clear");
        std::cout << "Qual insumo deseja inserir no MS?\n1 - Vacina\n2 - Medicamento\n3 - EPI\n4 - Voltar\n: ";
        std::cin >> userValue;
        if(userValue >= 1 && userValue <= 3)
          instControl->cadastraInsumosMS(cadastroDeInsumoMS(userValue));
        break;

      case 2:
        system("clear");
        std::cout << "Deseja consultar os dados dos insumos do MS?\n1 - Todos\n2 - Vacina\n3 - Medicamento\n4 - EPI\n5 - Voltar\n: ";
        std::cin >> userValue;
        if(userValue >= 1 && userValue <= 4)
          instControl->consultaInsumosMS(userValue);
        break;

      case 3:
        system("clear");

        std::cout << "Deseja cadastrar em que estado?" << std::endl;
        for (int i = 0; i < 27; i++){
          std::cout << arrayEstados[i] << std::endl;
        }
        std::cout << ": ";
        std::cin >> userValueES;

        std::cout << "Nome do insumo\n" << ": ";
        std::cin >> userValueIn;

        std::cout << "Quantidade de insumos deseja receber?\n" << ": ";
        std::cin >> userValue; 
        
        instControl->distribuiInsumoParaEstado(userValueES, userValueIn, userValue);

        break;

      case 4:
        system("clear");
        
        std::cout << "Deseja consultar os dados de qual estado?" << std::endl;
        for (int i = 0; i < 27; i++){
          std::cout << arrayEstados[i] << std::endl;
        }
        std::cout << ": ";
        std::cin >> userValueES;

        instControl->consultaInsumosES(userValueES);
        break;

      case 5:
        system("clear");

        std::cout << "Deseja consultar a descricao de qual estado?" << std::endl;
        for (int i = 0; i < 27; i++){
          std::cout << arrayEstados[i] << std::endl;
        }
        std::cout << ": ";
        std::cin >> userValueES;

        instControl->consultaInsumosDescricaoES(userValueES);
        break;

      case 6:
        loop = false;
        break;
    }
  }
}