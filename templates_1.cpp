#include <iostream>
using namespace std;

// Creates vector for only int values
class vector
{
public:
    int *arr;
    int size;
    vector(int size)
    {
        this->size = size;
        this->arr = new int [size];
    }
    void set_values(int *arr)
    {
        for (int i=0; i<this->size; i++)
        {
            this->arr[i] = arr[i];
        }
    }
    void get_values()
    {
        for (int i=0; i<this->size; i++)
        {
            cout << this->arr[i] << endl;
        }
    }
};

// Create generic class using template
template <class T>
class vector_v2
{
public:
    T* arr;
    int size;
    vector_v2(int size)
    {
        this->size = size;
        this->arr = new T [size];
    }
    void set_values(T *arr)
    {
        for (int i=0; i<this->size; i++)
        {
            this->arr[i] = arr[i];
        }
    }
    void get_values()
    {
        int i;
        for (i=0; i<this->size-1; i++)
        {
            cout << this->arr[i] << ", ";
        }
        cout << this->arr[i] << endl;
    }
};

// Templates with multiple parameters
template <class K, class V>
class Dict
{
public:
    K *keys = new K [100];
    V *values = new V [100];
    int idx;
    Dict() { this->idx = 0; }
    void set(K key, V value)
    {
        this->keys[this->idx] = key;
        this->values[this->idx] = value;
        this->idx += 1;
    }
    V get(K key)
    {
        for (int i=0; i<this->idx; i++)
        {
            if (this->keys[i] == key)
            {
                return this->values[i];
            }
        }
    }
};

int main() 
{
    // ########################## //
    freopen("inp.txt", "r", stdin );
    freopen("out.txt", "w", stdout);
    // ########################## //

    vector v1_int(5);
    int arr[] = {57, 47, 37, 27, 17};
    v1_int.set_values(arr);
    v1_int.get_values();

    // Templates usage
    cout << endl << "Templates usage" << endl;
    vector_v2<int> int_vect1(7);
    vector_v2<float> float_vect1(4);
    vector_v2<char> char_vect(5);

    int int_arr[] = {74, 62, 23, 65, 8, 91, 30};
    int_vect1.set_values(int_arr);
    float float_arr[] = {743.764, 63.036, 1.93, 0.538};
    float_vect1.set_values(float_arr);
    char char_arr[] = {'a', 'b', 'c', 'd', 'e'};
    char_vect.set_values(char_arr);

    int_vect1.get_values();
    float_vect1.get_values();
    char_vect.get_values();

    // Templates with multiple parameters
    cout << endl << "Templates with multiple parameters" << endl;
    Dict<int, float> d1;
    d1.set(2, 43.12);
    d1.set(58, 0.025);
    d1.set(10, 26.3402);
    cout << d1.get(58) << ", " << d1.get(2) << ", " << d1.get(10) << endl;

    Dict<char, char> d2;
    d2.set('a', 'A');
    d2.set('b', 'B');
    d2.set('z', 'Z');
    cout << d2.get('z') << ", " << d2.get('b') << ", " << d2.get('a') << endl;

    return 0;
}
