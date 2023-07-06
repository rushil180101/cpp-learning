#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Forward declaration
class GMap;

class Location
{
    // GMap should be declared as friend so that all the members of GMap
    // can access the private members of Location
    friend class GMap;
    int dvc_x_coordinate;
    int dvc_y_coordinate;
    float geographical_pointer;
    float latitude;
    float longitude;

public:
    void set_attributes(int x, int y, float gp, float l1, float l2)
    {
        dvc_x_coordinate = x;
        dvc_y_coordinate = y;
        geographical_pointer = gp;
        latitude = l1;
        longitude = l2;
    }

    float weather_forecast()
    {
        cout << "Searching for weather info at (x, y) = (" << dvc_x_coordinate << ", " << dvc_y_coordinate << ")" << endl;
        float res = (dvc_x_coordinate / dvc_y_coordinate) + 35 % 23;
        return res;
    }

    float* get_latitude_longitude()
    {
        float* info = new float[2];
        info[0] = latitude;
        info[1] = longitude;
        return info;
    }
};

class GMap
{
public:
    float app_version;

    float calculate_distance(Location source, Location destination)
    {
        // Can access private members of Location as it is friend class
        float m = pow((source.dvc_x_coordinate - destination.dvc_x_coordinate), 2);
        float n = pow((source.dvc_y_coordinate - destination.dvc_y_coordinate), 2);
        float distance = sqrt(m + n);
        return distance;
    }
};

int main()
{
    // ########################## //
    freopen("inp.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    // ########################## //

    Location l1, l2;
    l1.set_attributes(31, 7, 7.8, 35.83, 97.18);
    l2.set_attributes(52, 8, 653.73, 31, 526.35);

    GMap gmap1;
    float distance = gmap1.calculate_distance(l1, l2);
    cout << "Distance between l1 and l2 = " << distance << endl;

    return 0;
}
