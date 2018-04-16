/* Copyright (C) 2014-2016 by Jacob Alexander
 *
 * This file is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This file is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this file.  If not, see <http://www.gnu.org/licenses/>.
 */

// This file was generated by the kll compiler, DO NOT EDIT.
// Generation Date:    2018-04-16
// KLL Backend:        kiibohd
// KLL Git Rev:        ee4008a1905ca14bac641f581304c3b967b8ddc3
// KLL Git Changes:    None
// Compiler arguments:
//    /srv/KiiConf-Alpha/controller/kll/kll.py
//      /srv/KiiConf-Alpha/controller/Scan/ISSILed/capabilities.kll
//      /srv/KiiConf-Alpha/controller/Scan/MatrixARM/capabilities.kll
//      /srv/KiiConf-Alpha/controller/Macro/PartialMap/capabilities.kll
//      /srv/KiiConf-Alpha/controller/Output/pjrcUSB/capabilities.kll
//      /srv/KiiConf-Alpha/controller/Scan/WhiteFox/scancode_map.kll
//      -d
//      WhiteFox-AriaBlank-0.kll
//      /srv/KiiConf-Alpha/controller/kll/layouts/stdFuncMap.kll
//      -p
//      WhiteFox-AriaBlank-1.kll
//      /srv/KiiConf-Alpha/controller/kll/layouts/stdFuncMap.kll
//    --backend
//      kiibohd
//    --templates
//      /srv/KiiConf-Alpha/controller/kll/templates/kiibohdKeymap.h
//      /srv/KiiConf-Alpha/controller/kll/templates/kiibohdDefs.h
//    --outputs
//      generatedKeymap.h
//      kll_defs.h
//
// - Base Layer -
//    ISSILedCapabilities
//      /srv/KiiConf-Alpha/controller/Scan/ISSILed/capabilities.kll
//    MatrixArmCapabilities
//      /srv/KiiConf-Alpha/controller/Scan/MatrixARM/capabilities.kll
//    PartialMapCapabilities
//      /srv/KiiConf-Alpha/controller/Macro/PartialMap/capabilities.kll
//    pjrcUSBCapabilities
//      /srv/KiiConf-Alpha/controller/Output/pjrcUSB/capabilities.kll
//    WhiteFox
//      /srv/KiiConf-Alpha/controller/Scan/WhiteFox/scancode_map.kll
// - Default Layer -
//    WhiteFox
//      WhiteFox-AriaBlank-0.kll
//    stdFuncMap
//      /srv/KiiConf-Alpha/controller/kll/layouts/stdFuncMap.kll
// - Partial Layers -
//    Layer 1
//     WhiteFox
//       WhiteFox-AriaBlank-1.kll
//     stdFuncMap
//       /srv/KiiConf-Alpha/controller/kll/layouts/stdFuncMap.kll



#pragma once

// ----- Enums -----

// Capability Indices
typedef enum CapabilityIndex {
	LED_control_capability_index,
	Macro_layerLatch_capability_index,
	Macro_layerLock_capability_index,
	Macro_layerRotate_capability_index,
	Macro_layerShift_capability_index,
	Macro_layerState_capability_index,
	Output_consCtrlSend_capability_index,
	Output_flashMode_capability_index,
	Output_kbdProtocolBoot_capability_index,
	Output_kbdProtocolNKRO_capability_index,
	Output_noneSend_capability_index,
	Output_sysCtrlSend_capability_index,
	Output_toggleKbdProtocol_capability_index,
	Output_usbCodeSend_capability_index,
	Output_usbMouse_capability_index,
} CapabilityIndex;



// ----- Defines -----

// -- Interconnect Node Maximum --
#define InterconnectNodeMax 0x1


// -- Capability / KLL Defines --

#define enableMouse_define 1
#define StateWordSize_define 8
#define KeyboardLocale_define 0
#define enableUSBResume_define 1
#define flashModeEnabled_define 0
#define StrobeDelay_define 0
#define ISSILedMask1_define  \
	0xFF, 0x00, /* C1-1 -> C1-16 */ \
	0xFF, 0x00, /* C2-1 -> C2-16 */ \
	0xFF, 0x00, /* C3-1 -> C3-16 */ \
	0xFF, 0x00, /* C4-1 -> C4-16 */ \
	0xFF, 0x00, /* C5-1 -> C5-16 */ \
	0xFF, 0x00, /* C6-1 -> C6-16 */ \
	0xFF, 0x00, /* C7-1 -> C7-16 */ \
	0xFF, 0x00, /* C8-1 -> C8-16 */ \
	0xFF, 0x00, /* C9-1 -> C9-16 */ \

#define DebounceThrottleDiv_define 0
#define DebounceDivThreshold_define 65535
#define MinDebounceTime_define 5
#define enableKeyboard_define 1
#define ISSILedBrightness1_define  \
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* C1-1 -> C1-16 */ \
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* C2-1 -> C2-16 */ \
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* C3-1 -> C3-16 */ \
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* C4-1 -> C4-16 */ \
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* C5-1 -> C5-16 */ \
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* C6-1 -> C6-16 */ \
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* C7-1 -> C7-16 */ \
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* C8-1 -> C8-16 */ \
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* C9-1 -> C9-16 */ \

#define USBProtocol_define 1
#define enableJoystick_define 0
#define enableDeviceRestartOnUSBTimeout_define 0
#define enableUSBLowPowerNegotiation_define 0
#define enableRawIO_define 0
#define enableUSBSuspend_define 1
#define enableVirtualSerialPort_define 1
#define IndexWordSize_define 16
#define CapabilitiesNum_KLL 15
#define ResultMacroNum_KLL 95
#define TriggerMacroNum_KLL 103
#define LayerNum_KLL 2

// -- Built-in Defines --


