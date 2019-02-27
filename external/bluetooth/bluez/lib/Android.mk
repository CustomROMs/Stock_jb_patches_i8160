LOCAL_PATH:= $(call my-dir)
include $(CLEAR_VARS)

LOCAL_SRC_FILES:= \
	bluetooth.c \
	sdp.c \
	hci.c \
	uuid.c \

LOCAL_C_INCLUDES:= \
	$(LOCAL_PATH)/bluetooth \

LOCAL_SHARED_LIBRARIES := \
	libcutils \
	liblog \

ifeq ($(BOARD_HAVE_BLUETOOTH_STE),true)
LOCAL_CFLAGS += \
	-DBOARD_HAVE_BLUETOOTH_STE
endif

LOCAL_MODULE:=libbluetooth

LOCAL_CFLAGS+=-O3

include $(BUILD_SHARED_LIBRARY)
