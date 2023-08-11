#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display_vector(vector<T> v)
{
    int i;
    for (i=0; i<v.size()-1; i++)
    {
        cout << v[i] << ", ";
    }
    cout << v[i] << endl;
}

int main() 
{
    // ########################## //
    freopen("inp.txt", "r", stdin );
    freopen("out.txt", "w", stdout);
    // ########################## //

    vector<char> char_vect1;
    int size;
    cin >> size;
    char c;

    for (int i=0; i<size; i++)
    {
        cin >> c;
        char_vect1.push_back(c);
    }
    cout << "Popping elemets from end" << endl;
    for (int i=0; i<size; i++)
    {
        display_vector(char_vect1);
        char_vect1.pop_back();
    }
    cout << endl;

    // Iterator usage example
    vector<float> fvect1;
    fvect1.push_back(76.73);
    fvect1.push_back(37.84);
    fvect1.push_back(83.03);
    fvect1.push_back(20.56);

    display_vector(fvect1);
    vector<float> :: iterator it1 = fvect1.begin();
    fvect1.insert(it1+2, 2, 8.41);
    display_vector(fvect1);

    // Other member functions (https://en.cppreference.com/w/cpp/container/vector)
    cout << "First element = " << fvect1.front() << endl;
    cout << "Last element  = " << fvect1.back() << endl;
    cout << endl;

    vector<float> fvect2{2.3, 0.07, 8.5, 1.1, 5.6, 9.4};
    fvect1.swap(fvect2);
    display_vector(fvect1);
    display_vector(fvect2);

    // Ways to create vector
    cout << endl << "Ways to create vector" << endl;
    vector<int> v1; // Empty vector with size 0
    cout << v1.size() << endl;
    vector<float> v2(5); // Empty vector with size 5
    cout << v2.size() << endl;

    vector<int> v3(7, 10); // Vector with 7 elements, each having value = 10
    cout << v3.size() << endl;
    display_vector(v3);

    cout << endl << "Vector from iterator range positions" << endl;
    vector<int> v4(v3.begin()+2, v3.end()-1); // Vector from iterator range positions [start, end] - both included
    display_vector(v4);

    vector<char> v5{'a', 'b', 'c'};
    display_vector(v5);

    return 0;
}
