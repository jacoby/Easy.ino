// Sketch for Easy Button 
// 2012 Dave Jacoby <jacoby.david@gmail.com>

// This program for the Teensy takes a digital input on 10 (c7)
// and turns it into two Scroll Locks (ASCII 145), so I can use
// it as 

// Inspired by http://rasterweb.net/raster/2011/05/09/the-button/
// Not far divergent from sample code, with <10 lines of actual code
// so copyright? What copyright?

// ========= ========= ========= =========
void setup() {
  // make pin 10 an input and turn on the 
  // pullup resistor so it goes high unless
  // connected to ground:
  pinMode(10, INPUT_PULLUP);
  delay(2000);
  Keyboard.begin() ;
  }

// ========= ========= ========= =========
void loop() {
  if ( digitalRead( 10 ) == LOW ) {
    //Keyboard.write( 72 ); 
    //delay(300); 
    //Keyboard.write( 73 ); 
    //delay(300); 
    Keyboard.press( KEY_SCROLL_LOCK ) ;
    Keyboard.releaseAll() ;
    delay(300); 
    Keyboard.press( KEY_SCROLL_LOCK ) ;
    Keyboard.releaseAll() ;
    delay(600); // Delay of 6/10 second to keep from repeating.
    } 
  delay(10);
  }

