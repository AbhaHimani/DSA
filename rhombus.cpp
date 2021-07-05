// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout << " ";
//         }
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;

// int x; // Global x

// int main()
// {
//     int x = 10; // Local x
//     cout << "Value of global x is " << ::x;
//     cout << "\nValue of local x is " << x;
//     return 0;
// }
// #include <iostream>
// using namespace std;

// class ABC
// {
//     int a;

// public:
//     ABC(int x) //Constructor
//     {
//         a = x;
//     }
//     void display()
//     {
//         cout << "a=" << a;
//     }
//     ~ABC() //Destructor
//     {
//         cout << "\nObject is destroyed";
//     }
// };
// int main()
// {
//     ABC obj1(10);
//     obj1.display();
//     return 0;
// }
// #include <iostream>
// using namespace std;
// class ItemType
// {
// private:
//     string name;

// public:
//     string getName()
//     {
//         return name;
//     }
//     void setName(string itemname)
//     {
//         name = itemname;
//     }
// };
// int main()
// {
//     ItemType item;
//     string name;
//     item.setName("furniture_items");
//     item.setName("electronic_items");
//     cout << getName();
//     return 0;
// }
// #include <iostream>
// using namespace std;
// class A
// {
// public:
//     A() { cout << "In constructor"; }
// };
// int main() { A a; }
#include <iostream>
using namespace std;
// class A
// {
//     int i;

// public:
//     A(int a)
//     {
//         i = a;
//     }
//     void show()
//     {
//         cout << "i = " << i << endl;
//     }
// };
// int main()
// {
//     A a(19);
//     a.show();
// }
// class A
// {
//     int i;

// public:
//     A()
//     {
//         i = 0;
//     }
//     A(int a)
//     {
//         i = a;
//     }
//     void show()
//     {
//         cout << "i = " << i << endl;
//     }
// };
// int main()
// {
//     A a(19), b;
//     a.show();
//     b.show();
// }
// class Test
// {
//     int i;

// public:
//     Test(int a)
//     {
//         i = a;
//     }
//     void show()
//     {
//         cout << "i = " << i << endl;
//     }
// };
// int main()
// {
//     Test t(10); //object created
//     Test *p;    // just a pointer, obj not created
//     p = &t;
//     p->show(); // OR t.show();
// }
// class Test
// {
//     int x;

// public:
//     Test(int x)
//     {
//         this->x = x;
//     }
//     void show()

//     {
//         cout << "x = " << x << endl;
//     }
// };
// int main()
// {
//     Test obj(20);
//     obj.show();
// }
// int main()
// {
//     int n;
//     cout << "How many char?";
//     cin >> n;
//     cin.sync();
//     char *st = new char[n];
//     cout << "\nEnter string of atmost n char: ";
//     cin.getline(st, n);
//     cout << endl
//          << "You entered: " << st << endl;
//     delete[] st;
// // }
// #include <iostream>
// using namespace std;
// class base
// {
//     int i, j;

// public:
//     void set(int a, int b)
//     {
//         i = a;
//         j = b;
//     }
//     void show()
//     {
//         cout << i << " " << j << "\n";
//     }
// };
// class derived : public base
// {
//     int k;

// public:
//     void setk(int x) { k = x; }
//     void showk() { cout << k << "\n"; }
// };
// int main()
// {
//     derived ob;
//     ob.setk(20);  // access member of derived class
//     ob.set(1, 2); // access member of base
//     ob.show();    // access member of base
//     ob.showk();   // access member of derived class
//     return 0;
// }

#include <iostream>
using namespace std;
class base
{
protected:
    int i;

public:
    base(int x)
    {
        i = x;
        cout << "Constructing base\n ";
    }
    ~base()
    {
        cout << "Destructing base\n ";
    }
};
class derived : public base
{
    int j;

public:
    derived(int x, int y) : base(y)
    {
        j = x;
        cout << "Constructing derived\n ";
    }
    ~derived()
    {
        cout << "Destructing derived\n ";
    }
    void show()
    {
        cout << i << " " << j
             << "\n";
    }
};
int main()
{
    derived ob(3, 4);
    ob.show(); // displays 4 3
    return 0;
}
