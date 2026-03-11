#include<iostream>
#include<cmath>
class vecteur
{
	float v[3];
	public:
		vecteur (float,float,float);
		void affiche();
		friend float norme(vecteur);
		friend void permut(vecteur);
		friend float somme(vecteur);
		friend vecteur operator | (vecteur,vecteur);
		float carre();
};
vecteur::vecteur(float c1,float c2,float c3)
{
	v[0] = c1; v[1] = c2 ; v[2] = c3;
}
void vecteur::affiche()
{
	std::cout<< v[0] <<" " <<v[1] <<" " <<v[2] <<"\n";
}
float norme(vecteur nm)
{
	float n = 0.0;
	n = sqrt((nm.v[0]*nm.v[0])+(nm.v[1]*nm.v[1])+(nm.v[2]*nm.v[2]));
	return n;	
}
float vecteur::carre()
{
	float car = 0;
	car = (v[0]*v[0])+(v[1]*v[1])+(v[2]*v[2]);
	return car;
}
void permut(vecteur pm)
{
	float p =0.0;
	p = pm.v[0]; pm.v[0] = pm.v[2]; pm.v[2] = p;
}
float somme(vecteur sm)
{
	float s =0.0;
	s = sm.v[0]+sm.v[1]+sm.v[2];
	return s;
}
vecteur operator |(vecteur v,vecteur w)
{
	vecteur pv(0.0,0.0,0.0);
	pv.v[0]=(v.v[1]*w.v[2]-v.v[2]*w.v[1]);
	pv.v[1]=(v.v[2]*w.v[0]-v.v[0]*w.v[2]);
	pv.v[2]=(v.v[1]*w.v[1]-v.v[2]*w.v[0]);
	return pv;
}
class tableau : public vecteur
{
	float t[2];
	public:
	tableau(float,float,float,float,float);
	void affiche();
	float norme ();
	float somme ();
};
tableau::tableau(float c1, float c2, float c3, float c4, float c5):vecteur(c1,c2,c3)
{
	t[0]=c4;
	t[1]=c5;
}
void tableau::affiche()
{
	vecteur::affiche();
	std::cout<< t[0] <<" " <<t[1];
}
float tableau::norme()
{
	float nt;
	nt = sqrt(carre()+(t[0]*t[0])+(t[1]*t[1]));	
	return nt;
}
float tableau::somme()
{
	float st;
	st = carre()+t[0]+t[1];
	return st;
}

main()
{
	vecteur v1(5.2,4.6,7.9),v2(6.0,2.1,5.2);
	std::cout<< "v1 avant permut : ";
	v1.affiche();
	float nv1;
	nv1 = norme(v1);	
	std::cout<< "la norme de v1 est : "<< nv1 <<"\n";
	std::cout<< "v2 apres permut : ";
	permut(v1);
	v1.affiche();
	float s1;
	s1=somme(v1);
	std::cout<<"la somme des elements de v1 = " << s1 << "\n";
	vecteur ps1_2(0.0,0.0,0.0);
	ps1_2 = v1|v2;
	std::cout<< "v1 | v2 = "; ps1_2.affiche();
	tableau t1(3.2,2.6,8.4,5.7,3.1), t2(5.1,6.3,5.2,7.6,2.9);
	t1.affiche();
	t2.affiche();
	float nt1;
	nt1 = t1.norme();
	std::cout<< "la norme de t1 est : " <<nt1 <<"\n";
	float st1_2;
	st1_2 = t1.somme();
	std::cout<< "la somme des elements de t1 est : " << st1_2 <<"\n";		
}