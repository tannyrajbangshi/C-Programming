#include <iostream>
using namespace std;
class Box2;
class Box1{
public:
    int length,height,width,volume1;
    Box1(int l,int h,int w)
    {
        length=l;
        height=h;
        width=w;
        volume1= length*height*width;
    }
    Box1()
    {

    }
    friend int operator >(Box1,Box2);
};
class Box2{
public:
    int length,height,width,volume2;
    Box2(int l,int h,int w)
    {
        length=l;
        height=h;
        width=w;
        volume2=length*height*width;
    }
    Box2()
    {

    }
    friend int operator > (Box1,Box2);
};
 int operator >(Box1 o1,Box2 o2)
{
    if (o1.volume1>o2.volume2)
    {
        return 1;
    }
    else
        return 0;
}
int main()
{
    Box1 ob1(10,15,5), ob2;
    Box2 o1 (20,15,30), o2;
    if(ob1>o1)
    {
        cout <<"Box1 is bigger";
    }
    else
    {
        cout <<"Box2 is bigger";
    }
}
