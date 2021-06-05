#ifndef Prism_HH
#define Prism_HH

#include "Solid.hh"

class Prism : public Solid
{

public:

Prism(Vector3d srodek=Vector3d(), double x=50,double y=50, double z=50,std::string nazwa="../datasets/Prism.dat");

 ~Prism(){free (wymiary);}
};







#endif 