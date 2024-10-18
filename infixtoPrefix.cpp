#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;
    string ans = "";
    stack<char> st;
    reverse(s.begin(), s.end());

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
            s[i] = ')';
        else if (s[i] == ')')
            s[i] = '(';
    }

    unordered_map<char, int> um = {{'^', 3}, {'*', 2}, {'/', 2}, {'+', 1}, {'-', 1}};

    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] >= 'A' && s[i] <= 'Z') ||
            (s[i] >= 'a' && s[i] <= 'z') ||
            (s[i] >= '1' && s[i] <= '9'))
        {
            ans += s[i];
        }
        else if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                ans += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            if (!st.empty())
            {
                if (um[s[i]] >= um[st.top()])
                {
                    st.push(s[i]);
                }
                else if (um[s[i]] < um[st.top()])
                {
                    while ( !st.empty() && um[st.top()] > um[s[i]])
                    {
                        ans += st.top();
                        st.pop();
                    }
                    st.push(s[i]);
                   
                }
            }
            else
            {
                st.push(s[i]);
            }
        }
    }

    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;

    return 0;
}