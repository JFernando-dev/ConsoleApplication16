#pragma once
#include <vector>
#include "Casa.h"
using namespace std;
class Casa2
{
private:
	vector<Palo*>vecpalo2;
	vector<Entrada*>vecentrada2;
	vector<Triangulo*>vectriangulo2;
	vector<Puerta*>vecpuerta2;
	vector<Rectangulo*>vecrectangulo2;
	vector<ventana*>vecventana2;
	vector<LineasH*>veclineasH;
public:
	Casa2() {};
	~Casa2() {};
	void agregar_casa2()
	{
		if (vecpalo2.size() < 1) {
			vecpalo2.push_back(new Palo);
			vecentrada2.push_back(new Entrada);
			vectriangulo2.push_back(new Triangulo);
			vecpuerta2.push_back(new Puerta);
			vecrectangulo2.push_back(new Rectangulo);
			vecventana2.push_back(new ventana);
			veclineasH.push_back(new LineasH);
		}
	}


	void dibujar(Graphics^ g)
	{

		for (int i = 0; i < vecpalo2.size();i++) vecpalo2.at(i)->dibujar(g);
		for (int i = 0; i < vecentrada2.size();i++) vecentrada2.at(i)->dibujar(g);
		for (int i = 0; i < vectriangulo2.size();i++) vectriangulo2.at(i)->dibujar2(g);
		for (int i = 0; i < vecpuerta2.size();i++) vecpuerta2.at(i)->dibujar(g);
		for (int i = 0; i < vecrectangulo2.size();i++) vecrectangulo2.at(i)->dibujar(g);
		for (int i = 0; i < vecventana2.size();i++) vecventana2.at(i)->dibujar(g);
		for (int i = 0; i < veclineasH.size();i++) veclineasH.at(i)->dibujar(g);

	}
	void movimiento(Graphics^ g)
	{

		for (int i = 0; i < vecpalo2.size();i++) vecpalo2.at(i)->mover2(g);
		for (int i = 0; i < vecentrada2.size();i++) vecentrada2.at(i)->mover2(g);
		for (int i = 0; i < vectriangulo2.size();i++) vectriangulo2.at(i)->mover(g);
		for (int i = 0; i < vecpuerta2.size();i++) vecpuerta2.at(i)->mover2(g);
		for (int i = 0; i < vecrectangulo2.size();i++) vecrectangulo2.at(i)->mover2(g);
		for (int i = 0; i < vecventana2.size();i++) vecventana2.at(i)->mover2(g);
		for (int i = 0; i < veclineasH.size();i++) veclineasH.at(i)->mover(g);


	}
};
