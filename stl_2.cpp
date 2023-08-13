#include <iostream>
#include <list>
using namespace std;

void display_int_list(list<int> list_obj)
{
    list<int> :: iterator iter;
    int flag = 1;
    for (iter=list_obj.begin(); iter!=list_obj.end(); iter++)
    {
        if (++iter == list_obj.end())
        {
            cout << *(--iter) << endl;
        }
        else
        {
            cout << *(--iter) << ", ";
        }
        flag = 0;
    }
    if (flag) { cout << endl; }
}

void display_float_list(list<float> list_obj)
{
    list<float> :: iterator iter;
    int flag = 1;
    for (iter=list_obj.begin(); iter!=list_obj.end(); iter++)
    {
        if (++iter == list_obj.end())
        {
            cout << *(--iter) << endl;
        }
        else
        {
            cout << *(--iter) << ", ";
        }
        flag = 0;
    }
    if (flag) { cout << endl; }
}

int main() 
{
    // ########################## //
    freopen("inp.txt", "r", stdin );
    freopen("out.txt", "w", stdout);
    // ########################## //

    list<int> l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);
    l1.push_back(40);
    l1.push_back(50);
    l1.push_back(60);
    l1.push_back(70);
    display_int_list(l1);

    list<float> l2(5);
    list<float> :: iterator iter_fl2;
    display_float_list(l2);
    iter_fl2 = l2.begin();
    ++iter_fl2;
    ++iter_fl2;
    l2.insert(iter_fl2, 5.2);
    display_float_list(l2);
    cout << *iter_fl2 << endl;
    --iter_fl2;
    l2.insert(iter_fl2, 3.7);
    display_float_list(l2);
    cout << *iter_fl2 << endl;

    // Merge lists
    list<float> l3{0.1, 5.1, 7.6};

    l2.merge(l3);
    cout << endl << "After merging lists" << endl;
    display_float_list(l2);
    // display_float_list(l3);

    // Sort list
    cout << endl << "Sorting" << endl;
    list<int> l4{59, 32, 46, 22, 10};
    display_int_list(l4);
    l4.sort();
    display_int_list(l4);

    // Assignment and move
    cout << endl;
    cout << "Assignment" << endl;
    list<int> l5 = l4, l6;
    cout << "l4 = ";
    display_int_list(l4);
    cout << "l5 = ";
    display_int_list(l5);

    cout << "Move" << endl;
    l6 = move(l5);
    cout << "l5 = ";
    display_int_list(l5);
    cout << "l6 = ";
    display_int_list(l6);

    // Splice
    cout << endl;
    cout << "Splice" << endl;
    list<int> l7{1, 2, 3}, l8{4, 5, 6};
    cout << "l7 = ";
    display_int_list(l7);
    cout << "l8 = ";
    display_int_list(l8);

    list<int> :: iterator iter_int1;
    iter_int1 = l7.begin();

    l7.splice(iter_int1, l8);
    cout << "Spliced - 1" << endl;
    cout << "l7 = ";
    display_int_list(l7);
    cout << "l8 = ";
    display_int_list(l8);

    l8.splice(l8.begin(), l7, ++(l7.begin()));
    cout << "Spliced - 2" << endl;
    cout << "l7 = ";
    display_int_list(l7);
    cout << "l8 = ";
    display_int_list(l8);

    return 0;
}
