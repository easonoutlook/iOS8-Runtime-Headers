/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface CASlotProxy : NSObject  {
    struct Proxy { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; unsigned long long x3; } *_proxy;
}


- (id)initWithName:(unsigned int)arg1;
- (struct Object { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; }*)CA_copyRenderValue;
- (void)dealloc;

@end
