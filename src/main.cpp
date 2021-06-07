#include <iostream>
#include "./classes/Insumos/Insumos.h"
#include "./classes/EPI/Epi.h"
#include "./classes/Medicamentos/Medicamentos.h"
#include "./classes/Vacina/Vacina.h"
#include <string>

/* PROTOTIPAGEM */

// Cadastra para o estoque do MS
void cadastrarInsumo(); 
 // Consulta os dados do estoque do MS
void consultaInsumosDisponiveis();
// Descrição dos produtos do estoque do MS
void descricaoInsumos();
// Descrição dos produtos do estoque do MS
void retornaInsumosDisponiveis();
// Consulta os insumos inseridos nos estados
void consultaInsumosNomePorEstados(); 
// consulta todos os insumos com seus atributos e descrições
void consultaInsumosDescricaoPorEstados();
// retorna as os atributos dos estados
void consultaInsumosEstados();
// retorna atributos de estados que foram passados por paramêtro
void consultaInsumosUmEstados();
// Retorna a entrega de insumos (subtrai do MS e enviado para algum Estado)
void distribuiPorEstado();

int main() {

  Insumo *ins[100];

  std::cout << "=============================
                \n\tMinisterio da saúde\t\n
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
    cadastrarInsumo();
    break;
  case 2:
    consultaInsumosDisponiveis();
    break;
  case 3:
    descricaoInsumos();
    break;
  case 4:
    retornaInsumosDisponiveis();
    break;
  case 5:
    consultaInsumosNomePorEstados();
    break;
  case 6:
    consultaInsumosDescricaoPorEstados();
    break;
  case 7:
    consultaInsumosEstados();
    break;
  case 8:
    std::cout << "Qual estado deseja consultar? " << std::endl;
    std::cout << "0 - AC | 1 - AL | 2 - AP | 3 - AM | 4 - BA | 5 - CE | 6 - DF | 7 - ES | 8 - GO" << std::endl;
    std::cout << "9 - MA | 10 - MT | 11 - MS | 12 - MG | 13 - PA | 14 - PB | 15 - PR | 16 - PE | 17 - PI" << std::endl;
    std::cout << "18 - RJ | 19 - RN | 20 - RS | 21 - RO | 22 - RR | 23 - SC | 24 - SP | 25 - SE | 26 - TO | 27 - Sair" << std::endl;
    std::cout << "Digite a opcao: ";
    std::cin >> opcaoEstado;
    consultaInsumosUmEstados(opcaoEstado);
    break;
  case 9:
    distribuiPorEstado();
    break;
  case 10:
    /* SAIR */
    break;
  default:
    std::cout << "Opção Invalida" << std::endl;
    break;
  }

  return 0;
}
