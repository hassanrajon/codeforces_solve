#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
#define nl cout << "\n";
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define ll long long int
#define l long int
#define razon_hassan              \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
using namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> os;
int main()
{
    razon_hassan
        // int is for data type i want to use
        // null_type is for second parameter or data
        // less<int> defines order ascending
        // greater<int> defines order descending
        // less_equal<int> for multiple same value

        os MySet;
    // all operations of set is available here + two extra operation
    // 1-- find_by_order
    // 2-- order_of_key
    // insert operation
    int n;
    cin >> n;
    while (n--)
    {
        ll x;
        cin >> x;
        MySet.insert(x);
    }
    cout << "Ordered set is : ";
    for (auto it : MySet)
    {
        cout << it << " ";
    }
    nl
            cout
        << "find_by_order operation: \n";
    // find_by_order operation (returns pointer of the element)
    cout << *MySet.find_by_order(0) << " at position: 0" << endl;
    cout << *MySet.find_by_order(1) << " at position: 1" << endl;
    cout << *MySet.find_by_order(3) << " at position: 3" << endl;

    cout << "order_of_key operation: \n";
    // order_of_key  (it returns the number of elements strickly smaller than key)
    cout << "no. of elements smaller than 5 is =" << MySet.order_of_key(5) << endl;
    cout << "no. of elements smaller than 10 is = " << MySet.order_of_key(10) << endl;
    cout << "no. of elements smaller than 8 is = " << MySet.order_of_key(8) << endl;
    cout << "no. of elements smaller than 1 is = " << MySet.order_of_key(1) << endl;
    cout << "lower bound and upper bound operations: \n";
    // lower_bound (return pointer)- first element >= x
    // upper_bound(return pointer)- first element > x
    cout << "lower bound of 3 is " << *MySet.lower_bound(3) << endl;
    cout << "upper bound of 3 is " << *MySet.upper_bound(3) << endl;

    return 0;
}
