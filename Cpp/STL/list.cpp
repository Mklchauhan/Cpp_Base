#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include<list>

using namespace std;

void play_vec_print(list<double>v){
    list<double>::iterator itr;
    for (itr = v.begin(); itr!=v.end(); itr++)
    {
        cout<<*itr<<endl;
    }
    
}

// void printvec(vector<double> v){
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout<<v[i]<<" "<<" ";
//     }
// }

int main(){

    list<int> v1;
    list<double> v2(3); 

    list<double> &v3 = v2;

    v1.push_back(1);
    v1.push_back(22);
    v1.push_back(34);

    v2.push_back(3.4);
    v2.push_back(4.5);
    v2.push_back(5.6);
    v3.push_back(9.8);

    play_vec_print(v2);

    return 0;


}