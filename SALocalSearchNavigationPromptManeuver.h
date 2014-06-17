/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSNumber;

@interface SALocalSearchNavigationPromptManeuver : SADomainCommand  {
}

@property(copy) NSNumber * maneuverIndex;

+ (id)navigationPromptManeuverWithDictionary:(id)arg1 context:(id)arg2;
+ (id)navigationPromptManeuver;

- (void)setManeuverIndex:(id)arg1;
- (id)maneuverIndex;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
