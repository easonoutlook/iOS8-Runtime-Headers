/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSMachSendRight : NSObject <NSCopying, BSXPCCoding> {
    unsigned int _sendRight;
}

@property unsigned int sendRight;

+ (BOOL)portRightIsUsable:(unsigned int)arg1;
+ (id)wrapSendRight:(unsigned int)arg1;

- (id)initWithSendRight:(unsigned int)arg1 assumeOwnership:(BOOL)arg2;
- (BOOL)isUsable;
- (void)setSendRight:(unsigned int)arg1;
- (id)_initWithSendRight:(unsigned int)arg1 insertRight:(BOOL)arg2;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (unsigned int)sendRight;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;

@end
