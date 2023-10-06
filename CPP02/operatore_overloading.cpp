
#include <iostream>

class position
{
    private:

        int x;
        int y;

    public:

        position(int xz, int yz): x(xz), y(yz)
        {}
        position add(const position &other) const
        {
            return position(x + other.x, y + other.y);
        }
        position multiple(const position &other) const
        {
            return position(x * other.x, y * other.y);
        }
        position operator+(const position &other) const
        {
            return add(other);
        } position operator*(const position &other) const
        {
            return multiple(other);
        }




        int geterx()
        {
            return this->x;
        }
        int getery()
        {
            return this->y;
        }
};







int main()
{
    position a(2, 5);
    position b(3, 6);
    position d(2, 2);

    //position c = a.add(b.multiple(d));
    position c = a + b * d;
    std::cout<< "x "<<c.geterx()<< "y "<<c.getery()<<std::endl;
}
