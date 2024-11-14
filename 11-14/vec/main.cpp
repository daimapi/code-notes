#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> a;
    for (int i=1;i<=6;i++) {
        a.push_back(i);
    }
    //a.erase(a.begin()+2);
    a.erase(a.begin()+1,a.begin()+4);
    //a.insert(a.begin()+1,123);
    //a.clear();
    for (int i=0;i<a.size();i++) {
        cout << a[i] << endl;
    }
    return 0;
}
