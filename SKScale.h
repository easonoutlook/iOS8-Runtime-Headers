/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface SKScale : SKAction  {

  /* Error parsing encoded ivar type info: ^{SKCScale=^^?If@BddffdBB@?ifffffffffffffcccc} */
    struct SKCScale { int (**x1)(); unsigned int x2; float x3; id x4; boolx5; double x6; double x7; float x8; float x9; double x10; boolx11; boolx12; id x13; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x14; int x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23; float x24; float x25; float x26; float x27; float x28; BOOL x29; BOOL x30; BOOL x31; BOOL x32; } *_mycaction;

}

+ (id)scaleYBy:(float)arg1 duration:(double)arg2;
+ (id)scaleXBy:(float)arg1 duration:(double)arg2;
+ (id)scaleYTo:(float)arg1 duration:(double)arg2;
+ (id)scaleXTo:(float)arg1 duration:(double)arg2;
+ (id)scaleXTo:(float)arg1 y:(float)arg2 duration:(double)arg3;
+ (id)scaleXBy:(float)arg1 y:(float)arg2 duration:(double)arg3;
+ (id)scaleTo:(float)arg1 duration:(double)arg2;
+ (id)scaleBy:(float)arg1 duration:(double)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)reversedAction;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
