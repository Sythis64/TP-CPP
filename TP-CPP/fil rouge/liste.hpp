#pragma once
#ifndef Liste_H
#define Liste_H

#include "rectangle.hpp"
#include "cercle.hpp"

int const taille = 10;

class liste {

	cercle tcercle[taille];
	rectangle trect[taille];
	int nb_c, nb_r, cpt;
	


public:

	liste();

	/// ---------------- GET/SET ---------------- ///
	int getCompteur();

	/// ---------------- Function ---------------- ///

	void addCercle(cercle);
	void addRect(rectangle);
	std::string toString();
};

#endif