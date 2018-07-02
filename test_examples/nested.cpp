#include<iostream>
class A
{
    public:
        int test1;

       class B
       {
           public:
           int test2;
           void set_val()
           {
               test2 =1;
           }
           int get_val()
           {
                return test2;
           }
       }a;
};

int main()
{
 A obj;
obj.a.set_val();

}
