#define ARDUINO_NAME String("Name")
#define NETWORK "Network_Name"
#define APIKEY String("0123456789ABCDEF")
#define CUSTOM_DATA_SERVER_IP 0
#define CUSTOM_DATA_SERVER_PASSWORD String("1234")
#define SENSORS {new DHT22Sensor(5), new ThermistorSensor(A2)}
#define SENSORS_LENGTH 2
#define OUTPUTS {new SerialOutput(), SDCardOutput()}
#define OUTPUTS_LENGTH 2
#define DELAY 10000
