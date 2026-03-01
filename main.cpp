#include <iostream>
#include <portaudio.h>
using namespace std;

int main() {
    Pa_Initialize()
    private void DisplayCurrentReading(object sender, object args)
    {
        AccelerometerReading reading = _accelerometer.GetCurrentReading();
        if (reading != null)
        {
            ScenarioOutput_X.Text = String.Format("{0,5:0.00}", reading.AccelerationX);
            ScenarioOutput_Y.Text = String.Format("{0,5:0.00}", reading.AccelerationY);
            ScenarioOutput_Z.Text = String.Format("{0,5:0.00}", reading.AccelerationZ);
        }
    }
    return 0;
}
