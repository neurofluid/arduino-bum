/* B.U.M. The Bathroom Usage Monitor.
 *
 * Heavily influenced by the folks at Sanborn (http://www.sanbornmediafactory.com/portfolio_pieces/bum/#)
 * and our own legs-crossed pressing needs at Playerize Networks Inc and East Side Game Studio
 *
 * I hereby release this to the public domain. Use at your own risk. If you burn down your cat and your house
 * runs away by using this code, it's your own fault for trying it.
 *
 * Overview:
 * This sketch is one of 3 components cobbled together to monitor the doors and lights of a pair of bathrooms
 * in our office. Due to the number of people in our office, it's not unusual to make the trip to the bathroom 
 * only to find that both of them are occupied. This Frankenstein's monster of parts intends to relieve the pressure,
 * so to speak, by allowing people to access an internal web site and view the status of the bathrooms. 
 *
 * The Arduino monitors two states for each bathroom: light on/off, door open/closed. This is done via two photocells and
 * two common wired magnetic window/door switches used by alarm systems.
 *
 * I decided it was prudent to monitor the light states as the bathroom fans only run when the lights are on. You can reach
 * your own conclusion. 
 *
 * Requirements:
 *   - Arduino (this example uses the Duemilanova)
 *   - Bluetooth module (JY-MCU or equivalent)
 *   - A Bluetooth-capable computer to act as a web server
 *   - 2 common wired magnetic window/door switches
 *   - 2 photocells (cadmium sulfide)
 *   - 4 LEDs (two red, two green)
 *   - misc wiring, solder and soldering skills
 *   - probably a box to tuck it all into
 *
 * @author Krys Wallbank <arduino.bum@crucut.com>
*/
int bat1OccupiedLED = 12;
int bat1VacantLED = 11
int bat2OccupiedLED = 10
int bat2VacantLED = 09;

int pin = 13;

void setup()
{
  pinMode(bat1OccupiedLED, OUTPUT);
  pinMode(bat1VacantLED, OUTPUT);
  pinMode(bat2OccupiedLED, OUTPUT);
  pinMode(bat2VacantLED, OUTPUT);
  initialize();
}

void loop()
{
  /* check the photocells
   * check the switches
   * update the registers for the status of each
   * check the bluetooth module for a status request
   * return a JSON object of the status of the devices
   * rinse, repeat
  */
}

// initialize LEDs and BT
void initialize()
{
  //flash all LEDs to show they're working and the board is initializing
  allLEDsOff();
  delay(250);
  allLEDsON();
  delay(250);
  allLEDsOff();
}

 // set all LEDs off
void allLEDsOff()
{
  digitalWrite(bat1OccupiedLED, LOW);
  digitalWrite(bat1VacantLED, LOW);
  digitalWrite(bat2OccupiedLED, LOW);
  digitalWrite(bat2VacantLED, LOW);
}
 // set all LEDs off
void allLEDsOn()
{
  digitalWrite(bat1OccupiedLED, HIGH);
  digitalWrite(bat1VacantLED, HIGH);
  digitalWrite(bat2OccupiedLED, HIGH);
  digitalWrite(bat2VacantLED, HIGH);
}
