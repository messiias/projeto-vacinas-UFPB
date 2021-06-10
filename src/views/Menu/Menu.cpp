#include <iostream>
#include <string>
#include "Menu.h"
#include "cadastraInsumosMSFunction.cpp"
#include "../../controller/Controller.h"
#include "../../models/Insumos/Insumos.h"
#include "../../models/Medicamentos/Medicamentos.h"
#include "../../models/Vacina/Vacina.h"
#include "../../models/EPI/Epi.h"

void Menu::Menu1(){
  Controller *instControl = new Controller();

  int userValue = 0;
  bool loop = true;

  while(loop){
    system("clear");
    std::cout << "=============================\n\tMinisterio da saúde\t\n=============================" << std::endl << std::endl;

    std::cout << "1 - Cadastrar insumo no MS\n2 - Consulta insumos disponiveis no MS\n3 - Descrição dos insumos no MS\n" << std::endl;
    std::cout << "4 - Distribui insumos pros estados\n5 - Consulta insumos disponiveis em um estado\n6 - Descrição dos insumos em um estado\n7 - Sair\n: ";
    std::cin >> userValue;
    
    switch (userValue) {
      case 1:
        system("clear");
        std::cout << "Qual insumo deseja inserir no MS?\n1 - Vacina\n2 - Medicamento\n3 - EPI\n4 - Sair: ";
        std::cin >> userValue;
        if(userValue >= 1 && userValue <= 3)
          instControl->cadastraInsumosMS(cadastroDeInsumoMS(userValue));
        break;

      case 2:
        system("clear");
        std::cout << "Qual insumo deseja consultar do MS?\n1 - Todos\n2 - Vacina\n3 - Medicamento\n4 - EPI\n5 - Sair: ";
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

      case 4:
        menuDistribuiEstado();
        break;
      */
      /*
      case 4:
        cadastraInsumosTipo(Local, int);
        break;
      case 5:
        distribuiInsumo(Local, Insumo);
        break;
      */
      case 7:
        loop = false;
        break;
      default:
        std::cout << "Opção Invalida" << std::endl;
        break;
    }
  }
}

/*
void menuDistribuiEstado(){

  int userValueES, userValueInsumo;

  cout << " === Estados para distribuir === " << std::endl << std::endl;
  cout << "1 - Acre (AC)\t2 - Alagoas (AL)\t3 - Amapá (AP)\t4 - Amazonas (AM)\t5 - Bahia (BA)" << std::endl;
  cout << "6 - Ceará (CE)\t7 - Distrito Federal (DF)\t8 - Espírito Santo (ES)\t9 - Goiás (GO)\t10 - Maranhão (MA)" << std::endl; 
  cout << "11 - Mato Grosso (MT)\t12 - Mato Grosso do Sul (MS)\t13 - Minas Gerais (MG)\t14 - Pará (PA)\t15 - Paraíba (PB)" << std::endl;
  cout << "16 - Paraná (PR)\t17 - Pernambuco (PE)\t18 - Piauí (PI)\t19 - Rio de Janeiro (RJ)\t20 - Rio Grande do Norte (RN)" << std::endl;
  cout << "21 - Rio Grande do Sul (RS)\t22 - Rondônia (RO)\t23 - Roraima (RR)\t24 - Santa Catarina (SC)\t25 - São Paulo (SP)" << std::endl;
  cout << "26 - Sergipe (SE)\t27 - Tocantins (TO)" << std::endl << std::endl;
  cout << "Selecione o número respectivo do estado: ";
  cin >> userValueES;

  cout << "\nDeseja inserir qual insumo?" << std::endl;
  cout << "1 - Vacina   2 - Medicamento   3 - EPI   4 - Voltar para o menu anterior" << std::endl;
  cout << "Digite a opcao: ";
  cin >> userValueInsumo;

  distribuiParaEstado(userValueES, userValueInsumo);
}

Insumo* distribuiParaEstado(int userValueES, int userValueInsumo){

}*/