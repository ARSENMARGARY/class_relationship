using namespace std;


class Employee
{
    public:
    Employee();
    void set_data();
    void put_data();


    private:
        string m_name;
        static long m_id;
        int count_id {};

};


class Polar
{
    public:
        Polar();
        Polar(int,int);
        ~Polar();
    public:
        void set_info(int,int);
        void get_info();
        Polar& operator+(Polar&);
    
    
    private:
        int m_radius {};
        int m_angle {};
};

//composition

class Person{
    public:
        Person(){};
        Person(int){};
    private:
        int m_x;
        class Name{
            Name(){};
            ~Name(){};
        };
};



//aggregation


class Person{
    public:
        Person(){};
        Person(int){};
    private:
        int m_x;
        Name obj;
        
};

class Name{
            Name(){};
            ~Name(){};
        };


//association


class Person{
    public:
        Person(){};
        Person(int){};
    private:
        int m_x;
        Name& foo(Name&){};
        
};

class Name{
            Name(){};
            ~Name(){};
        };
