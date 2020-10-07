#pragma once
#ifndef Liste_H
#define Liste_H

#include "rectangle.hpp"
#include "cercle.hpp"

int const taille = 10;

class Groupe {

	Cercle tCercle[taille];
	Rectangle trect[taille];
	int nb_c, nb_r, cpt;
	


public:

	Groupe();

	/// ---------------- GET/SET ---------------- ///
	int getCompteur();

	/// ---------------- Function ---------------- ///

	void addCercle(Cercle);
	void addRect(Rectangle);
	std::string toString();
};

#endif