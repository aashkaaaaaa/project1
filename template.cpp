

/////////////////////////// addition/////////////
/*#include <iostream>  
using namespace std;  
template<class T>  
class A   
{  
    T num1, num2;
    public:  
    T get()
    {
        cout<<"enter two numbers:";
        cin>>num1>>num2;
    } 
    void add()  
    {  
     cout << "Addition of num1 and num2:"<< num1+num2;  
    }};  
  
int main()  
{  
    A <double> d;
    d.get();  
    d.add();  
    return 0;  
} */

#include <iostream>  
using namespace std;  
template<class T>  
class A  
{
    T a[20];
    int i,j,temp;
public:
    void get(int n)
    {
        cout<<"enter array:";
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
    }

    void sort(int n)
    {
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
                 
            }
           
        }
        for(i=0;i<n;i++)
        {
             cout<<" "<<a[i];
        }

    }
};

int main()
{
    A <double> d;
    int n;
    cout <<"enter limit:";
    cin>>n;
    d.get(n);
    d.sort(n);
}