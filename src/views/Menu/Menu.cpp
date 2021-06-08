#include "Menu.h"


void Menu1(){
  std::cout << "=============================
                \nMinisterio da saúde\n
                =============================";

  std::cout << "1 - Cadastro\n
                2 - Consulta insumos disponiveis no ms\n
                3 - Descrição dos insumos no MS\n
                4 - Quantidade de Insumos no MS\n
                5 - Insumos inseridos nos estados\n
                6 - Descrição dos insumos nos estados\n
                7 - Informação dos estados\n
                8 - Informação por estado\n
                9 - Distribui por estado\n
                10 - Sair" << std::endl;
  
  std::cin >> UserValue;
  
  switch (UserValue)
  {
  case 1:
    cadastraInsumosMS();
    break;
  case 2:
    consultaInsumos(Local);
    break;
  case 3:
    consultaInsumosDescricao(Local);
    break;
  case 4:
    cadastraInsumosTipo(Local, int);
    break;
  case 5:
    distribuiInsumo(Local, Insumo);
    break;
  case 6:
    /* SAIR */
    break;
  default:
    std::cout << "Opção Invalida" << std::endl;
    break;
  }
}