#include <iostream>
class rectangle
{
private:
    int len;
    int wid;
public:
    rectangle (int l,int w)
    {
          len = l;
          wid = w;
    }
    void getArea()
    {
        return len * wid;
    }
    void display()
    {
        cout << "Len: " << len << endl;
        cout << "Wid: " << wid << endl;
        cout << "Area: " << getArea() << endl;
    }
};

int main() 
{
    Rectangle rect(10,4);
    rect.display();
    return 0;
}
