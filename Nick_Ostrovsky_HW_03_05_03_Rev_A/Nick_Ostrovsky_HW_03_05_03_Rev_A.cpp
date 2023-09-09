#include <iostream>
class Figure
{
private:
    int side_count;
    std::string name;
public:
    Figure() : side_count(0), name("Figure") {}
    Figure(int s_c, std::string n) : side_count(s_c), name(n) {}
    int get_side()
    {
        return side_count;
    };
    int side_out()
    {

        return get_side();
    };
    void set_name(std::string haise)
    {
        name = haise;


    };
    virtual bool  check()
    {
        return 1;
    };
    virtual void publication()
    {
        std::cout << " \n\n\n\t Sides number: \n" << get_side() << std::endl;
    };
    std::string get_name()
    {
        return name;

    }

};

class Triangle : public Figure
{
protected:
    int a1, b1, c1;
    int _a1, _b1, _c1;

public:

    Triangle() : Figure(3, "Triangle"), a1(10), b1(10), c1(10), _a1(33), _b1(33), _c1(33) {};
    Triangle(int a, int b, int c, int a_, int b_, int c_) : Figure(3, " Triangle "), a1(a), b1(b), c1(c), _a1(a_), _b1(b_), _c1(c_) {};

    bool check() override
    {
        if ((_a1 + _b1 + _c1) == 180)
        {
            return 1;

        }
        else
        {
            return 0;

        }
    }
    void publication() override
    {
        Figure::publication();
        std::cout << "\n " << get_name() << std::endl;
        std::cout << " Sides: " << " Side A: " << a1 << " Side B " << b1 << "Side C " << c1 << std::endl;
        std::cout << " Angles: " << " Angle A " << _a1 << " Angle B " << _b1 << " Angle C " << _c1 << std::endl;
        if (check())
        {
            std::cout << "Check is ok." << std::endl;
        }
        else
        {
            std::cout << "Check FAILED." << std::endl;
        }
    }


};
class Quad : public Figure
{
protected:
    int a1, b1, c1, d1;
    int _a1, _b1, _c1, _d1;
     std::string name = "Quad";
public:
    Quad() : Figure(4, "Quad"), a1(10), b1(10), c1(10), d1(10), _a1(90), _b1(90), _c1(90), _d1(90) {};
    Quad(int a, int b, int c, int d, int a_, int b_, int c_, int d_) : Figure(4, " Quad "), a1(a), b1(b), c1(c), d1(d), _a1(a_), _b1(b_), _c1(c_), _d1(c) {};

    bool check() override
    {
        if ((_a1 + _b1 + _c1 + _d1) == 360)
        {
            return 1;

        }
        else
        {
            return 0;

        }
    }
    void publication() override
    {
        
        Figure::publication();
        std::cout << "\n " << name << std::endl;
        std::cout << "Sides: " << " Side A: " << a1 << " Side B: " << b1 << "Side C: " << c1 << "Side D: " << d1 << std::endl;
        std::cout << "Angles: " << " Angle A: " << _a1 << " Angle B: " << _b1 << " Angle C: " << _c1 << " Side D: " << _d1 << std::endl;
    if (check())
        {
            std::cout << "Check is ok." << std::endl;
        }
        else
        {
            std::cout << "Check FAILED." << std::endl;
        }
    
    }

};
class right_angle_triangle : public Triangle
{
protected:
    /*int a1, b1 , c1, s1;
    int _a1, _b1, _c1;*/
    std::string name = "right_angle_triangle";
public:

    right_angle_triangle() : Triangle((10), 10, 10, 45, 45, 90) {};
    right_angle_triangle(int a, int b, int c, int a_, int b_) : Triangle(a, b, c, a_, b_, 90) {};

    bool check() override
    {
        
        
        if ((_c1 == 90) &&  Triangle::check())
        {
           return 1;

        }
        else
        {
            return 0;

        }

    }
    void publication() override
    {
        Figure::publication();
        set_name(name);
        get_name();

        std::cout << "\n " << name << std::endl;
        std::cout << "Sides: " << " Side A: " << a1 << " Side B" << b1 << "Side C " << c1 << std::endl;
        std::cout << "Angles: " << " Angle A " << _a1 << " Angle B " << _b1 << " Angle C " << _c1 << std::endl;
        if (check())
        {
            std::cout << "Check is ok." << std::endl;
        }
        else
        {
            std::cout << "Check FAILED." << std::endl;
        }

    }


};
//
class isosceles_triangle : public Triangle
{
protected:
    //    int a1, b1, c1;
    //    int _a1, _b1, _c1;
    std::string name = "isosceles_triangle";
public:

    isosceles_triangle() : Triangle(10, 30, 10, 80, 50, 50) {};
    isosceles_triangle(int a, int b, int a_, int b_, int c_) : Triangle(a, b, a, a_, b_, c_) {};
    bool check() override
    {


        if ((a1 == c1 ) && Triangle::check())
        {
            return 1;

        }
        else
        {
            return 0;

        }

    }
    void publication() override
    {
        Figure::publication();
        set_name(name);
        get_name();
        std::cout << "\n " << name << std::endl;
        std::cout << "Sides: " << " Side A: " << a1 << " Side B" << b1 << "Side C " << c1 << std::endl;
        std::cout << "Angles: " << " Angle A " << _a1 << " Angle B " << _b1 << " Angle C " << _c1 << std::endl;

        if (check())
        {
            std::cout << "Check is ok." << std::endl;
        }
        else
        {
            std::cout << "Check FAILED." << std::endl;
        }
    }


};
class equilateral_triangle : public Triangle
{
protected:
    //    int a1, b1, c1;
    //    int _a1, _b1, _c1;
    std::string name = "equilateral_triangle";
public:

    equilateral_triangle() : Triangle(30, 30, 30, 60, 60, 60) {};
    equilateral_triangle(int a) : Triangle(a, a, a, 60, 60, 60) {};
    bool check() override
    {


        if ((_a1 == _c1) && (_b1 == _a1) && Triangle::check())
        {
            return 1;

        }
        else
        {
            return 0;

        }

    }
    void publication() override
    {
        Figure::publication();

        set_name(name);
        get_name();
        std::cout << "\n " << name << std::endl;
        std::cout << " Sides: " << " Side A: " << a1 << " Side B " << b1 << "Side C " << c1 << std::endl;
        std::cout << " Angles: " << " Angle A " << _a1 << " Angle B " << _b1 << " Angle C " << _c1 << std::endl;

        if (check())
        {
            std::cout << "Check is ok." << std::endl;
        }
        else
        {
            std::cout << "Check FAILED." << std::endl;
        }
    }


};
class rectangle : public Quad
{
protected:
    //    int a1, b1, c1, d1, s;
    //    int _a1, _b1, _c1, _d1;
    std::string name = "rectangle";
public:
    rectangle() : Quad(10, 10, 10, 10, 90, 90, 90, 90) {};
    rectangle(int a, int b) : Quad(a, a, b, b, 90, 90, 90, 90) {};
    bool check() override
    {


        if ((a1 == b1) && (c1 == d1) && Quad::check())
        {
            return 1;

        }
        else
        {
            return 0;

        }
    }
    void publication() override
    {
       // Figure::set_name(name1);
        Figure::publication();
        std::cout << "\n " << name << std::endl;

        std::cout << " Sides: " << " Side A: " << a1 << " Side B:" << b1 << "Side C: " << c1 << "Side D:" << d1 << std::endl;
        std::cout << " Angles: " << " Angle A: " << _a1 << " Angle B: " << _b1 << " Angle C: " << _c1 << " Side D: " << _d1 << std::endl;


        if (check())
        {
            std::cout << "Check is ok." << std::endl;
        }
        else
        {
            std::cout << "Check FAILED." << std::endl;
        }
    }


};
class square : public Quad
{
protected:
    //    int a1, b1, c1, d1;
    //    int _a1, _b1, _c1, _d1;
    std::string name = "square";
public:
    square() : Quad(10, 10, 10, 10, 90, 90, 90, 90) {};
    square(int a) : Quad(a, a, a, a, 90, 90, 90, 90) {};
    //    void get_name() { std::cout << name << std::endl; }
    bool check() override
    {


        if ((a1 == b1) && (c1 == d1) && (a1 == d1) && Quad::check())
        {
            return 1;

        }
        else
        {
            return 0;

        }
    }
    void publication() override
    { 
      set_name(name);
        Figure::publication();
        std::cout << "\n " << name << std::endl;
        std::cout << "Sides: " << " Side A: " << a1 << " Side B: " << b1 << "Side C:  " << c1 << "Side D: " << d1 << std::endl;
        std::cout << " Angle A: " << _a1 << " Angle B: " << _b1 << " Angle C: " << _c1 << " Side D: " << _d1 << std::endl;
    
        if (check())
        {
            std::cout << "Check is ok." << std::endl;
        }
        else
        {
            std::cout << "Check FAILED." << std::endl;
        }
    }

};

class parallelogram : public Quad
{
protected:
    //    int a1, b1, c1, d1;
    //    int _a1, _b1, _c1, _d1;
    std::string name = "parallelogram";
public:
    parallelogram() : Quad(30, 40, 30, 40, 40, 60, 40, 60) {};
    parallelogram(int a, int b) : Quad(a, b, a, b, 90, 90, 90, 90) {};
    //    void get_name() { std::cout << name << std::endl; }
    
    
    bool check() override
    {


        if ((a1 == b1) && (c1 == d1) && (_a1 == _c1) && (_b1 == _d1) && Quad::check())
        {
            return 1;

        }
        else
        {
            return 0;

        }
    }
    void publication() override
    {
           set_name(name);
        Figure::publication();
        std::cout << "\n " << name << std::endl;
        std::cout << "Sides: " << " Side A: " << a1 << " Side B: " << b1 << "Side C: " << c1 << "Side D: " << d1 << std::endl;
        std::cout << "Angles: " << " Angle A: " << _a1 << " Angle B: " << _b1 << " Angle C: " << _c1 << " Side D: " << _d1 << std::endl;
    

        if (check())
        {
            std::cout << "Check is ok." << std::endl;
        }
        else
        {
            std::cout << "Check FAILED." << std::endl;
        }
    
    }

};

class rhombus : public Quad
{
protected:
    //    int a1, b1, c1, d1, s;
    //    int _a1, _b1, _c1, _d1;
    std::string name = "rhombus";
public:
    rhombus() : Quad(30, 40, 30, 40, 40, 60, 40, 60) {};
    rhombus(int a, int b, int _a, int _b) : Quad(a, b, a, b, _a, _b, _a, _b) {};
    //    void get_name() { std::cout << name << std::endl; }
    //
    bool check() override
    {


        if ((a1 == b1) && (c1 == d1) && (d1 ==a1) && (_a1 == _c1) && (_b1 == _d1) && Quad::check())
        {
            return 1;

        }
        else
        {
            return 0;

        }
    }

    void publication() override
    {set_name(name);
        Figure::publication();
        std::cout << "\n " << name << std::endl;
        std::cout << "Sides: " << " Side A: " << a1 << " Side B:" << b1 << "Side C: " << c1 << "Side D: " << d1 << std::endl;
        std::cout << " Angle A: " << _a1 << " Angle B: " << _b1 << " Angle C: " << _c1 << " Side D: " << _d1 << std::endl;
    
        if (check())
        {
            std::cout << "Check is ok." << std::endl;
        }
        else
        {
            std::cout << "Check FAILED." << std::endl;
        }
    
    }

};
void print_info(Figure* figure);
int main()
{
    Figure a;
    Figure* _a = &a;
    Triangle b{ 111, 111, 111, 180, 180, 180 };
    Triangle* _b = &b;
    right_angle_triangle d;
    right_angle_triangle* m = &d;
    isosceles_triangle e{ 333, 44, 60, 60, 60 };
    isosceles_triangle* _e = &e;
    equilateral_triangle f;
    equilateral_triangle* f1 = &f;
    rectangle k;
    rectangle* k1 = &k;
    square l;
    square* l1 = &l;
    parallelogram z;
    parallelogram* z1 = &z;
    rhombus n;
    rhombus* n1 = &n;
    Quad w;
    Quad* w1 = &w;
    print_info(_a);
    print_info(_b);
    print_info(m);
    print_info(_e);
    print_info(f1);
    print_info(k1);
    print_info(l1);
    print_info(z1);
    print_info(n1);
    print_info(w1);
    return 0;
}

void print_info(Figure* figure)
{
    figure->publication();
}
