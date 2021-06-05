#ifndef DRON_HH
#define DRON_HH

#include "Prism.hh"
#include "Cuboid.hh"
#include "lacze_do_gnuplota.hh"
#include <unistd.h> // biblioteka dla usleep
#define CZAS 20000

class Dron
{
    std::vector<Vector3d> droga_drona;
    PzG::LaczeDoGNUPlota &Lacze;
    Prism orginal;
    Prism kopia;
    Cuboid org_wir[4];
    Cuboid kopia_wir[4];
    Matrix3x3 obr;
    Vector3d droga;
    double kat;
    int id; 
public:

  
  Dron(int id,PzG::LaczeDoGNUPlota &Lacze,Vector3d pozycja);
  void unoszenie(double droga);
  void przesun(double droga);
  void obrot(double kat); // kat podajemy w stopniach
  void obrot_rotrow(); // kat podajemy w stopniach
  void zapisz();
  void sterowanie();
  void okresl_droge(double droga);
};

#endif
