#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "DeviceUtils.h"
#import "RNReactNativeHapticFeedback.h"

FOUNDATION_EXPORT double react_native_haptic_feedbackVersionNumber;
FOUNDATION_EXPORT const unsigned char react_native_haptic_feedbackVersionString[];

