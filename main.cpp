#include <iostream>
#include <cmath>
#include <fmt/core.h>

using namespace std;

int main(int argc, char** argv)
{
    int pixelVertical, pixelHorizontal;
    int inchesMonitor;
    const float inchesToCm = 2.54f;

    fmt::print("Insert the monitor dimensions\n");
    fmt::print("First the monitor vertical pixel count:  ");
    cin>>pixelVertical;
    fmt::print("Then the monitor horizontal pixel count:  ");
    cin>>pixelHorizontal;
    fmt::print("Lastly the monitor diagonal size in inches:  ");
    cin>>inchesMonitor;

    float verticalSize = inchesMonitor * inchesToCm * sin(atan(float(pixelVertical)/pixelHorizontal));
    float horizontalSize = inchesMonitor * inchesToCm * cos(atan(float(pixelVertical)/pixelHorizontal));

    fmt::print("The monitor has {} cm by {} cm\n", horizontalSize, verticalSize);

    return 0;
};
