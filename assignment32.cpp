#include<iostream>
using namespace std;
class Complex{
private:
int real,img;
public:
void set_real(int x)
{ 
real=x;
}
void get_real()
    {
cout<<"The value of real part is: "<<real;
    }
void set_img(int y)
{ 
img=y;

}
void get_img()
{
cout<<"The value of imaginary part is: "<<img;
}
void get_complex()
{
    cout<<"The complex number is: "<<real<<" + "<<img<<"i";
}
};
int main()
{
    //This program is going to show you the working of complex number
    Complex c1;
    c1.set_real(5);
    c1.set_img(7);
    // c1.get_real();
    // c1.get_img();
    c1.get_complex();
    return 0;

}