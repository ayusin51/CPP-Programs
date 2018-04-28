#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int my_int[] = {10, 20, 20, 30, 40, 10, 20, 40, 30, 40};
    vector <int> v(my_int, my_int+10);
    vector <int>::iterator it;
    unique(v.begin(), v.end());
    for(it = v.begin(); it != v.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}

