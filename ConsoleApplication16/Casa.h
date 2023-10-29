#pragma once
#include <vector>
#include "Entrada.h"
#include "Triangulo.h"
#include "Rectangular.h"
#include "Puerta.h"
#include "Techo2.h"
#include "Ventana.h"
using namespace std;
class Casa
{
private:
	vector<Entrada*>vecentrada;
	vector<Triangulo*>vectriangulo;
	vector<Rectangulo*>vecrectangulo;
	vector<Puerta*>vecpuerta;
	vector<Palo*>vecpalo;
	vector<ventana*>vecventana;
public:
	Casa() {};
	~Casa() {};
	void agregar_casa1()
	{
		if (vecentrada.size() < 1) {
			vecentrada.push_back(new Entrada);
			vectriangulo.push_back(new Triangulo);
			vecrectangulo.push_back(new Rectangulo);
			vecpuerta.push_back(new Puerta);
			vecpalo.push_back(new Palo);
			vecventana.push_back(new ventana);
		}
	}
	void eliminar()
	{
		for (int i = 0; i < vecentrada.size(); i++)
		{
			vecentrada.erase(vecentrada.begin() + i);
		}
	
	}


	void dibujar(Graphics^ g)
	{
		for (int i = 0; i < vecentrada.size(); i++) vecentrada.at(i)->dibujar(g);
		for (int i = 0; i < vectriangulo.size(); i++) vectriangulo.at(i)->dibujar(g);
		for (int i = 0; i < vecrectangulo.size(); i++) vecrectangulo.at(i)->dibujar(g);
		for (int i = 0; i < vecpuerta.size(); i++) vecpuerta.at(i)->dibujar(g);
		for (int i = 0; i < vecpalo.size(); i++) vecpalo.at(i)->dibujar(g);
		for (int i = 0; i < vecventana.size(); i++) vecventana.at(i)->dibujar(g);

	}
	void movimiento(Graphics^ g)
	{
		for (int i = 0; i <vecentrada.size(); i++) vecentrada.at(i)->mover(g);
		for (int i = 0; i < vectriangulo.size(); i++) vectriangulo.at(i)->mover(g);
		for(int i = 0; i < vecrectangulo.size(); i++) vecrectangulo.at(i)-> mover(g);
		for (int i = 0; i < vecpuerta.size(); i++) vecpuerta.at(i)->mover(g);
		for (int i = 0; i < vecpalo.size(); i++) vecpalo.at(i)->mover(g);
		for (int i = 0; i < vecventana.size(); i++) vecventana.at(i)->mover(g);

	}
	void borrar(Graphics^ g)
	{
		for (int i = 0; i < vecentrada.size(); i++) vecentrada.at(i)->mover_borrar(g);
	}
};
