/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@class NSNumber, NSString;

@interface AFMetrics : NSObject <NSSecureCoding> {
    NSString *_originalCommandId;
    int _category;
    NSNumber *_duration;
}

@property(copy) NSString * originalCommandId;
@property int category;
@property(retain) NSNumber * duration;

+ (BOOL)supportsSecureCoding;

- (void)setOriginalCommandId:(id)arg1;
- (id)originalCommandId;
- (id)categoryString;
- (id)aceMetrics;
- (void).cxx_destruct;
- (void)setCategory:(int)arg1;
- (int)category;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)duration;
- (void)setDuration:(id)arg1;

@end
