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

@interface SKColorize : SKAction  {

  /* Error parsing encoded ivar type info: ^{SKCColorize=^^?If@BddffdBB@?iffff{?=ffff}f{?=ffff}f{?=ffff}fc} */
    struct SKCColorize { int (**x1)(); unsigned int x2; float x3; id x4; boolx5; double x6; double x7; float x8; float x9; double x10; boolx11; boolx12; id x13; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x14; int x15; float x16; float x17; float x18; float x19; struct { float x_20_1_1; float x_20_1_2; float x_20_1_3; float x_20_1_4; } x20; float x21; struct { float x_22_1_1; float x_22_1_2; float x_22_1_3; float x_22_1_4; } x22; float x23; struct { float x_24_1_1; float x_24_1_2; float x_24_1_3; float x_24_1_4; } x24; float x25; BOOL x26; } *_mycaction;

}

+ (id)colorizeWithColorBlendFactor:(float)arg1 duration:(double)arg2;
+ (id)colorizeWithColor:(id)arg1 colorBlendFactor:(float)arg2 duration:(double)arg3;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)reversedAction;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end