#include <iostream>
#include <list>
using namespace std;
// List
// template <class T>
void display(list<int> &lst)
{
    list<int>::iterator itr;
    itr = lst.begin();
    for (itr = lst.begin(); itr != lst.end(); itr++)
    {
        cout << *itr << "  ";
    }
    cout << endl;
}

int main()
{
    list<int> list1; // List of 0 length
    list1.push_back(6);
    list1.push_back(7);
    list1.push_back(5);
    list1.push_back(6);
    display(list1);
    list1.push_front(1);
    // list1.pop_front();
    // list1.pop_back();
    // list1.remove(6);
    display(list1);
    
    /***************** Sorting the list *****************/
    list1.sort();
    display(list1);


    list<int> list2(3); // Empty list of size 3
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 97;
    iter++;
    *iter = 43;
    iter++;
    *iter = 22;
    display(list2);

    /***************** Extra function *****************/

    list1.merge(list2);
    cout << "After sorting" << endl;
    display(list1);
    cout << "After reversing" << endl;
    list1.reverse();
    display(list1);


    cout << endl;
    return 0;
}