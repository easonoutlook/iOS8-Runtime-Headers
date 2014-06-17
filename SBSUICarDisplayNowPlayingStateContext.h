/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@class NSString;

@interface SBSUICarDisplayNowPlayingStateContext : NSObject <NSSecureCoding> {
    NSString *_stateName;
    NSString *_animationName;
    NSString *_associatedBundleID;
}

@property(copy) NSString * stateName;
@property(copy) NSString * animationName;
@property(copy) NSString * associatedBundleID;

+ (id)contextWithState:(id)arg1 animationName:(id)arg2;
+ (BOOL)supportsSecureCoding;

- (id)animationName;
- (id)associatedBundleID;
- (id)stateName;
- (void)setAssociatedBundleID:(id)arg1;
- (void)setAnimationName:(id)arg1;
- (void)setStateName:(id)arg1;
- (id)initWithState:(id)arg1 animationName:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;

@end
