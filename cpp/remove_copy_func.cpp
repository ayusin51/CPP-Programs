#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int my_int[] = {10, 20, 30, 40, 10, 20, 40, 30};
    vector <int> my_vec(8);
    remove_copy(my_int, my_int + 8, my_vec.begin(), 20);
    vector <int>::iterator it;
    for(it = my_vec.begin(); it != my_vec.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}

