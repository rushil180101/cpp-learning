#include <cstdlib>
#include <iostream>
using namespace std;

int get_random_int(int lower, int upper)
{
    return (rand() % (upper - lower + 1)) + lower;
}

float get_random_float(float lower, float upper)
{
    float rf = (float)rand() / (float)RAND_MAX;
    int ri = get_random_int(lower, upper);
    return ri + rf;
}

class Task
{
public:
    int task_id;
    float expiration_time;
    void set_attribs(int id, float et)
    {
        task_id = id;
        expiration_time = et;
    }
    void get_attribs()
    {
        cout << "Task - " << task_id << ", Expires at - " << expiration_time << endl;
    }
};

int main() 
{
    // ########################## //
    freopen("inp.txt", "r", stdin );
    freopen("out.txt", "w", stdout);
    // ########################## //

    // Array of objects using pointers
    int n;
    cin >> n;
    
    Task *ptr1 = new Task[n];
    Task *ptr_temp = ptr1;
    int lower = 100, upper = 500;
    float st = 10000.0, et = 20000.0;
    for (int i=0; i<n; i++)
    {
        // Generate random numbers between specific range
        ptr1 -> set_attribs(
            get_random_int(lower, upper),
            get_random_float(st, et)
        );
        ptr1++;
    }
    for (int i=0; i<n; i++)
    {
        ptr_temp -> get_attribs();
        ptr_temp++;
    }
    cout << endl;

    // Approach-2 - No need to create extra temp pointer
    Task *ptr2 = new Task[n];
    lower = 10, upper = 20;
    st = 100000.0, et = 200000.0;
    for (int i=0; i<n; i++)
    {
        // Generate random numbers between specific range
        (ptr2 + i) -> set_attribs(
            get_random_int(lower, upper),
            get_random_float(st, et)
        );
    }
    for (int i=0; i<n; i++)
    {
        (ptr2 + i) -> get_attribs();
    } 

    return 0;
}
