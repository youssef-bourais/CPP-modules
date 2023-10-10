
#include <iostream>



class Position
{
    private:
        int x;
        int y;
    public:
        Position() : x(0), y(0)
        {
            std::cout<<"constructore called"<<std::endl;
        }
        Position(int x, int y): x(x), y(y)
        {
            std::cout<< "init constructore"<<std::endl;
        }
        ~Position()
        {
            std::cout<<"deconstructore called"<<std::endl;
        }
        Position(Position const &src)
        {
            *this = src;
        }
        int get_x() const
        {
            return this->x;
        }
        int get_y() const
        {
            return this->y;
        }
        void set_x(int x)
        {
            this->x = x;
        }
        void set_y(int y)
        {
            this->y = y;
        }
        Position &operator=(Position const &rclass)
        {
            if(this != &rclass)
            {
                this->x = rclass.x;
                this->y = rclass.y;
            }
            return *this;
        }
        Position operator+(Position const &rclass) const
        {
            Position res;
            res.x = this->x + rclass.x;
            res.y = this->y + rclass.y;
            return res;
        }
        Position operator-(Position const &rclass) const
        {
            Position res;
            res.x = this->x - rclass.x;
            res.y = this->y - rclass.y;
            return res;
        }
        Position operator*(Position const &rclass) const
        {
            return Position(x * rclass.x, y * rclass.y);
        }
        Position operator/(Position const &rclass) const
        {
            return Position(x / rclass.x, y / rclass.y);
        }
        Position operator-() const
        {
            return Position(x * (-1), y * (-1));
        }
        Position &operator--()
        {
            this->x--;
            this->y--;
            return *this;
        }
       Position &operator++()
        {
            this->x++;
            this->y++;
            return *this;
        }
};


std::ostream &operator<<(std::ostream &os, const Position &Fixed)
{
    os<<Fixed.get_x()<< ", "<<Fixed.get_y()<<std::endl; 
    return os;
}


int main()
{
    Position a(1, 2);
    Position b(3, 4);
    Position c(5, 6);
    Position x(4, 6);
    Position y(2, 12);
    Position res;

    res = -(a + b)*(x/y) - c;

    std::cout<< res;
}



