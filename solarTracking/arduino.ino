#define LDR_LEFT A0
#define LDR_RIGHT A1
#define RAIN_SENSOR A2

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    int left = analogRead(LDR_LEFT);
    int right = analogRead(LDR_RIGHT);
    int rain = analogRead(RAIN_SENSOR);

    String motor = "STOP";

    if(left > right + 50)
    {
        motor = "LEFT";
    }
    else if(right > left + 50)
    {
        motor = "RIGHT";
    }

    Serial.print("LEFT:");
    Serial.print(left);

    Serial.print(",RIGHT:");
    Serial.print(right);

    Serial.print(",RAIN:");
    Serial.print(rain);

    Serial.print(",MOTOR:");
    Serial.println(motor);

    delay(2000);
}