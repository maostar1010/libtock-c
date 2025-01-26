#pragma once

#include "../tock.h"
#include "syscalls/usb_keyboard_hid_syscalls.h"

#ifdef __cplusplus
extern "C" {
#endif

// Function signature for send done callbacks.
//
// - `arg1` (`returncode_t`): Status of USB keyboard HID send operation.
typedef void (*libtock_usb_keyboard_hid_callback)(returncode_t);

// Set the buffer to the over the USB keyboard HID interface. The callback will
// be triggered when the send has completed.
returncode_t libtock_usb_keyboard_hid_send(uint8_t* buffer, uint32_t len, libtock_usb_keyboard_hid_callback cb);

#ifdef __cplusplus
}
#endif
