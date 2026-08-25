#include <iostream>
using namespace std;

class Maximum
{
public:
    int a, b;

    void accept()
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    inline void display()
    {
        if(a > b)
            cout << "Maximum = " << a;
        else
            cout << "Maximum = " << b;
    }
};

int main()
{
    Maximum m;

    m.accept();
    m.display();

    return 0;
}
