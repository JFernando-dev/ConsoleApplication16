#pragma once
using namespace System::Drawing;

class Rectangulo
{
private:
	int x, y, dx;
	int ancho, alto;
	bool visible;
public:
	~Rectangulo() {};
	Rectangulo()
	{
		x = 0;
		y = 100;
		dx = 10;
		ancho = 110;
		alto = 75;
		visible = true;
	}
	void dibujar(Graphics^ g)
	{
		Pen^ p = gcnew Pen(Color::Red, 5);
		g->DrawRectangle(p, x, y, ancho, alto);

	}
	void mover(Graphics^ g)
	{
		if (x >= 180)
		{
			dx *= 0;
		}
		x += dx;
	}
	void mover2(Graphics^ g)
	{
		if (x >= 480)
		{
			dx *= 0;
		}
		x += dx;
	}
	void mover3(Graphics^ g)
	{
		if (x >= 778)
		{
			dx *= 0;
		}
		x += dx;
	}
	void SetVisible(bool v) { this->visible = v; }
	bool GetVisible() { return visible; }
};
