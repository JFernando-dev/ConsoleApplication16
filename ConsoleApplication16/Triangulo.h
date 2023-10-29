#pragma once
#include "iostream"
using namespace System::Drawing;
class Triangulo
{
private:
	int x, y, dy;
	int ancho, alto;
	bool visible;
public:
	~Triangulo() {};
	Triangulo()
	{
		y = 0;
		x = 100;
		ancho = 73;
		alto = 50;
		visible = true;
		dy = 6;
	}
	void dibujar(Graphics^ g)
	{
		int x = 100;
		Pen^ p = gcnew Pen(Color::White, 5);
		g->DrawLine(p, x + ancho / 2, y, x + ancho, y + alto);
		g->DrawLine(p, x + ancho, y + alto, x, y + alto);   g->DrawLine(p, x, y + alto, x + ancho / 2, y);

	}

	void dibujar2(Graphics^ g)
	{
		int x = 400;
		Pen^ p = gcnew Pen(Color::White, 5);
		g->DrawLine(p, x + ancho / 2, y, x + ancho, y + alto);
		g->DrawLine(p, x + ancho, y + alto, x, y + alto);   g->DrawLine(p, x, y + alto, x + ancho / 2, y);

	}


	void dibujar3(Graphics^ g)
	{
		int x = 700;
		Pen^ p = gcnew Pen(Color::White, 5);
		g->DrawLine(p, x + ancho / 2, y, x + ancho, y + alto);
		g->DrawLine(p, x + ancho, y + alto, x, y + alto);   g->DrawLine(p, x, y + alto, x + ancho / 2, y);

	}
	void mover(Graphics^ g)
	{
		if (y >= 48)
		{
			dy *= 0;
		}
		y += dy;
	}
	void SetVisible(bool v) { this->visible = v; }
	bool GetVisible() { return visible; }
};