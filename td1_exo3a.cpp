#include<iostream>
#include<cstdlib>
using namespace std;
main()
{
void sortie();
set_new_handler (& sortie);
long taille; // Long est un tableau
int *adr; // *adr est un pointeur donc allocation memoire
int nbloc; // nombre de bloc d'allocation memoire
cout<<"taille du tableau : ";
cin>> taille;
for (nbloc = 1; ;++nbloc)
{
	if (adr !=0)
	{
		adr = new int [taille];
		cout<< "bloc numero :"	<< nbloc <<"\n";			
	}
}
}
void sortie()
{
	cout<< "memoire insuffisante - fin execution";
	exit(1);
}
