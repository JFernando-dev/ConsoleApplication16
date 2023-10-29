#pragma once
#include "iostream"
using namespace System::Drawing;
class Entrada
{
private:
	int x, y, radio;
	int dx, dy;
	bool visible;
public:
	Entrada() {
		x = 0;
		y = 100;
		radio = 25;
		dx = 10;
		dy = 10;
		visible = true;
	}
	~Entrada() {};
	void dibujar(Graphics^ g)
	{
		Pen^ p = gcnew Pen(Color::Red, 5);
		g->DrawRectangle(p, x, y, radio * 3, radio * 3);
	}
	void mover(Graphics^ g)
	{
		if (x >= 100)
		dx *= -0;
		x += dx;
	}
	void mover2(Graphics^ g)
	{
		if (x >= 400)
			dx *= -0;
		x += dx;
	}
	void mover3(Graphics^ g)
	{
		if (x >= 700)
			dx *= -0;
		x += dx;
	}
	void mover_borrar(Graphics^ g)
	{
		if (y == 100)
			dy *= 1;
		y += dy;
	}
	void SetVisible(bool v) { this->visible = v; }
	bool GetVisible() { return visible; }
};
