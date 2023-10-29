#pragma once
#include "iostream"
using namespace System::Drawing;

class Palo
{
private:
    int x1, y1, x2, y2;
    int x3, y3, x4, y4;
    int dx;
    int dx1;
    bool visible;
public:
    Palo() {
        x1 = 60;
        y1 = 50;
        x2 = 100;
        y2 = 100;
        dx = 10;

        x3 = -50;
        y3 = 50;
        x4 = 70;
        y4 = 50;
        dx1 = 10;
        visible = true;
    }
    ~Palo() {};
    void dibujar(Graphics^ g)
    {
        if (visible) {
            Pen^ p = gcnew Pen(Color::Yellow, 5);
            g->DrawLine(p, x1, y1, x2, y2);
            g->DrawLine(p, x3, y3, x4, y4);
        }
    }
    void mover(Graphics^ g)
    {
        x1 += dx;
        x2 += dx;
        x3 += dx1;
        x4 += dx1;
        if (x1 >= 300 || x2 >= 290) {
            dx *= 0;
        }
        if (x4 >= 250) {
            dx1 *= 0;
        }
    }
    void mover2(Graphics^ g)
    {
        x1 += dx;
        x2 += dx;
        x3 += dx1;
        x4 += dx1;
        if (x2 >= 590) {
            dx *= 0;
        }
        if (x4 >= 560) {
            dx1 *= 0;
        }
    }

    void mover3(Graphics^ g)
    {
        x1 += dx;
        x2 += dx;
        x3 += dx1;
        x4 += dx1;
        if (x2 >= 891) {
            dx *= 0;
        }
        if (x4 >= 851) {
            dx1 *= 0;
        }
    }
    void setVisible(bool v) { visible = v; }
    bool getVisible() { return visible; }
};
   
class LineasH
{
private:
    int x1, y1, x2, y2;
    int dx;
    int dx1;
    bool visible;
public:
    LineasH() {

        x1 = -52;
        y1 = 70;
        x2 = 57;
        y2 = 70;
        dx1 = 10;
        visible = true;
    }
    ~LineasH() {};
    void dibujar(Graphics^ g)
    {
        if (visible) {
            Pen^ p = gcnew Pen(Color::Yellow, 3);
            g->DrawLine(p, x1, y1, x2, y2);
            g->DrawLine(p, x1+10, y1 + 20, x2+10, y2 + 20);
        }
    }
    void mover(Graphics^ g)
    {
        x1 += dx1;
        x2 += dx1;
        if (x2 >= 560) {
            dx1 *= 0;
        }
    }
    void setVisible(bool v) { visible = v; }
    bool getVisible() { return visible; }
};

class LineasH2
{
private:
    int x1, y1, x2, y2;
    int dx;
    int dx1;
    bool visible;
public:
    LineasH2() {

        x1 = -52;
        y1 = 70;
        x2 = 57;
        y2 = 70;
        dx1 = 10;
        visible = true;
    }
    ~LineasH2() {};
    void dibujar(Graphics^ g)
    {
        if (visible) {
            Pen^ p = gcnew Pen(Color::Yellow, 3);
            g->DrawLine(p, x1, y1, x2, y2);
            g->DrawLine(p, x1 + 10, y1 + 20, x2 + 10, y2 + 20);
        }
    }
    void mover(Graphics^ g)
    {
        x1 += dx1;
        x2 += dx1;
        if (x2 >= 865) {
            dx1 *= 0;
        }
    }
    void setVisible(bool v) { visible = v; }
    bool getVisible() { return visible; }
};

class LineaV
{
private:
    int x1, y1, x2, y2;
    int dx;
    int dx1;
    bool visible;
public:
    LineaV() {
        x1 = 70;
        y1 = 50;
        x2 = 100;
        y2 = 100;
        dx = 10;
        visible = true;
    }
    ~LineaV() {};
    void dibujar(Graphics^ g)
    {
        if (visible) {
            Pen^ p = gcnew Pen(Color::Yellow, 5);
            g->DrawLine(p, x1, y1, x2, y2);
            g->DrawLine(p, x1 - 30, y1, x2 - 30, y2);
            g->DrawLine(p, x1 - 70, y1, x2 - 70, y2);
        }
    }
    void mover(Graphics^ g)
    {
        x1 += dx;
        x2 += dx;
        if (x2 >= 865) {
            dx *= 0;
        }
    }
    void setVisible(bool v) { visible = v; }
    bool getVisible() { return visible; }
};