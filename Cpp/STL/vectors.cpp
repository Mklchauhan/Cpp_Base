#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>

using namespace std;

void play_vec_print(vector<double>v){
    vector<double>::iterator itr;
    for (itr = v.begin(); itr!=v.end(); itr++)
    {
        cout<<*itr<<endl;
    }
    
}

void printvec(vector<double> v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" "<<" ";
    }
}

int main(){

    //int arr[10] = {2,3,1,2,34,5,2,31,1,0}; 
    //This is fixed array. We can't increase it dynamically
    // TO increase the array dynamically we use vectors. Vectors are like similar to array which increases
    // dynamically and O(1) time complexity consist in push_back and pop_back function

    //Intializing the vector with v1
    vector<int> v1;
    // For copying the vector data type should be same 
    //starting thre value will be the zero in the output
    vector<double> v2(3);  //it will give the 0 0 0 in starting

    //copying the vector
    vector<double> &v3 = v2;

    v1.push_back(1);
    v1.push_back(22);
    v1.push_back(34);

    v2.push_back(3.4);
    v2.push_back(4.5);
    v2.push_back(5.6);
    v3.push_back(9.8);

    play_vec_print(v3);

    return 0;


}