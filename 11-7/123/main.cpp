#include <bits/stdc++.h>

using namespace std;

void sus(string in) {
    stack<char> s;
    int sco=0;
    for (int i=0;i<=in.size();i++) {
        if (in[i] == '(') s.push('(');
        if (in[i] == ')' && !s.empty()) {
            s.pop();
            sco++;
        }
        else if(in[i] == ')' && s.empty()) {
            s.push('g');
            break;
        }
    }
    if (s.empty()) {
        cout << sco << endl;
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
    /*while (!s.empty()) {
        int
        if (s.top() == 41) {

        }
        cout << s.top() << endl;
        s.pop();
    }*/
    return 0;
}

