/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class SALocalSearchRoute, SALocalSearchAceNavigationEta, NSString;

@interface SALocalSearchGetNavigationStatusCompleted : SABaseCommand <SAServerBoundCommand> {
}

@property(retain) SALocalSearchAceNavigationEta * nextManeuverEta;
@property(retain) SALocalSearchAceNavigationEta * overallEta;
@property(retain) SALocalSearchRoute * route;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)getNavigationStatusCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getNavigationStatusCompleted;

- (id)route;
- (void)setRoute:(id)arg1;
- (void)setOverallEta:(id)arg1;
- (id)overallEta;
- (void)setNextManeuverEta:(id)arg1;
- (id)nextManeuverEta;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
