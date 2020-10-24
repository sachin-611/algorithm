#include <bits/stdc++.h>

using namespace std;

class element
{
public:
    int col;
    int row;
    int val;
};

class sparse
{
private:
    element *ele;
    int n;
    int m;
    int nums;
public:
    sparse()
    {
        cout<<"Enter number of row : ";
        cin>>n;
        cout<<"Enter number of col : ";
        cin>>m;
        cout<<"Enter number of non-zero elements : ";
        cin>>nums;
        ele=new element[nums];
    }
    void read()
    {
        cout<<endl<<"Enter elements : "<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>ele[i].row>>ele[i].col>>ele[i].val;
        }
    }
    void display()
    {
        cout<<endl<<"Matrix"<<endl;
        int k=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==ele[k].row && j==ele[k].col)
                {
                    cout<<ele[k++].val<<" ";
                }
                else
                {
                    cout<<"0 ";
                }
            }
            cout<<endl;
        }
    }
};

int main()
{
    sparse k;
    k.read();
    k.display();
    return 0;
}
