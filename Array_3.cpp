// 1) Count the number of triplets whose sum is equal to the given value x.
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,i,j,k,x,count=0;
    vector<int> v;
    cout<<"enter size of array = ";
    cin>>n;
    cout<<"enter array = ";
    for(i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    cout<<"enter target = ";
    cin>>x;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if(v[i]+v[j]+v[k]==x)
                count++;
            }

        }
    }
    cout<<"triplet = "<<count;
}

// 2) Find the factorial of a large number.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v(500,0);
    int i,j,size=0,carry=0,product,n,comp;
    v[0]=1;
    cout<<"enter large number = ";
    cin>>n;
    for(i=2;i<=n;i++)
    {
        for(j=0;j<=size;j++)
        {
        product=v[j]*i+carry;
        v[j]=product%10;
        carry=product/10;
        if(carry!=0 && j==size)
        size++;        
        }
    }
    reverse(v.begin(),v.begin()+size+1);
    for(i=0;i<=size;i++)
    cout<<v[i];
}




// 3) Find the first non-repeating element in the array
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    int n,i,j,x;
    cout<<"size of array = ";
    cin>>n;
    cout<<"enter array = ";
    for(i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            continue;
            else if(v[i]==v[j])
            break;
        }
        if(j==n)
        {
        cout<<"first non repeating element = "<<v[i];
        break;
        }
    }
}




// 5) Move all zeros to the end of the array.
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    int n,i,j,temp,x;
    cout<<"enter size of array = ";
    cin>>n;
    cout<<"enter array  = ";
    for(i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    i=0;j=n-1;
    while(i<j)
    {
        if(v[i]!=0) i++;
        else if(v[j]==0) j--;
        else if(v[i]==0 && v[j]!=0)
        {
            temp=v[i];
            v[i]=v[j];
            v[j]=temp;
        }
    }
    cout<<"moving zero to end = ";
    for(i=0;i<n;i++)
    cout<<v[i]<<" ";
}