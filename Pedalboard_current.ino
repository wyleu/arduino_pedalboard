#include <Control_Surface.h> // Include the Control Surface library
// Instantiate a MIDI over USB interface.
USBMIDI_Interface midi;
using namespace MIDI_Notes;
const Channel Channel_Current = CHANNEL_6;  //Bass 


NoteButton button01 = {
  0,                       // Push button on pin 1
  {note(C, 4), Channel_Current}, // Note C4 on MIDI channel 
};
NoteButton button02 = {
  1,                       // Push button on pin 2
  {note(B, 3), Channel_Current}, // Note C4 on MIDI channel 
}; 
NoteButton button03 = {
  2,                       // Push button on pin 3
  {note(Bb, 3), Channel_Current}, // Note C4 on MIDI channel 
};
NoteButton button04 = {
  3,                       // Push button on pin 4
  {note(A, 3), Channel_Current}, // Note C4 on MIDI channel 
};
NoteButton button05 = {
  4,                       // Push button on pin 5
  {note(Ab, 3), Channel_Current}, // Note C4 on MIDI channel
}; 
NoteButton button06 = {
  5,                       // Push button on pin 6
  {note(G, 3), Channel_Current}, // Note C4 on MIDI channel
};
NoteButton button07 = {
  6,                       // Push button on pin 7
  {note(Gb, 3), Channel_Current}, // Note C4 on MIDI channel
};
NoteButton button08 = {
  7,                       // Push button on pin 8
  {note(F, 3), Channel_Current}, // Note C4 on MIDI channel
};
NoteButton button09 = {
  8,                       // Push button on pin 9
  {note(E, 3), Channel_Current}, // Note C4 on MIDI channel
};
NoteButton button10 = {
  9,                       // Push button on pin 10
  {note(Eb, 3), Channel_Current}, // Note C4 on MIDI channel
};
NoteButton button11 = {
  10,                       // Push button on pin 11
  {note(D, 3), Channel_Current}, // Note C4 on MIDI channel
}; 
NoteButton button12 = {
  11,                       // Push button on pin 12
  {note(Db, 3), Channel_Current}, // Note C4 on MIDI channel
};
NoteButton button13 = {
  12,                       // Push button on pin 13
  {note(C, 3), Channel_Current}, // Note C4 on MIDI channel
};

void setup() {
  button01.invert();
  button02.invert();
  button03.invert();
  button04.invert();
  button05.invert();
  button06.invert();
  button07.invert();
  button08.invert();
  button09.invert();
  button10.invert();
  button11.invert();
  button12.invert();
  button13.invert();

  Control_Surface.begin(); // Initialize Control Surface
}
void loop() {
  Control_Surface.loop(); // Update the Control Surface
}
