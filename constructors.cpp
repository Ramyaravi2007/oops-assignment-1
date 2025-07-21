#include <iostream.h>
class integer
{
private:
    int val;

public:
    // Default Constructor
     integer()
    {
        val = 0;
        cout << "Default constructor value =" << val << endl;
    }

    // Parameterized Constructor
    integer(int v) 
    {
        val = v;
        cout << "Parameterized constructor value=" << val << endl;
    }

    // Copy Constructor
    integer (const integer &obj) 
    {
        Val = obj.val;
        cout << "Copy constructor value =" << val << endl;
    }
    // Destructor
    ~integer() 
    {
        cout << "Destructor value was=" << val << endl;
    }
    void display()
    {
        cout << "value=" << val << endl;
    }
};

int main() {
    cout << "Creating obj1 using default constructor..." << endl;
    integer obj1;

    cout << "\nCreating obj2 using parameterized constructor..." << endl;
    integer obj2(100);

    cout << "\nCreating obj3 as a copy of obj2..." << endl;
    integer obj3 = obj2;

    cout << "\nDisplaying all objects:\n" << endl;
    obj1.display();
    obj2.display();
    obj3.display();

    cout << "\nEnd of main function. Destructors will now be called." << endl;
    return 0;
}
