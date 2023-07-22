# MCU name

# Bootloader selection
BOOTLOADER = stm32-dfu

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = no       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = no           # Enable N-Key Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = yes       # Enable keyboard RGB underglow
# RGBLIGHT_DRIVER = APA102  #WS2812
AUDIO_ENABLE = no           # Audio output
STENO_ENABLE = no
SPLIT_KEYBOARD = yes
SERIAL_DRIVER = usart
KEYBOARD_SHARED_EP = yes

OPT_DEFS += -DSTM32_DMA_REQUIRED=TRUE
VIA_ENABLE = no

SPLIT_TRANSPORT = serial_usart
# RGB_MATRIX_ENABLE = yes
# RGB_MATRIX_DRIVER = WS2812
