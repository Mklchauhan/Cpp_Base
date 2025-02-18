#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> test_score; // It is empty vector
    vector<int> student; // Empty vector

    //checking what will come from the empty vector
    //cout<<test_score.at(0)<<endl;
    /*
    libc++abi: terminating due to uncaught exception of type std::out_of_range: vector
    Abort trap: 6
    */

   //Now adding the elements into the empty vector using the push_back();
   //Pushback adds the element into vector in FIFO format

//    test_score.push_back(100);
//    student.push_back(10);
//    cout<<"The size of the vectors:Test Score "<<test_score.size()<<"and student "<<student.size()<<endl;
//    cout<<"The vectors elements:"<<endl;
//    cout<<"the test score vector element "<<test_score.at(0)<<endl;
//    cout<<"The student vector elemnet "<<student.at(0)<<endl;


    //Here, Initialising the  2D vector

    // vector<vector<int> > vector_2D;

    // vector_2D.push_back(test_score);
    // vector_2D.push_back(student);

    //cout<<vector_2D.at(0)<<endl; common mistake what we have do
    
    // cout<<vector_2D.at(0).at(0)<<endl;

    //What will happen if we want to add the data member into vector at any place?

    // Now intializing the vector with array list

    vector<int> marks {23, 24, 34, 56, 21, 34, 25, 67, 32};

    //tow write the full vector
    for (int element : marks)
    {
        cout<<element<<" ";
    }
     

    return 0;

}