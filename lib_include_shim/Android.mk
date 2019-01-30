LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_SRC_FILES := \
    mtk_cam.cpp \


LOCAL_SHARED_LIBRARIES := liblbs_core
LOCAL_MODULE := lib_include_shim
LOCAL_MODULE_TAGS := optional

include $(BUILD_SHARED_LIBRARY)
