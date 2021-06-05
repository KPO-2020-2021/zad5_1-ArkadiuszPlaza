#ifndef Scene_HH
#define Scene_HH
#include <iostream>
#include <iomanip>
#include <fstream>
#include "Cuboid.hh"
#include "lacze_do_gnuplota.hh"
#include "Dron.hh"
#include "Surface.hh"

#define N 2

class Scene
{
 PzG::LaczeDoGNUPlota Lacze;
 Dron *tab[N];
 Surface *dno;
 public:
 Scene();
 void rysuj();
 bool interfejs();
~Scene();
};



#endif
