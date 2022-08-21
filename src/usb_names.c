#include <usb_names.h>

#define MIDI_NAME    {'T','e','l','e','t','o','u','c','h'}
#define MIDI_NAME_LEN  9

struct usb_string_descriptor_struct usb_string_product_name = {
  2 + MIDI_NAME_LEN * 2,
  3,
  MIDI_NAME
};
