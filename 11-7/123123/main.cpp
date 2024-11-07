#include <bits/stdc++.h>

using namespace std;

void sus(string in) {
    //stack<char> s;
    int sco=0, h=0, a=0;
    for (int i=0;i<=in.size();i++) {
        if (in[i] == '(') h++;
        if (in[i] == ')') {
            a++;
        }
        if (h<a) {
            break;
        }
    }
    if (h == a) {
        cout << a << endl;
    }else{
        cout << 0 << endl;
    }
}

int main()
{
    int n;
    cin>>n;
    string a[n];
    for (int i=0;i<n;i++) {
        cin>>a[i];
    }
    for (int i=0;i<n;i++) {
        sus(a[i]);
    }
    return 0;
}

