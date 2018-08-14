#include <QTRSensors.h>

#define NUM_SENSORS   2     // number of sensors used
#define TIMEOUT       2500  // waits for 2500 microseconds for sensor outputs to go low

// sensors are connected to pin 7 digital and 8 digital
QTRSensorsRC qtrrc((unsigned char[]) {
  7, 8
},
NUM_SENSORS, TIMEOUT);
unsigned int sensorValues[NUM_SENSORS];


void setup()
{
  delay(500);
  //starts serial transmision to the PC
  // set the data rate in bits per second for serial data transmission
  Serial.begin(9600);
  delay(1000);
}


void loop()
{
  // read raw sensor values
  qtrrc.read(sensorValues);

  // print the sensor values as numbers from 0 to 2500, where 0 means maximum reflectance and
  // 2500 means minimum reflectance
  for (unsigned char i = 0; i < NUM_SENSORS; i++)
  {
    Serial.print(sensorValues[i]);
    Serial.print('\t'); // tab to format the raw data into columns in the Serial monitor
  }
  Serial.println();

  delay(250);
}
