BOARDCPPSRC =  $(BOARD_DIR)/board_configuration.cpp \
  $(BOARD_DIR)/board_storage.cpp \
    $(BOARD_DIR)/default_tune.cpp \


BOARDINC += $(BOARD_DIR)/generated/controllers/generated

# defines SHORT_BOARD_NAME
include $(BOARD_DIR)/meta-info.env

# reduce memory usage monitoring
DDEFS += -DRAM_UNUSED_SIZE=100

# assign critical LED to a non-existent pin if you do not have it on your board
# good old PD14 is still the default value
# todo https://github.com/rusefi/fw-custom-mega/issues/1
# DDEFS += -DLED_CRITICAL_ERROR_BRAIN_PIN=Gpio::I15


# USE_OPT += -Wl,--defsym=FLASH_SIZE=768k

#Serial flash support
#include $(PROJECT_DIR)/hw_layer/drivers/flash/sst26f_jedec.mk
