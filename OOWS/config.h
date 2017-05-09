#define ARDUINO_NAME String("MarsingStationTest")
#define NETWORK "Bronco-Guest"
#define APIKEY String("0123456789ABCDEF")
#define CUSTOM_DATA_SERVER_IP 0
#define CUSTOM_DATA_SERVER_PASSWORD String("1234")
//DallasTemp Pin needs to be digital pin 7;
//SHTSensor needs to have SCK->A5, DATA->A4
#define SENSORS {new ThermistorSensor(2), new SHTSensor(A4), new DallasTemp(4), new BatterySensor(A0), new Barometer()}
#define SENSORS_LENGTH 5
#define OUTPUTS {new SerialOutput(), new SDCardOutput}
#define OUTPUTS_LENGTH 2
#define DELAY 5000
