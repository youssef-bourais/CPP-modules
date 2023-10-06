
#include <iostream>

class sample
{
    private:
        int _nbr;
    public:
        sample(void);                      //constructore
        ~sample(void);                     //deconstructore
        sample &operator=(sample const &s);//operator overload
        sample(sample const &src);         //copy the class

        sample(int const n);
        int geter(void) const;

};

sample::sample(void) : _nbr(0)
{
}

sample::sample(int const n) : _nbr(n)
{
}

sample::~sample(void)
{
}

sample::sample(sample const &src)
{
    *this = src;
}

int sample::geter() const
{
    return this->_nbr;
}

sample & sample::operator=(sample const &s)
{
    if(this != &s)
        this->_nbr = s.geter();
    return *this;
}


std::ostream &operator<<(std::ostream &o, const sample &thing)
{
    o <<thing.geter();
    return  o;
}


int main()
{
    sample a;
    sample b(200);
    sample c(b);

    a = b;
    std::cout<< a<<std::endl;

}
