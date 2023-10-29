#pragma once
#include "iostream"
using namespace std;
using namespace System::Drawing;
class Puerta
{
private:
	int x, y, dx;
	int ancho, alto;
	bool visible;
public:
	~Puerta() {};
	Puerta()
	{
		x = 0;
		y = 130;
		dx = 10;
		ancho = 40;
		alto = 40;
		visible = true;
	}
	void dibujar(Graphics^ g)
	{
		Pen^ p = gcnew Pen(Color::Red, 5);
		g->DrawRectangle(p, x, y, ancho, alto);

	}
	void mover(Graphics^ g)
	{
		if (x >= 114)
		{
			dx *= 0;
		}
		x += dx;
	}
	void mover2(Graphics^ g)
	{
		if (x >= 412)
		{
			dx *= 0;
		}
		x += dx;
	}

	void mover3(Graphics^ g)
	{
		if (x >= 712)
		{
			dx *= 0;
		}
		x += dx;
	}
	void SetVisible(bool v) { this->visible = v; }
	bool GetVisible() { return visible; }
};