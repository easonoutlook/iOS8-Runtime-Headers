/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSArray;

@interface SAReminderSearchCompleted : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSArray * results;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)searchCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)searchCompleted;

- (id)encodedClassName;
- (void)setResults:(id)arg1;
- (id)results;
- (id)groupIdentifier;

@end
