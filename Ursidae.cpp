#include <iostream>
#include <string>
#include "Ursidae.hpp"

void Ursidae::print()
{
  Animal::print();
}

double Ursidae::calcula_PEIXES_CONSUMIDOS(int porcaoPeixes)
{
  this->kgPeixePorDIA = peixesPorPORCAO * porcaoPeixes;
  return this->kgPeixePorDIA;
}