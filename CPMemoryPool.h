/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@class NSMutableArray;

@interface CPMemoryPool : NSObject  {
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } _lock;
    NSMutableArray *_files;
    char *_label;
    unsigned long _slotLength;
}

@property(readonly) unsigned long slotLength;


- (unsigned long)slotLength;
- (id)initWithLabel:(const char *)arg1 slotLength:(unsigned long)arg2;
- (id)nextSlotWithBytes:(const void*)arg1 length:(unsigned long)arg2;
- (void)dealloc;

@end
