#include <iostream>
#include <set>

using namespace std;

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int count;
    int num;
    multiset<int> st;

    cin >> count;

    for (int i = 0; i < count; i++)
    {
        cin >> num;
        st.insert(num);
    }

    for (multiset<int>::iterator it = st.begin(); it != st.end(); ++it)
    {
        cout << *it << " " ;
    }

    return 0;
}