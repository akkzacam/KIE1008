#include <iostream>
using namespace std;

class swimmingPool
{
public:
    swimmingPool();
    void setParameters();
    void amountWater();
    void time();
    void time_user();

private:
    int length_m, width_m, depth_m, rate_into_m3_per_min, rate_out_m3_per_min;
    int time_drain_or_fill, volume_by_time;
    int amount_class, time_class;
};

swimmingPool::swimmingPool()
{
    length_m = width_m = depth_m = 0;
    rate_into_m3_per_min = rate_out_m3_per_min = 0;
    time_drain_or_fill = volume_by_time = 0;
}

void swimmingPool::setParameters()
{
    cout << "Enter the length of the swimming pool (in m): ";
    cin >> length_m;
    cout << "Enter the width of the swimming pool (in m): ";
    cin >> width_m;
    cout << "Enter the depth of the swimming pool (in m): ";
    cin >> depth_m;
    cout << "Enter the rate at which the water is filling the pool (in m^3 min^-1): ";
    cin >> rate_into_m3_per_min;
    cout << "Enter the rate at which the water is going out the pool (in m^3 min^-1): ";
    cin >> rate_out_m3_per_min;
}

void swimmingPool::amountWater()
{
    amount_class = length_m * width_m * depth_m;
    cout << "Amount of water needed to fill/drain pool is: " << amount_class << " m^3" << endl;
}

void swimmingPool::time()
{
    time_class = amount_class / (rate_into_m3_per_min - rate_out_m3_per_min);
    cout << "Time to fill pool: " << time_class << " minutes" << endl;;
}

void swimmingPool::time_user()
{
    cout << "Enter time (in min) to fill/drain pool: ";
    cin >> time_drain_or_fill;

    volume_by_time = (rate_into_m3_per_min - rate_out_m3_per_min) * time_drain_or_fill;
    cout << "Volume filling/draining to/from pool is: " << volume_by_time << " m^3" << endl;
}

int main (void)
{
    swimmingPool pool1;
    pool1.setParameters();
    pool1.amountWater();
    pool1.time();
    pool1.time_user();
    return 0;
}