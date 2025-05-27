#include<iostream>
using namespace std;

class findsetbit
{
    private:
    int n;
    public:
    findsetbit(int n)
    {
        this->n=n;
    }
    int findsetbitposition();
};

int findsetbit::findsetbitposition()
{
    int count=0;
    while(n>0)
    {
        // if(n&1)
        // {
        //     count++;
        //     break;
        // }
        // n=n>>1;
        // count++;

        if ((n>>1)==1)
        {
            count++;
            break;
            /* code */
        }
        
    }
    return count;
}

int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    findsetbit obj(n);
    cout<<"The position of the set bit is "<<obj.findsetbitposition()<<endl;
return 0;
}
