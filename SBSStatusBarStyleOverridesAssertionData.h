/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@class NSString;

@interface SBSStatusBarStyleOverridesAssertionData : NSObject <NSSecureCoding> {
    BOOL _exclusive;
    BOOL _isExclusive;
    int _statusBarStyleOverrides;
    int _pid;
    NSString *_uniqueIdentifier;
}

@property int statusBarStyleOverrides;
@property int pid;
@property(readonly) BOOL isExclusive;
@property(copy) NSString * uniqueIdentifier;
@property(getter=isExclusive) BOOL exclusive;

+ (BOOL)supportsSecureCoding;

- (void)setStatusBarStyleOverrides:(int)arg1;
- (id)initWithStatusBarStyleOverrides:(int)arg1 forPID:(int)arg2 exclusive:(BOOL)arg3 uniqueIdentifier:(id)arg4;
- (int)statusBarStyleOverrides;
- (id)initWithStatusBarStyleOverrides:(int)arg1 forPID:(int)arg2 exclusive:(BOOL)arg3;
- (void)setPid:(int)arg1;
- (int)pid;
- (void)setUniqueIdentifier:(id)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)setExclusive:(BOOL)arg1;
- (BOOL)isExclusive;
- (BOOL)isExclusive;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)uniqueIdentifier;
- (void)dealloc;

@end
