/*
В этом задании вы построите первую простую иерархию классов для заданной предметной области.
Предметная область выглядит следующим образом: есть сущность фигура. Фигуры бывают двух типов: 
треугольник и четырёхугольник. У фигуры есть количество сторон. Для неизвестной фигуры будем 
считать это количество равным нулю. У треугольника три стороны, у четырёхугольника четыре стороны.
У любой фигуры мы хотим узнавать количество её сторон, но мы не должны быть способны изменить количество
сторон для заданной фигуры извне.

Задача: спроектировать и реализовать классы, описывающие предметную область. 
Продемонстрируйте их работу: создайте по одному экземпляру каждого класса и выведите 
информацию о количестве его сторон на консоль.
*/

#include <iostream>
#include <string>


class Figure
{
protected:
    unsigned int sides_count;
    std::string name;
    
public:
    Figure();
    unsigned int get_sides_count();
    std::string get_name();
};
Figure::Figure()
{
    name = "Figure";
    sides_count = 0;
}
unsigned int Figure::get_sides_count()
{
    return sides_count;
}
std::string Figure::get_name()
{
    return name;
}


class Triangle : public Figure
{
public:
    Triangle();
};
Triangle::Triangle()
{
    name = "Triangle";
    sides_count = 3;
}


class Qurdangle : public Figure
{
public:
    Qurdangle();
};
Qurdangle::Qurdangle()
{
    name = "Qurdangle";
    sides_count = 4;
}



Figure figure;
Triangle triangle;
Qurdangle qurdangle;

int main()
{
    std::cout << "Count sides:" << std::endl;

    std::cout << figure.get_name() << ": ";
    std::cout << figure.get_sides_count() << std::endl;

    std::cout << triangle.get_name() << ": ";
    std::cout << triangle.get_sides_count() << std::endl;

    std::cout << qurdangle.get_name() << ": ";
    std::cout << qurdangle.get_sides_count() << std::endl;


    return 0;
}


