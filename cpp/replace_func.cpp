#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int my_int[] = {10, 20, 30, 40, 10, 20, 40, 30};
    vector <int> v(my_int, my_int+8);
    replace(v.begin(), v.end(), 30, 90);
    vector <int>::iterator it;
    for(it = v.begin(); it != v.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}
