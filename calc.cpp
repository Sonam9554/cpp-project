#include <iostream>
using namespace std;
class calc
{
public:
    int a, b, c;
    char op;
    void getValue1();
    void getValue2();
    void getOp();
    void add();
    void sub();
    void mul();
    void divide();

} obj;
int main()
{
    obj.getValue1();
    while (1)
    {
        obj.getOp();
        if (obj.op == '=')
        {
            cout << "Final Answer is " << obj.a;
            break;
            return 1; 

        }
        obj.getValue2();

        if (obj.op == '+')
            obj.add();
        if (obj.op == '-')
            obj.sub();
        if (obj.op == '*')
            obj.mul();
        if (obj.op == '/')
            obj.divide();
    }
    return 0;
}
 void calc ::getValue1()
 {
     cout << "Enter first value : ";
     cin >> a;
 }
void calc ::getValue2()
{
    cout << "Enter second value : ";
    cin >> b;
}
void calc ::getOp()
{
    cout << "Enter operator value : ";
    cin >> op;
}
void calc ::add()
{
    c = a + b;
    cout << a << " + " << b << " = " << c <<endl;
    a = c;
    b = 0;
}
void calc ::sub()
{
    c = a - b;
    cout << a << " - " << b << " = " << c<<endl;
    a = c;
    b = 0;
}
void calc ::mul()
{
    c = a * b;
    cout << a << " * " << b << " = " << c<<endl;
    a = c;
    b = 0;
}
void calc ::divide()
{
    c = a / b;
    cout << a << " / " << b << " = " << c<<endl;
    a = c;
    b = 0;
}