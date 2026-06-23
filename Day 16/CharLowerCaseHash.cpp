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

    string str = {"a s c d f r e e l y a a b b b c c c c"};
    vector<int> hash(26, 0); //(size,begineening)

    // hash creation
    for (int i = 0; i < str.size(); i++)
    {
        hash[str[i] - 'a']++;
    }
    // retrieve
    cout << hash['d' - 'a'];

    //hash table
    for (int i = 0; i <= 26; i++)
    {
        cout << hash[i] << endl;
    }
}
