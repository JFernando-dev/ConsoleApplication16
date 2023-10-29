#pragma once
using namespace System::Drawing;
class ventana
{
private:
	int x, y, dx;
	int ancho, alto;
	bool visible;
public:
	~ventana() {};
	ventana()
	{
		x = 0;
		y = 120;
		dx = 10;
		ancho = 55;
		alto = 30;
		visible = true;
	}
	void dibujar(Graphics^ g)
	{
		Pen^ p = gcnew Pen(Color::White, 5);
		g->DrawRectangle(p, x, y, ancho, alto);

	}
	void mover(Graphics^ g)
	{
		if (x >= 210)
		{
			dx *= 0;
		}
		x += dx;
	}
	void mover2(Graphics^ g)
	{
		if (x >= 510)
		{
			dx *= 0;
		}
		x += dx;
	}

	void mover3(Graphics^ g)
	{
		if (x >= 810)
		{
			dx *= 0;
		}
		x += dx;
	}
	void SetVisible(bool v) { this->visible = v; }
	bool GetVisible() { return visible; }
};