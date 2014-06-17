/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
 */

@class NSString;

@interface BKSProcessAssertionCreateEvent : BKSProcessAssertionUpdateEvent <BSXPCCoding> {
    unsigned int _reason;
    NSString *_targetBundleIdentifier;
    int _targetPID;
}

@property unsigned int reason;
@property int targetPID;
@property(copy) NSString * targetBundleIdentifier;


- (void)setReason:(unsigned int)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (int)targetPID;
- (id)targetBundleIdentifier;
- (void)setTargetPID:(int)arg1;
- (void)setTargetBundleIdentifier:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (unsigned int)reason;
- (id)description;
- (void)dealloc;

@end
