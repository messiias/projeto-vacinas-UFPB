#include <iostream>
#include <string>
#include "Menu.h"
#include "cadastraInsumosMSFunction.cpp"
#include "distribuiInsumoFunction.cpp"
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
  bool loop = true;
  

  while(loop){
    std::cout << "=====================================\n\tMinisterio da saúde\t\n=====================================" << std::endl << std::endl;

    std::cout << "1 - Cadastrar insumo no MS\n2 - Consulta insumos disponiveis no MS\n3 - Descrição dos insumos no MS" << std::endl;
    std::cout << "4 - Distribui insumos pros estados\n5 - Consulta insumos disponiveis em um estado\n6 - Descrição dos insumos em um estado\n7 - Sair\n: ";
    std::cin >> userValue;
    
    switch (userValue) {
      case 1:
        system("clear");
        std::cout << "Qual insumo deseja inserir no MS?\n1 - Vacina\n2 - Medicamento\n3 - EPI\n4 - Sair\n: ";
        std::cin >> userValue;
        if(userValue >= 1 && userValue <= 3)
          instControl->cadastraInsumosMS(cadastroDeInsumoMS(userValue));
        break;

      case 2:
        system("clear");
        std::cout << "Qual insumo deseja consultar do MS?\n1 - Todos\n2 - Vacina\n3 - Medicamento\n4 - EPI\n5 - Sair\n: ";
        std::cin >> userValue;
        if(userValue >= 1 && userValue <= 4)
          instControl->consultaInsumosMS(userValue);
        break;
      /*
      case 3:
        std::cout << "Qual insumo deseja consultar do MS?\n1 - Vacina\n2 - Medicamento\n3 - EPI\n4 - Sair: ";
        if(userValue >= 1 && userValue <= 3)
          instControl->consultaDescricaoInsumoMS(userValue);
        break;
      */
      case 4:
        system("clear");
        std::cout << "Deseja cadastrar em que estado?" << std::endl;
        std::cout << instLocal->getNomeEstado();
        // distribuiInsumo(userValue);
        break;
      /*
      case 5:
        cadastraInsumosTipo(Local, int);
        break;
      case 6:
        distribuiInsumo(Local, Insumo);
        break;
      */
      case 7:
        loop = false;
        break;
    }
  }
}