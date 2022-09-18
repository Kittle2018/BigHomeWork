#include <iostream>
#include<cmath>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define DISTANCE
 #ifdef DISTANCE

#define STRUCT_POINT


struct Point
{
    double x;
    double y;
public:
    double get_x()const
    {
        return x;
    }

    double get_y()const
    {
        return y;
    }

    void set_x(double x)
    {
        this->x = x;
    }

    void set_y(double y)
    {
        this->y = y;
    }

    double distance(Point other)
    {
        double x_distance = this->x - other.x;
        double y_distance = this->y - other.y;
        double distance = sqrt(x_distance * x_distance + y_distance * y_distance);
        return distance;
    }

};

double distance(Point A, Point B)
{
    double x_distance = A.get_x() - B.get_x();
    double y_distance = A.get_y() - B.get_x();
    return sqrt(pow(x_distance, 2) + pow(y_distance, 2));

}
void main()
{
    setlocale(LC_ALL, "");

#ifdef STRUCT_POINT
    int a; 
    Point A;
    
    A.x = 2;
    A.y = 3;
    cout << A.x << "\t" << A.y << endl;

    Point* pA = &A; 
    cout << pA-> x << "\t" << pA-> y << endl;
#endif // STRUCT_POINT
    {
        Point A;
        A.set_x(2);
        A.set_y(3);
        cout << A.get_x() << "\t" << A.get_y() << endl;
    };
        Point B;
        B.set_x(7);
        B.set_y(8);
        cout << B.get_x() << "\t" << B.get_y() << endl;
    
    cout << "Расстояние от A до  B -> " << A.distance(B) << endl;
    cout << "Расстояние от B до  A -> " << B.distance(A) << endl;


    cout << "Расстояние Между A и B -> " << distance(B, A) << endl;
    cout << "Расстояние Между B и A -> " << distance(A, B) << endl;
}
#endif // DISTANCE

//#define CLASS_FRACTION
 #ifdef CLASS_FRACTION

class Fraction
{
    int A, B;
public:

    Fraction(int A, int B)
    {
        this->A = A;
        this->B = B;
    }

    Fraction operator+(Fraction c)
    {
        int A1 = int(this->A * c.B + this->B * c.A);
        int A2 = int(this->B * c.B);
        return Fraction(A1, A2);
    }

    Fraction operator-(Fraction c)
    {
        int A1 = int(this->A * c.B - this->B * c.A);
        int A2 = int(this->B * c.B);
        return Fraction(A1, A2);
    }

    Fraction operator*(Fraction c)
    {
        return Fraction(this->A * c.A, this->B * c.B);
    }

    Fraction operator/(Fraction c)
    {
        return Fraction(this->A * c.B, this->B * c.A);
    }

    void Print()
    {
        cout << "(" << this->A << "/" << this->B << ")";
    }
};

void main()
    {
    setlocale(LC_ALL, "Russian");
    Fraction D1(1, 10);
    Fraction D2(2, 5);
    cout << "Дробь 1: "; D1.Print(); cout << endl;
    cout << "Дробь 2: "; D2.Print(); cout << endl;

    D1.Print(); cout << "+"; D2.Print(); cout << "="; Fraction(D1 + D2).Print(); cout << endl;
    D1.Print(); cout << "-"; D2.Print(); cout << "="; Fraction(D1 - D2).Print(); cout << endl;
    D1.Print(); cout << "*"; D2.Print(); cout << "="; Fraction(D1 * D2).Print(); cout << endl;
    D1.Print(); cout << "/"; D2.Print(); cout << "="; Fraction(D1 / D2).Print(); cout << endl;
    }



#endif // CLASS_FRACTION

//#define OPERATORS
#ifdef OPERATORS
//#define OPERATOR_PLUS
//#define OPERATOR_MINUS
//#define OPERATOR_YMNOJENIA
//#define OPERATOR_DELENIA

//#define OPERATOR_PLUS_RAVNO
//#define OPERATOR_MINUS_RAVNO
//#define OPERATOR_YMNOJENIA_RAVNO
//#define OPERATOR_DELENIA_RAVNO

//#define OPERATOR_DECREMENTO

//#define OPERATOR_BOLSHE
//#define OPERATOR_MENSHE
//#define OPERATOR_VOSKL_RAVNO
//#define OPERATOR_RAVNO_RAVNO
//#define OPERATOR_BOLSHE_RAVNO
//#define OPERATOR_MENSHE_RAVNO

#ifdef OPERATOR_PLUS
class Fraction
{
private:
    int m_cents;

public:
    Fraction(int cents) { m_cents = cents; }

    friend Fraction operator+(const Fraction& c1, const Fraction& c2);

    int getCents() const { return m_cents; }
};


Fraction operator+(const Fraction& c1, const Fraction& c2)
{
    return Fraction(c1.m_cents + c2.m_cents);
}

int main()
{
    Fraction cents1{ 612 };
    Fraction cents2{ 748 };
    Fraction centsSum{ cents1 + cents2 };
    std::cout << " change " << centsSum.getCents() << " cents.\n";

    return 0;
}




#endif // OPERATOR_PLUS

 #ifdef OPERATOR_MINUS
class Fraction
{
private:
    int m_cents;

public:
    Fraction(int cents) { m_cents = cents; }

    friend Fraction operator-(const Fraction& c1, const Fraction& c2);

    int getCents() const { return m_cents; }
};

Fraction operator-(const Fraction& c1, const Fraction& c2)
{
    return Fraction(c1.m_cents - c2.m_cents);
}

int main()
{
    Fraction cents1{ 733 };
    Fraction cents2{ 432 };
    Fraction centsSum{ cents1 - cents2 };
    std::cout << " Change " << centsSum.getCents() << " cents.\n";

    return 0;
}

#endif // OPERATOR_MINUS

 #ifdef OPERATOR_YMNOJENIA
class Fraction
{
private:
    int m_cents;

public:
    Fraction(int cents) { m_cents = cents; }

    friend Fraction operator*(const Fraction& c1, const Fraction& c2);

    int getCents() const { return m_cents; }
};

Fraction operator*(const Fraction& c1, const Fraction& c2)
{
    return Fraction(c1.m_cents * c2.m_cents);
}

int main()
{
    Fraction cents1{ 82 };
    Fraction cents2{ 2 };
    Fraction centsSum{ cents1 * cents2 };

    std::cout << "I have " << centsSum.getCents() << " cents.\n";

    return 0;
}

#endif // OPERATOR_YMNOJENIA

 #ifdef OPERATOR_DELENIA
class Fraction
{
private:
    int m_cents;

public:
    Fraction(int cents) { m_cents = cents; }

    friend Fraction operator/(const Fraction& c1, const Fraction& c2);

    int getCents() const { return m_cents; }
};


Fraction operator/(const Fraction& c1, const Fraction& c2)
{
    return Fraction(c1.m_cents / c2.m_cents);
}

int main()
{
    Fraction cents1{ 612 };
    Fraction cents2{ 3 };
    Fraction centsSum{ cents1 / cents2 };
    std::cout << " change " << centsSum.getCents() << " cents.\n";

    return 0;
}
#endif // OPERATOR_DELENIA

 #ifdef OPERATOR_BOLSHE
class Fraction
{
private:
    int m_cents;

public:
    Fraction(int cents) { m_cents = cents; }

    friend Fraction operator>(const Fraction& c1, const Fraction& c2);

    int getCents() const { return m_cents; }
};


Fraction operator>(const Fraction& c1, const Fraction& c2)
{
    return Fraction(c1.m_cents > c2.m_cents);
}

int main()
{
    Fraction cents1{ 1000 };
    Fraction cents2{ 999 };
    Fraction centsSum{ cents1 > cents2 };
    std::cout << " change " << centsSum.getCents() << " cents.\n";

    return 0;
}
#endif // OPERATOR_BOLSHE

 #ifdef OPERATOR_MENSHE
class Fraction
{
private:
    int m_cents;

public:
    Fraction(int cents) { m_cents = cents; }

    friend Fraction operator<(const Fraction& c1, const Fraction& c2);

    int getCents() const { return m_cents; }
};


Fraction operator<(const Fraction& c1, const Fraction& c2)
{
    return Fraction(c1.m_cents < c2.m_cents);
}

int main()
{
    Fraction cents1{ 1000 };
    Fraction cents2{ 999 };
    Fraction centsSum{ cents1 < cents2 };
    std::cout << " change " << centsSum.getCents() << " cents.\n";

    return 0;
}
#endif // OPERATOR_MENSHE

 #ifdef OPERATOR_VOSKL_RAVNO
class Fraction
{
private:
    int m_cents;

public:
    Fraction(int cents) { m_cents = cents; }

    friend Fraction operator!=(const Fraction& c1, const Fraction& c2);

    int getCents() const { return m_cents; }
};


Fraction operator!=(const Fraction& c1, const Fraction& c2)
{
    return Fraction(c1.m_cents != c2.m_cents);
}

int main()
{
    Fraction cents1{ 612 };
    Fraction cents2{ 650 };
    Fraction centsSum{ cents1 != cents2 };
    std::cout << " change " << centsSum.getCents() << " cents.\n";

    return 0;
}

#endif // OPERATOR_PLUS_RAVNO

 #ifdef OPERATOR_RAVNO_RAVNO
class Fraction
{
private:
    int m_cents;

public:
    Fraction(int cents) { m_cents = cents; }

    friend Fraction operator==(const Fraction& c1, const Fraction& c2);

    int getCents() const { return m_cents; }
};


Fraction operator==(const Fraction& c1, const Fraction& c2)
{
    return Fraction(c1.m_cents == c2.m_cents);
}

int main()
{
    Fraction cents1{ 649 };
    Fraction cents2{ 650 };
    Fraction centsSum{ cents1 == cents2 };
    std::cout << " change " << centsSum.getCents() << " cents.\n";

    return 0;
}
#endif // OPERATOR_RAVNO_RAVNO

 #ifdef OPERATOR_BOLSHE_RAVNO
class Fraction
{
private:
    int m_cents;

public:
    Fraction(int cents) { m_cents = cents; }

    friend Fraction operator>=(const Fraction& c1, const Fraction& c2);

    int getCents() const { return m_cents; }
};


Fraction operator>=(const Fraction& c1, const Fraction& c2)
{
    return Fraction(c1.m_cents >= c2.m_cents);
}

int main()
{
    Fraction cents1{ 663 };
    Fraction cents2{ 650 };
    Fraction centsSum{ cents1 >= cents2 };
    std::cout << " change " << centsSum.getCents() << " cents.\n";

    return 0;
}
#endif // OPERATOR_BOLSHE_RAVNO

 #ifdef OPERATOR_MENSHE_RAVNO
class Fraction
{
private:
    int m_cents;

public:
    Fraction(int cents) { m_cents = cents; }

    friend Fraction operator<=(const Fraction& c1, const Fraction& c2);

    int getCents() const { return m_cents; }
};


Fraction operator<=(const Fraction& c1, const Fraction& c2)
{
    return Fraction(c1.m_cents <= c2.m_cents);
}

int main()
{
    Fraction cents1{ 663 };
    Fraction cents2{ 650 };
    Fraction centsSum{ cents1 <= cents2 };
    std::cout << " change " << centsSum.getCents() << " cents.\n";

    return 0;
}
#endif // OPERATOR_MENSHE_RAVNO

 #ifdef OPERATOR_PLUS_RAVNO
class Fraction
{
public:
    Fraction(int sec)
    {
        seconds = sec;
    }
    void display()
    {
        std::cout << seconds << " charge " << std::endl;
    }
    Fraction& operator += (Fraction c2)
    {
        seconds += c2.seconds;
        return *this;
    }
    int seconds;
};
int main()
{
    Fraction c1(20);
    Fraction c2(10);
    c1 += c2;
    c1.display();   
    return 0;
}
#endif // OPERATOR_PLUS_RAVNO

 #ifdef OPERATOR_MINUS_RAVNO
class Fraction
{
public:
    Fraction(int sec)
    {
        seconds = sec;
    }
    void display()
    {
        std::cout << seconds << " charge " << std::endl;
    }
    Fraction& operator -= (Fraction c2)
    {
        seconds -= c2.seconds;
        return *this;
    }
    int seconds;
};
int main()
{
    Fraction c1(20);
    Fraction c2(10);
    c1 -= c2;
    c1.display();
    return 0;
}
#endif // OPERATOR_MINUS_RAVNO

 #ifdef OPERATOR_YMNOJENIA_RAVNO
class Fraction
{
public:
    Fraction(int sec)
    {
        seconds = sec;
    }
    void display()
    {
        std::cout << seconds << " charge " << std::endl;
    }
    Fraction& operator *= (Fraction c2)
    {
        seconds *= c2.seconds;
        return *this;
    }
    int seconds;
};
int main()
{
    Fraction c1(20);
    Fraction c2(10);
    c1 *= c2;
    c1.display();
    return 0;
}
#endif // OPERATOR_YMNOJENIA_RAVNO

 #ifdef OPERATOR_DELENIA_RAVNO
class Fraction
{
public:
    Fraction(int sec)
    {
        seconds = sec;
    }
    void display()
    {
        std::cout << seconds << " charge " << std::endl;
    }
    Fraction& operator /= (Fraction c2)
    {
        seconds /= c2.seconds;
        return *this;
    }
    int seconds;
};
int main()
{
    Fraction c1(20);
    Fraction c2(10);
    c1 /= c2;
    c1.display();
    return 0;
}
#endif // OPERATOR_DELENIA_RAVNO

 #ifdef OPERATOR_DECREMENTO
class Fraction
{
public:
    Fraction(int sec)
    {
        seconds = sec;
    }
    void display()
    {
        std::cout << seconds << " seconds" << std::endl;
    }
    // префиксные операторы
    Fraction& operator++ ()
    {
        seconds += 5;
        return *this;
    }
    Fraction& operator-- ()
    {
        seconds -= 5;
        return *this;
    }
    // постфиксные операторы
    Fraction operator++ (int)
    {
        Fraction prev = *this;
        ++* this;
        return prev;
    }
    Fraction operator-- (int)
    {
        Fraction prev = *this;
        --* this;
        return prev;
    }
    int seconds;
};
int main()
{
    Fraction c1(20);
    Fraction c2 = c1++;
    c2.display();
    c1.display();  
    --c1;
    c1.display();       
    return 0;
}
#endif // OPERATOR_DECREMENTO

#endif // OPERATORS

//#define STRING
 #ifdef STRING

class String
{
    int size;
    char* str;
public:
    int get_size()const
    {
        return size;
    }
    const char* get_str()const
    {
        return str;
    }

    String(int size = 80)
    {
        this->size = size;
        this->str = new char[size] {};
        cout << "DefaultConstructor:\\t" << this << endl;
    }
    ~String()
    {
        delete[] this->str;
        cout << "Destructor:\t\t" << this << endl;
    }

    void print()const
    {
        cout << "Size:\t" << size << endl;
        cout << "Str:\t" << str << endl;
    }
};

    void main()
    {
        setlocale(LC_ALL, "Russian");
    }



#endif // STRING

//#define STRING_OPERATORS
     #ifdef STRING_OPERATORS

    class String;

    String operator+ (const String&, String& R);
    std::ostream& operator<< (std::ostream& os, String& line);
    bool is_palindrome(const String& obj);

    class String
    {
        int size;
        char* line;
    public:

        int get_size()const
        {
            return size;
        }
        char* get_line()
        {
            return line;
        }
        const char* get_line()const
        {
            return line;
        }

        explicit String()
        {
            this->size = 80;
            this->line = new char[80]{};
        }
        explicit String(int size)
        {
            this-> size = size;
            this-> line = new char[size] {};
        }
        String(const char* line)
        {
            this->size = strlen(line) + 1;
            this->line = new char[size] {};
            for (int i = 0; i < size; i++) this->line[i] = line[i];   
        }
        String(const String& line)
        {
            this->size = line.size;
            this->line = new char[size] {};
            for (int i = 0; i < size; i++)this->line[i] = line.line[0];
        }
        ~String()
        {
            delete[]line;
        }

        void print()const
        {
            cout << size << endl;
            cout << line << endl;
        }

        String operator=(const String& line)
        {
            if (this == &line)return *this;
            delete[] this->line;
            this->size = line.size;
            this->line = new char[size] {};
            for (int i = 0; i < size; i++) this->line[i] = line.line[i];
            return *this;
        }
        char& operator[](int i)const
        {
            return line[i];
        }
        String& operator+=(const String& line)
        {
            return*this = *this + line;
        }
        void to_upper()
        {
            for (int i = 0; i < this->size; i++)
            {
                if ((int)line[i] > 96 and (int)line[i] < 123)
                {
                    this->line[i] = (int)line[i] - 32;
                }
            }
        }
        void to_lower()
        {
            for (int i = 0; i < this->size; i++)
            {
                if ((int)line[i] > 64 and (line)[i] < 91)
                {
                    this->line[i] = (int)line[i] + 32;
                }
            }
        }

    };

    void main()
    {
        setlocale(LC_ALL, "Russia");
        String World = "World";
        String Hello = "Hello";
        Hello += World;
        cout << Hello << endl;
        cout << (int)'v' << "\t" << (int)'V' << endl;
        cout << (int)'d' << "\t" << (int)'D' << endl;
        cout << (int)'i' << "\t" << (int)'I' << endl;
        cout << (int)'l' << "\t" << (int)'L' << endl;
        Hello.to_upper();
        cout << Hello << endl;
        Hello.to_lower();
        cout << Hello << endl;
        String Ded = "bOoB";
        if (is_palindrome(Ded))
        {
            cout << 1;
        }
        else
        {
            cout << 0;
        }
    }

    String operator+ (const String L, const String& R)
    {
        String cat(L.get_size() + R.get_size() - 1);
        for (int i = 0; i < L.get_size(); i++)
            cat[i] = L[i];
        for (int i = 0; i < R.get_size(); i++)
            cat[i + L.get_size() - 1] + R[i];
        return cat;
    }
    std::ostream& operator<<(std::ostream& os, const String& line)
    {
        return os << line.get_line();
    }

    bool is_palindrome(const String& obj)
    {
        String palindrome = obj.get_line();
        int inv_i = (obj.get_size() - 2);
        palindrome.to_lower();
        for (int i = 0; i < obj.get_size() - 1; i++)
        {
            if (palindrome[i] != palindrome[inv_i])
            {
                return 0;
            }
            if (inv_i > 0)
            {
                inv_i--;
            }
        }
        return 1;
    }


#endif // STRING_OPERATORS
