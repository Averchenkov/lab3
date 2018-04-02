#include <iostream>
#include <string>
#include "function.h"
#include "Circle.h"
#include "Triangle.h"
#include "Quadrangle.h"

using namespace std;


int main()
{
    float radius;
    Tochka centr; 
    string s;

    
    cout << "Vvedite:" << endl << endl;
    cout << "Figuru(triangle/quadrangle): ";
    cin >> s;
    cout << endl;
    
    cout << "radius kruga: ";
    cin >> radius;
    cout << "x y centra kruga: ";
    cin >> centr.first >> centr.second;
    cout << endl;

    Circle *circle = new Circle(centr,radius);
    cout << endl;

    if (s=="triangle")
    {
        Tochka a,b,c;

        cout << "tochka a: ";
        cin >> a.first >> a.second;
        cout << "tochka b: ";
        cin >> b.first >> b.second;
        cout << "tochka c: ";
        cin >> c.first >> c.second;
        cout << endl;

        Triangle *triangle = new Triangle(a,b,c);
        cout << endl; 

        cout << endl;
        Triangle *triangle2 = new Triangle(*triangle);
        cout << endl;
        
        switch (proverka(*circle,*triangle2))
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

        cout << endl; 
        delete triangle;
        cout << endl; 
        cout << endl; 
        delete triangle2;
        cout << endl; 
    }
    else if (s=="quadrangle")
    {
        Tochka a,b,c,d;

        cout << "tochka a: ";
        cin >> a.first >> a.second;
        cout << "tochka b: ";
        cin >> b.first >> b.second;
        cout << "tochka c: ";
        cin >> c.first >> c.second;
        cout << "tochka d: ";
        cin >> d.first >> d.second;
        cout << endl;
        
        Quadrangle *quadrangle = new Quadrangle(a,b,c,d);
        cout << endl; 

        cout << endl;
        Quadrangle *quadrangle2 = new Quadrangle(*quadrangle);
        cout << endl;

        switch (proverka(*circle,*quadrangle2))
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

        cout << endl; 
        delete quadrangle;
        cout << endl; 
    }

    delete circle;
    
    return 0;
}
