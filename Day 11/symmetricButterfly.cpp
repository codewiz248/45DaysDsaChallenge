#include<iostream>
using namespace std;

int main()
{
    //Symmetric Butterfly Pattern
    int n;
    cout << "Enter Number: ";
    cin >> n;
    
    int space = (2*n)-2;
    
     for(int i=1; i<=(2*n)-1; i++)
     {
        //star
        int star = i;
        if(i>n)
        {
            star=(2*n)-i;
        }

        for(int j=1; j<=star; j++)
        {
            cout << "*";
        }

        //space
        
        for(int j=1; j<=space; j++)
        {
            cout << "-";
        }
        
        //star
        if(i>n)
        {
            star=(2*n)-i;
        }
        
        for(int j=1; j<=star; j++)
        {
            cout << "*";
        }
        
        cout << endl;
        if(i<n)
        {
            space-=2;
        }else{
            space+=2;
        }
    }

    
    return 0 ;
}