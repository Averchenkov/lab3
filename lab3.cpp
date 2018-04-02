#include <iostream>
#include <cmath>
#include <string>

using namespace std;

typedef pair<float,float> Tochka;


// ---------Класс фигур-------
class Figure
{
};


// ---------Класс окружностей-------
class Circle : public Figure
{
    Tochka centr;
    float radius;
    
public:
    Tochka get_centr()
    {
        return centr;
    }
    float get_radius()
    {
        return radius;
    }
    void set_centr(Tochka k)
    {
        centr.first = k.first;
        centr.second = k.second;
    }
    void set_radius(float rad)
    {
        radius = rad;
    }
};

float otrezok(Tochka t1,Tochka t2)
{
    return sqrt(pow((t1.first-t2.first),2)+pow((t1.second-t2.second),2));
}

void raspologenie(Tochka t,Circle k,int *in,int *out,int *touch)
{
    if(otrezok(t,k.get_centr())>k.get_radius()) *out=*out+1;
    else if(otrezok(t,k.get_centr())==k.get_radius()) *touch=*touch+1;
    else if(otrezok(t,k.get_centr())<k.get_radius()) *in=*in+1;   
}

// ---------Класс многоугольников-------
class Polygon : public Figure
{
public:
    virtual int proverka(Circle &k);
};

// ---------Класс треугольников-------
class Triangle : public Polygon
{
    Tochka a;
    Tochka b;
    Tochka c;
public:
    Tochka get_a()
    {
        return a;
    }
    Tochka get_b()
    {
        return b;
    }
    Tochka get_c()
    {
        return c;
    }
    void set_a(Tochka k)
    {
        a.first = k.first;
        a.second = k.second;
    }
    void set_b(Tochka k)
    {
        b.first = k.first;
        b.second = k.second;
    }
    void set_c(Tochka k)
    {
        c.first = k.first;
        c.second = k.second;
    }
    
    virtual int proverka(Circle &k)
    {
        int in=0;
        int out=0;
        int touch=0;
        raspologenie(a,k,&in,&out,&touch);
        raspologenie(b,k,&in,&out,&touch);
        raspologenie(c,k,&in,&out,&touch);
        if(out>0) return 1;
        else if(touch==3) return 2;
        else return 3;
    }
};

// ---------Класс четырехугольников-------
class Quadrangle : public Polygon
{
    Tochka a;
    Tochka b;
    Tochka c;
    Tochka d;
public:
    Tochka get_a()
    {
        return a;
    }
    Tochka get_b()
    {
        return b;
    }
    Tochka get_c()
    {
        return c;
    }
    Tochka get_d()
    {
        return d;
    }
    void set_a(Tochka k)
    {
        a.first = k.first;
        a.second = k.second;
    }
    void set_b(Tochka k)
    {
        b.first = k.first;
        b.second = k.second;
    }
    void set_c(Tochka k)
    {
        c.first = k.first;
        c.second = k.second;
    }
    void set_d(Tochka k)
    {
        d.first = k.first;
        d.second = k.second;
    }
    
    
    virtual int proverka(Circle &k)
    {
        int in=0;
        int out=0;
        int touch=0;
        raspologenie(a,k,&in,&out,&touch);
        raspologenie(b,k,&in,&out,&touch);
        raspologenie(c,k,&in,&out,&touch);
        raspologenie(d,k,&in,&out,&touch);
        if(out>0) return 1;
        else if(touch==4) return 2;
        else return 3;
    }
};

int proverka(Circle &c, Polygon &p)
{
    return p.proverka(c);
}


int main()
{
    Circle c;
    float radius; 
    string s;
    Tochka k;

    
    cout << "Vvedite:" << endl << endl;
    cout << "Figuru(triangle/quadrangle): ";
    cin >> s;
    cout << endl;
    
    cout << "radius kruga: ";
    cin >> radius;
    c.set_radius(radius);
    cout << "x y centra kruga: ";
    cin >> k.first >> k.second;
    c.set_centr(k);
    cout << endl;
    
    if (s=="triangle")
    {
        Triangle t;
        
        
        cout << "tochka a: ";
        cin >> k.first >> k.second;
        t.set_a(k);
        cout << "tochka b: ";
        cin >> k.first >> k.second;
        t.set_b(k);
        cout << "tochka c: ";
        cin >> k.first >> k.second;
        t.set_c(k);
        cout << endl;
        
        switch (proverka(c,t))
        {
            case 1:
                cout << "OUTSIDE" << endl;
                break;
            case 2:
                cout << "TOUCH" << endl;
                break;
            case 3:
                cout << "INSIDE" << endl;
                break;
            default:
                cout << "ERROR" << endl;
        }
    }
    else if (s=="quadrangle")
    {
        Quadrangle q;
        
        cout << "tochka a: ";
        cin >> k.first >> k.second;
        q.set_a(k);
        cout << "tochka b: ";
        cin >> k.first >> k.second;
        q.set_b(k);
        cout << "tochka c: ";
        cin >> k.first >> k.second;
        q.set_c(k);
        cout << "tochka d: ";
        cin >> k.first >> k.second;
        q.set_d(k);
        cout << endl;
        
        switch (proverka(c,q))
        {
            case 1:
                cout << "OUTSIDE" << endl;
                break;
            case 2:
                cout << "TOUCH" << endl;
                break;
            case 3:
                cout << "INSIDE" << endl;
                break;
            default:
                cout << "ERROR" << endl;
        }
    }
    return 0;
}


