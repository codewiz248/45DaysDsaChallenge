#include<iostream>
using namespace std;

int main(){
      int day =0;
      cout<< "ENTER DAY"<< endl;
      cin>>day;
    
    switch(day)
    {case 1  :
        cout<< "Monday";
        break;
    case 2 :
        cout<< "tuesday";
        break;
    case 4:
        cout<< "tuesday";
        break;
    case 3 :
        cout<< "wednesday";
        break;
    case 5 :
        cout<< "thursday";
        break;
    case 6  :
        cout<< "friday";
        break;
    case 7 :
        cout<< "saturday";
        break;
    default:
        cout<<"invald";
        break;
    }
  }