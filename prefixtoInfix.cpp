#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str;
    cin >> str;

    stack<string> st;

    for (int i = str.length() - 1; i >= 0; i--)
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') ||
            (str[i] >= 'a' && str[i] <= 'z') ||
            (str[i] >= '1' && str[i] <= '9'))
        {
            string s = "";
            s += str[i];
            st.push(s);
        }
        else
        {
            string s;
            string t1 = st.top();
            st.pop();
            string t2 = st.top();
            st.pop();

            s = "(" + t1 + str[i] + t2 + ")";
            st.push(s);
        }
    }

    cout << st.top() << endl;

    return 0;
}