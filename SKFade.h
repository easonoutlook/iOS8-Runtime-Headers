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

@interface SKFade : SKAction  {

  /* Error parsing encoded ivar type info: ^{SKCFade=^^?If@BddffdBB@?ifffffffc} */
    struct SKCFade { int (**x1)(); unsigned int x2; float x3; id x4; boolx5; double x6; double x7; float x8; float x9; double x10; boolx11; boolx12; id x13; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x14; int x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; BOOL x23; } *_mycaction;

}

+ (id)fadeInWithDuration:(double)arg1;
+ (id)fadeOutWithDuration:(double)arg1;
+ (id)fadeAlphaTo:(float)arg1 duration:(double)arg2;
+ (id)fadeAlphaBy:(float)arg1 duration:(double)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)reversedAction;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
