const int pinAdc = A0;
#define LED_PIN 13
#define THRESHOLD 75;

void setup()
{
    Serial.begin(115200);
    pinMode(LED_PIN, OUTPUT);
}

void loop()
{
    long sum = 0;
    for(int i=0; i<32; i++)
    {
        sum += analogRead(pinAdc);
    }

    sum >>= 5;

    if (sum > THRESHOLD) {
        digitalWrite(LED_PIN, HIGH);
        delay(3000);
    } else {
        digitalWrite(LEDPIN, LOW);
    }

    Serial.println(sum);
    delay(100);
}
