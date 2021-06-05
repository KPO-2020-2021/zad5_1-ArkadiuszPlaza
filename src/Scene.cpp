#include "Scene.hh"


 Scene::Scene()
 {

        Lacze.ZmienTrybRys(PzG::TR_3D);

       Lacze.UstawZakresY(-300, 300);
       Lacze.UstawZakresX(-300, 300);
       Lacze.UstawZakresZ(-300, 300);

       double tab_wym[3]={600,600,0};
       Vector3d wym_dna(tab_wym);
       dno=new Surface(wym_dna,20);
       Lacze.DodajNazwePliku(dno->get_nazwa().c_str(), PzG::RR_Ciagly, 2);
       dno->zapisz();
       for(int i=0;i<N; i++)
       {
           double pozycja[3]={(double)(rand()%440-220),(double)(rand()%440-220),25};
       tab[i]=new Dron(i,Lacze,Vector3d(pozycja));
       tab[i]->zapisz();
       }

       Lacze.Rysuj();
 }
 void  Scene::rysuj()
 {
     
   Lacze.Rysuj();
 }
 bool  Scene::interfejs()
 {
    cout<<"podaj nr drona 0 lub 1 albo wybierz 2 aby zakonczyc"<<endl;
    int nr;
    cin>>nr;
    if(nr<N)
    {
        tab[nr]->sterowanie();
    }
    else
    {
        return false;
    }
  return true;
 }

 Scene::~Scene()
 {
free (dno);
for(int i=0; i<N; i++)
free (tab[i]);
 }