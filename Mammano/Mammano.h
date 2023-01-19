/*
  Mammano.h - A PWM toolkit for ESP32 - Uses the ledc library to power sensors and other low amperage devices
  // TODO: Add MIT license or equivalent
*/

// ensure this library description is only included once
#ifndef Mammano_h
#define Mammano_h

// include types & constants of Wiring core API

// library interface description
class Mammano
{
  // user-accessible "public" interface
  public:
    Mammano(int, int);
    void sendPulse(void);

  // library-accessible "private" interface
  private:
    int frequency;
    int bitness;
    void setChannel(void);
};

#endif
