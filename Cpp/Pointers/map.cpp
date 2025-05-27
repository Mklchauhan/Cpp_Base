#include<iostream>
#include<map>
using namespace std;
struct car
{
    string model;
    int year;
};

int main()
{
    map<int, car*> car_map;

    car_map[0] = new car{"BMW", 2023};
    car_map[1] = new car{"Volvo", 2024};
    car_map[2] = new car{"Volvo", 2025};


    cout<<car_map[1]->model <<endl;
    cout<<car_map[1]->year <<endl;

    car_map[1]->model = "Ritika";
    car_map[1]->year = 2025;

    cout<<"------------------------"<<endl;
    cout<<car_map[1]->model <<endl;
    cout<<car_map[1]->year <<endl;
//Type your code here
return 0;
}