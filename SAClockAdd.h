/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class SAClockObject;

@interface SAClockAdd : SADomainCommand  {
}

@property(retain) SAClockObject * clockToAdd;

+ (id)addWithDictionary:(id)arg1 context:(id)arg2;
+ (id)add;

- (void)setClockToAdd:(id)arg1;
- (id)clockToAdd;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
