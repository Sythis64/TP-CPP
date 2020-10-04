#include <iostream>  
#include <sstream>
#include <string>

#include "liste.hpp" 


using namespace std;

liste::liste() :
	nb_c(0),
	nb_r(0),
	cpt(0)
{}

int liste::getCompteur()
{
	return cpt;
}

void liste::addCercle(Cercle c)
{
	c.setOrdre(cpt);
	cpt += 1;
	tCercle[nb_c] = c;
	nb_c += 1;
}

void liste::addRect(Rectangle r)
{
	r.setOrdre(cpt);
	cpt += 1;
	trect[nb_r] = r;
	nb_r += 1;
}

string liste::toString() {
	std::stringstream str;
	int irec = 0, icer = 0, i = 0;

	str << "Liste : ";

	while ((irec != nb_r) and (icer != nb_c) and (i != cpt)) {
		if (trect[irec].getOrdre() < tCercle[icer].getOrdre()) {
			str << trect[irec].toString() << " ";
			irec += 1;
		}

		else {
			str << tCercle[icer].toString() << " ";
			icer += 1;
		}
		i += 1;
	}

	if (irec == nb_r) 
		for (i = icer; i < nb_c; i++) 
			str << tCercle[icer].toString() << " ";
		
	else if(icer == nb_c) 
		for (i = irec; i < nb_r; i++) 
			str << trect[irec].toString() << " ";

	str << "\n";
	
	return str.str();
}