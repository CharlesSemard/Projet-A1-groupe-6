//From Arduino to Processing to Txt or cvs etc.
//import
import processing.serial.*;
//declare
PrintWriter output;
Serial udSerial;
String SenVal ;

void setup() {
  udSerial = new Serial(this, Serial.list()[0], 9600);
  output = createWriter ("Battements.csv");
}

  void draw() {
    if (udSerial.available() > 0) {
      SenVal += udSerial.readString();
      if (SenVal.indexOf('D') != -1 && SenVal.indexOf('F') != -1 && SenVal.substring(SenVal.indexOf('D') + 1, SenVal.indexOf('F')).indexOf('D') == -1) {
        output.println(SenVal.substring(SenVal.indexOf('D') + 1, SenVal.indexOf('F')));
        SenVal = SenVal.substring(SenVal.indexOf('F') + 1);
      }
    }
  }

  void keyPressed(){
    output.flush();
    output.close();
    exit(); 
  }