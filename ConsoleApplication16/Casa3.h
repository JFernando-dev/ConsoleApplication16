#pragma once
#include <vector>
#include "Casa.h"
using namespace std;
class Casa3
{
private:
	vector<Palo*>vecpalo3;
	vector<Entrada*>vecentrada3;
	vector<Triangulo*>vectriangulo3;
	vector<Puerta*>vecpuerta3;
	vector<Rectangulo*>vecrectangulo3;
	vector<ventana*>vecventana3;
	vector<LineasH2*>veclineasH2;
	vector<LineaV*>veclineaV;
public:
	Casa3() {};
	~Casa3() {};
	void agregar_casa3()
	{
		if (vecpalo3.size() < 1) {
			vecpalo3.push_back(new Palo);
			vecentrada3.push_back(new Entrada);
			vectriangulo3.push_back(new Triangulo);
			vecpuerta3.push_back(new Puerta);
			vecrectangulo3.push_back(new Rectangulo);
			vecventana3.push_back(new ventana);
			veclineasH2.push_back(new LineasH2);
			veclineaV.push_back(new LineaV);
		}
	}


	void dibujar(Graphics^ g)
	{

		for (int i = 0; i < vecpalo3.size();i++) vecpalo3.at(i)->dibujar(g);
		for (int i = 0; i < vecentrada3.size();i++) vecentrada3.at(i)->dibujar(g);
		for (int i = 0; i < vectriangulo3.size();i++) vectriangulo3.at(i)->dibujar3(g);
		for (int i = 0; i < vecpuerta3.size();i++) vecpuerta3.at(i)->dibujar(g);
		for (int i = 0; i < vecrectangulo3.size();i++) vecrectangulo3.at(i)->dibujar(g);
		for (int i = 0; i < vecventana3.size();i++) vecventana3.at(i)->dibujar(g);
		for (int i = 0; i < veclineasH2.size();i++) veclineasH2.at(i)->dibujar(g);
		for (int i = 0; i < veclineaV.size();i++) veclineaV.at(i)->dibujar(g);


	}
	void movimiento(Graphics^ g)
	{

		for (int i = 0; i < vecpalo3.size();i++) vecpalo3.at(i)->mover3(g);
		for (int i = 0; i < vecentrada3.size();i++) vecentrada3.at(i)->mover3(g);
		for (int i = 0; i < vectriangulo3.size();i++) vectriangulo3.at(i)->mover(g);
		for (int i = 0; i < vecpuerta3.size();i++) vecpuerta3.at(i)->mover3(g);
		for (int i = 0; i < vecrectangulo3.size();i++) vecrectangulo3.at(i)->mover3(g);
		for (int i = 0; i < vecventana3.size();i++) vecventana3.at(i)->mover3(g);
		for (int i = 0; i < veclineasH2.size();i++) veclineasH2.at(i)->mover(g);
		for (int i = 0; i < veclineaV.size();i++) veclineaV.at(i)->mover(g);


	}
};
