#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    string str1;
    cout << " enter char :";
    cin >> str1;
    int x = 'a';
    int y = 'A';
    cout << x << " " << y << endl;

   string str = {"ASDFGHJASDFGHJASDFGHSDFGH"};
    vector<int> hash(26, 0); //(size,begineening)

    // hash creation
    for (int i = 0; i < str1.size(); i++)
    {
        hash[str1[i] - 'A']++;
    
    }
    // retrieve
    cout << hash['D' - 'A'];
    

    //hash table
    // for (int i = 0; i <= 26; i++)
    // {
    //     cout << hash[i] << endl;
    // }
}
