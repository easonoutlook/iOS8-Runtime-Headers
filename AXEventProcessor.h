/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSThread;

@interface AXEventProcessor : NSObject  {
    BOOL _shouldRunHIDReceiveThreadRunloop;
    BOOL _shouldNotifyUserEventOccurred;
    BOOL _ignoreAllHIDEvents;
    BOOL _ignoreAllSystemEvents;
    BOOL _handlingHIDEvents;
    BOOL _handlingSystemEvents;
    NSString *_HIDEventTapIdentifier;
    int _HIDEventTapPriority;
    NSThread *_HIDEventReceiveThread;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _HIDEventHandler;

    NSString *_systemEventTapIdentifier;
    int _systemEventTapPriority;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _systemEventHandler;

}

@property BOOL shouldNotifyUserEventOccurred;
@property(retain) NSString * HIDEventTapIdentifier;
@property int HIDEventTapPriority;
@property(retain) NSThread * HIDEventReceiveThread;
@property(copy) id HIDEventHandler;
@property BOOL ignoreAllHIDEvents;
@property(retain) NSString * systemEventTapIdentifier;
@property int systemEventTapPriority;
@property(copy) id systemEventHandler;
@property BOOL ignoreAllSystemEvents;
@property(getter=isHandlingHIDEvents) BOOL handlingHIDEvents;
@property(getter=isHandlingSystemEvents) BOOL handlingSystemEvents;


- (void)setIgnoreAllSystemEvents:(BOOL)arg1;
- (BOOL)ignoreAllSystemEvents;
- (void)setIgnoreAllHIDEvents:(BOOL)arg1;
- (BOOL)ignoreAllHIDEvents;
- (id)HIDEventReceiveThread;
- (void)setShouldNotifyUserEventOccurred:(BOOL)arg1;
- (void)restoreSystemEventTapPriorityToDefault;
- (void)raiseSystemEventTapPriorityToMaximum;
- (void)endHandlingSystemEvents;
- (void)beginHandlingSystemEvents;
- (void)restoreHIDEventTapPriorityToDefault;
- (void)raiseHIDEventTapPriorityToMaximum;
- (void)endHandlingHIDEvents;
- (void)beginHandlingHIDEvents;
- (id)initWithHIDTapIdentifier:(id)arg1 HIDEventTapPriority:(int)arg2 systemEventTapIdentifier:(id)arg3 systemEventTapPriority:(int)arg4;
- (id)systemEventHandler;
- (id)HIDEventHandler;
- (BOOL)shouldNotifyUserEventOccurred;
- (int)systemEventTapPriority;
- (void)_uninstallSystemEventFilter;
- (void)_installSystemEventFilter;
- (void)setHandlingSystemEvents:(BOOL)arg1;
- (BOOL)isHandlingSystemEvents;
- (id)systemEventTapIdentifier;
- (int)HIDEventTapPriority;
- (void)_uninstallHIDEventFilter;
- (void)_installHIDEventFilter;
- (void)setHandlingHIDEvents:(BOOL)arg1;
- (BOOL)isHandlingHIDEvents;
- (id)HIDEventTapIdentifier;
- (void)setHIDEventReceiveThread:(id)arg1;
- (void)setSystemEventHandler:(id)arg1;
- (void)setHIDEventHandler:(id)arg1;
- (void)_runHIDEventReceiveThread;
- (void)setSystemEventTapPriority:(int)arg1;
- (void)setSystemEventTapIdentifier:(id)arg1;
- (void)setHIDEventTapPriority:(int)arg1;
- (void)setHIDEventTapIdentifier:(id)arg1;
- (void)dealloc;

@end
