#ifndef ESFERA_H_
#define ESFERA_H_
class Esfera
{
private:
    double raio; // > 0
public:
    Esfera();
    bool setRaio(double);
    double Area() const;
    double Volume() const;
};

Esfera::Esfera()
{
    raio = 1;
}
bool Esfera::setRaio(double aux)
{
    if (aux > 0)
    {
        raio = aux;
        return true;
    }
    else
    {
        return false;
    }
}
double Esfera::Area() const
{
    return (4 * 3.14 * raio * raio);
}
double Esfera::Volume() const
{
    return ((4 / 3) * 3.14 * raio * raio * raio);
}
#endif