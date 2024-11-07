#include <bits/stdc++.h>

using namespace std;

int sus(int n) {
    queue<int> s;
    for (int i=1;i<=n;i++) {
        s.push(i);
    }
    while (s.size() > 1) {
        s.pop();
        s.push(s.front());
        s.pop();
    }
    cout << s.front() << endl;
}

int main()
{
    /*int n;
    vector<int> num;
    cin>>n;
    while(n!=0) {
        num.push_back(n);
        cin>>n;
    }*/
    int num[100];
    for (int i=0;i<100;i++) {
        num[i] = i+1;
    }
    for (int i=0;i<100;i++) {
        sus(num[i]);
    }
    return 0;
}

