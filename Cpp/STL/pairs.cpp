#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>

using namespace std;

int main(){
    pair<int, string> p; // arguments can be anythin in the pair
    // p= make_pair(2,3); //this one is also a method to make pairs
    p = {2, "value"};
    pair<int, string> &p1 = p; //By making p1 as reference after that we can see p1.first =9 change
    p1.first = 9;
    cout<<p.first <<" "<<p.second<<endl;
    int arr1[] = {1,2,3,4};
    int arr2[] = {4,5,6,7};

    pair<int, int> p_Arr[4]; // We have to give the size of the array while initializing

    p_Arr[0] = {1,2};
    p_Arr[1] = {2,3};
    p_Arr[2] = {3,6};
    p_Arr[3] = {4,7};

    swap(p_Arr[0],p_Arr[3]);

    cout<<"Swapped pair"<<endl;
    cout<<p_Arr[0].first<<" "<<p_Arr[0].second<<endl;
    cout<<p_Arr[3].first<<" "<<p_Arr[3].second<<endl;


    // for (int i = 0; i < 3; i++)
    // {
    //     cout<<p_Arr[i].first<<" "<<p_Arr[i].second<<endl;
    // }
    return 0;
}