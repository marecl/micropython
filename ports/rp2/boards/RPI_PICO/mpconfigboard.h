// Board and hardware specific configuration
#define MICROPY_HW_BOARD_NAME                   "Raspberry Pi Pico"
#define MICROPY_HW_FLASH_STORAGE_BYTES          (1408 * 1024)

// Enable USB Mass Storage with FatFS filesystem.
#define MICROPY_VFS_FAT                 (1)
#define MICROPY_HW_USB_MSC              (1)
#define MICROPY_HW_USB_VID              (0x2341)
#define MICROPY_HW_USB_PID              (0x025e)
#define MICROPY_HW_USB_CDC_1200BPS_TOUCH (1)
