/*
 * This file has been automatically generated by the WICED 20719-B1 Designer.
 * Definitions for constants used in the device's GATT database and function
 * prototypes.
 *
 */

// exjobb_dualmode_db.h

#ifndef __GATT_DATABASE_H__
#define __GATT_DATABASE_H__

#define __UUID_CUSTOM_SERIAL_GATT                       0x41, 0x69, 0x74, 0x56, 0x97, 0x06, 0x43, 0x7b, 0x86, 0xc6, 0xc6, 0xf1, 0x5c, 0x6f, 0x3f, 0x07
#define __UUID_CUSTOM_SERIAL_GATT_RX                    0x32, 0xb3, 0x5e, 0x45, 0x76, 0x43, 0x4a, 0x72, 0x91, 0x2c, 0xff, 0x8c, 0xcf, 0xd0, 0x24, 0xed
#define __UUID_CUSTOM_SERIAL_GATT_TX                    0x86, 0xb2, 0x84, 0xb6, 0x5c, 0x9e, 0x49, 0x81, 0xbf, 0x63, 0xab, 0x87, 0xc2, 0x1d, 0xaf, 0xaf

// ***** Primary Service 'Generic Attribute'
#define HDLS_GENERIC_ATTRIBUTE                          0x0001

// ***** Primary Service 'Generic Access'
#define HDLS_GENERIC_ACCESS                             0x0014
// ----- Characteristic 'Device Name'
#define HDLC_GENERIC_ACCESS_DEVICE_NAME                 0x0015
#define HDLC_GENERIC_ACCESS_DEVICE_NAME_VALUE           0x0016
// ----- Characteristic 'Appearance'
#define HDLC_GENERIC_ACCESS_APPEARANCE                  0x0017
#define HDLC_GENERIC_ACCESS_APPEARANCE_VALUE            0x0018

// ***** Primary Service 'Custom Serial GATT'
#define HDLS_CUSTOM_SERIAL_GATT                         0x0028
// ----- Characteristic 'RX'
#define HDLC_CUSTOM_SERIAL_GATT_RX                      0x0029
#define HDLC_CUSTOM_SERIAL_GATT_RX_VALUE                0x002A
// ===== Descriptor 'User Description'
#define HDLD_CUSTOM_SERIAL_GATT_RX_USER_DESCRIPTION     0x002B
// ===== Descriptor 'Client Configuration'
#define HDLD_CUSTOM_SERIAL_GATT_RX_CLIENT_CONFIGURATION 0x002C
// ----- Characteristic 'TX'
#define HDLC_CUSTOM_SERIAL_GATT_TX                      0x002D
#define HDLC_CUSTOM_SERIAL_GATT_TX_VALUE                0x002E
// ===== Descriptor 'User Description'
#define HDLD_CUSTOM_SERIAL_GATT_TX_USER_DESCRIPTION     0x002F

// External Lookup Table Entry
typedef struct
{
    uint16_t handle;
    uint16_t max_len;
    uint16_t cur_len;
    uint8_t  *p_data;
} gatt_db_lookup_table;

// External definitions
extern const uint8_t  gatt_database[];
extern const uint16_t gatt_database_len;
extern gatt_db_lookup_table exjobb_dualmode_gatt_db_ext_attr_tbl[];
extern const uint16_t exjobb_dualmode_gatt_db_ext_attr_tbl_size;
extern uint8_t BT_LOCAL_NAME[];
extern const uint16_t BT_LOCAL_NAME_CAPACITY;

#endif /* __GATT_DATABASE_H__ */
