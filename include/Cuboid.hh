#ifndef Cuboid_HH
#define Cuboid_HH

#include "Solid.hh"

class Cuboid : public Solid
{
    public:
    Cuboid(Vector3d srodek=Vector3d(),double z=10,double promien=15,std::string nazwa = "../datasets/cuboid.dat" );
     ~Cuboid(){free (wymiary);}
};




#endif
