#include<iostream>
#include<thread>
using namespace std;

// 1.This is function pointer which we are using 
// void fun(int x){
//     while (x-->0)
//     {
//         cout<< x << endl;
//     }
    
// }

// 2.Using labda expression
// int main()
// {
//     thread t1([](int x){
//         while (x-->0)
//         {
//             cout<< x << endl;
//         }
        
//     },10);
//     t1.join();
//     return 0;
// }

//3. using the functors

// class Base
// {
// public:
//     void operator()(int x){
//         while (x-->0)
//         {
//             cout<< x << endl;
//         }
        
//     }
// };
// int main(){
//     thread t((Base()),10);
//     t.join();
//     return 0;
// }

// 4.Non static member function
// class Base
// {
// public:
//     void fun(int x){
//         while (x-->0)
//         {
//             cout<< x << endl;
//         }
//     }
// };

// int main(){
//     Base b;
//     thread t(&Base::fun, &b, 10);
//     t.join();
//     return 0;
// }

// 5. Static member function
class Base
{
public:
    static void fun(int x){
        while (x-->0)
        {
            cout<< x << endl;
        }
    }
};

int main(){
    Base b;
    thread t(&Base::fun, 10);
    t.join();
    return 0;
}
